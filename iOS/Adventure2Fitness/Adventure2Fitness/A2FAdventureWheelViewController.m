//
//  A2FAdventureWheelController.m
//  Adventure2Fitness
//
//  Created by Amber Meighan on 1/20/16.
//  Copyright © 2016 Adventure To Fitness. All rights reserved.
//

#import "A2FAdventureWheelViewController.h"
#import "A2FExerciseWheel.h"
#import <AVFoundation/AVFoundation.h>
#import <AudioToolbox/AudioToolbox.h>
#import <QuartzCore/QuartzCore.h>
#import <AVKit/AVKit.h>

@interface A2FAdventureWheelViewController ()

@property (nonatomic, strong) A2FExerciseWheel *wheel;

@end


@implementation A2FAdventureWheelViewController

- (void)viewDidLoad {
    [super viewDidLoad];

    [self setupWheel:7];
    [self setupSpinButton];
    
    // Add pick image
    UIImageView *pickImage = [[UIImageView alloc] initWithImage:[UIImage imageNamed:@"pick.png"]];
    pickImage.layer.anchorPoint = CGPointMake(1.0f, 0.5f);
    pickImage.layer.position = CGPointMake(self.view.bounds.size.width/2.0 - 125,
                                    self.view.bounds.size.height/2.0 + 50);
    pickImage.transform = CGAffineTransformMakeRotation(-self.wheel.angleSize/2);
    
    
    [self.gameView addSubview:pickImage];
    [self.gameView addSubview:self.backButton];
    
    // Initialize video view controller
    self.videoPlayerViewController = [[AVPlayerViewController alloc] init];
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(didFinishPlaying:) name:AVPlayerItemDidPlayToEndTimeNotification object:self.videoPlayerViewController.player];
    
}

- (void)viewWillAppear:(BOOL)animated {
    //may be used for timing on intro video
}

- (void)viewWillDisappear:(BOOL)animated {
    //may be used for timing on intro video
}

- (void) setupWheel:(int)numberOfSections {
    //Set up wheel
    self.wheel = [[A2FExerciseWheel alloc] initWithFrame:[self.gameView bounds]
                                             andDelegate:self
                                            withSections:numberOfSections];
    self.wheel.center = CGPointMake(self.gameView.frame.size.width/2.0, self.gameView.frame.size.height/2.0);
    [self.wheel setTranslatesAutoresizingMaskIntoConstraints:NO];
    [self.gameView addSubview:self.wheel];
    
    // Wheel Layout Contraints
    NSDictionary *views = @{@"wheel":self.wheel};
    
    [self.gameView addConstraints:[NSLayoutConstraint constraintsWithVisualFormat:@"V:|[wheel]|"
                                                                      options:NSLayoutFormatDirectionLeadingToTrailing
                                                                      metrics:nil
                                                                        views:views]];
    [self.gameView addConstraints:[NSLayoutConstraint constraintsWithVisualFormat:@"H:|[wheel]|"
                                                                      options:NSLayoutFormatDirectionLeadingToTrailing
                                                                      metrics:nil
                                                                        views:views]];
    
    [[NSNotificationCenter defaultCenter] addObserver:self
                                             selector:@selector(animateTextAndAudio)
                                                 name:@"sectorSelected"
                                               object:nil];

}

- (void) setupSpinButton {
    // Create Spin Button
    int buttonWidth = 150;
    int buttonHeight = 80;
    int padding = 30;
    float X_Co = self.gameView.frame.size.width - buttonWidth -  padding;
    float Y_Co = self.gameView.frame.size.height - buttonHeight -  padding;
    
    self.spinButton = [[UIButton alloc] initWithFrame:CGRectMake(X_Co, Y_Co, buttonWidth, buttonHeight)];
    [self.spinButton setTitle:@"Spin!" forState:UIControlStateNormal];
    [self.spinButton.titleLabel setFont:[UIFont fontWithName:@"Boogaloo" size:40.0f]];
    [self.spinButton addTarget:self.wheel action:@selector(spin)
              forControlEvents:UIControlEventTouchUpInside];
    self.spinButton.layer.cornerRadius = 10.0f;

    self.spinButton.layer.borderWidth = 3.0f;
    self.spinButton.layer.borderColor = [[UIColor colorWithRed:140.0/255 green:46.0/255 blue:10.0/255 alpha:1.0] CGColor];
    self.spinButton.backgroundColor = [UIColor colorWithRed:238.0/255 green:164.0/255 blue:46.0/255 alpha:1.0];
    
    [self.gameView addSubview:self.spinButton];
    
    [self.spinButton addConstraint:[NSLayoutConstraint constraintWithItem:self.spinButton attribute:NSLayoutAttributeHeight relatedBy:NSLayoutRelationEqual toItem:self.spinButton attribute:NSLayoutAttributeWidth multiplier:(self.spinButton.frame.size.height/self.spinButton.frame.size.width) constant:0]];
}

- (void) animateTextAndAudio {
    //Create video clip label
    self.videoLabel = [[VideoTitleLabel alloc] initWithFrame:self.wheel.frame];
    
    self.videoLabel.textAlignment = NSTextAlignmentCenter;
    self.videoLabel.textColor = [UIColor colorWithRed:238.0/255 green:164.0/255 blue:46.0/255 alpha:1.0];
//    [self.videoLabel setBackgroundColor:[UIColor clearColor]];
//    self.videoLabel.textColor = [UIColor whiteColor];
    [self.videoLabel setFont:[UIFont fontWithName:@"Boogaloo" size:30.0f]];
    self.videoLabel.text = [self getSectorVideoName:self.wheel.selectedSector];
    [self.gameView addSubview:self.videoLabel];
    
    // Animate video clip label
    [UIView beginAnimations:nil context:NULL];
    [UIView setAnimationDuration:2.0f];
    [UIView setAnimationCurve:UIViewAnimationCurveEaseIn];
    if(self.wheel.selectedSector == 5) {
        CGAffineTransform t = CGAffineTransformMakeScale(1.5,1.5);
        self.videoLabel.transform = t;
    } else {
        CGAffineTransform t = CGAffineTransformMakeScale(2.0,2.0);
        self.videoLabel.transform = t;
    }
    [UIView commitAnimations];
    
    // Play video clip audio
    NSURL *videoTitleAudioURL = [[NSBundle mainBundle]
                           URLForResource:[self getSectorVideoName:self.wheel.selectedSector]
                           withExtension:@"aifc"];
    self.audioPlayer = [[AVAudioPlayer alloc] initWithContentsOfURL:videoTitleAudioURL error:nil];
    [self.audioPlayer play];
    
    [self performSelector:@selector(shouldPlayIntroVideo) withObject:nil afterDelay:3.0f];
}

- (void) shouldPlayIntroVideo {
    AppDelegate *delegate = (AppDelegate *)[[UIApplication sharedApplication] delegate];
    NSTimeInterval currentTime = [[NSDate date] timeIntervalSince1970];
    double timeSinceIntroPlayed = currentTime - delegate.timeVideoLastPlayed;
    
    if (delegate.timeVideoLastPlayed == INFINITY) {
        timeSinceIntroPlayed = delegate.timeVideoLastPlayed;
    }
    
    if (timeSinceIntroPlayed >= 7200){
        // Play intro
        NSURL *introURL = [[NSBundle mainBundle]
                           URLForResource:@"Intro"
                           withExtension:@"m4v"];
        self.videoPlayerViewController.player = [AVPlayer playerWithURL:introURL];
//        self.videoPlayerViewController.showsPlaybackControls = FALSE;
        [self presentViewController:self.videoPlayerViewController animated:YES completion:nil];
        [self.videoPlayerViewController.player play];
        // update time
        delegate.timeVideoLastPlayed = [[NSDate date] timeIntervalSince1970];
    } else {
        [self playSectorVideo];
        [self presentViewController:self.videoPlayerViewController animated:YES completion:nil];
    }
    // Reset Label
    [self.videoLabel removeFromSuperview];
}

-(void)didFinishPlaying:(NSNotification *) notification {
    // Will be called when AVPlayer finishes playing playerItem
    NSString *videoName = [(AVURLAsset *)self.videoPlayerViewController.player.currentItem.asset URL].lastPathComponent;
    if ([videoName  isEqual: @"Intro.m4v"]) {
        [self playSectorVideo];
    } else if(![videoName isEqual:@"Outro.m4v"]){
        [self playOutroVideo];
    } else if ([videoName  isEqual: @"Outro.m4v"]){
        [self.videoPlayerViewController dismissViewControllerAnimated:YES completion:nil];
        // Play spin again audio
        NSURL *spinAudioURL = [[NSBundle mainBundle]
                               URLForResource:@"Spin*"
                               withExtension:@"aifc"];
        self.audioPlayer = [[AVAudioPlayer alloc] initWithContentsOfURL:spinAudioURL error:nil];
        [self.audioPlayer play];
    }
}

- (void) playSectorVideo {
    NSURL *introURL = [[NSBundle mainBundle]
                       URLForResource:[self getSectorVideoName:self.wheel.selectedSector]
                       withExtension:@"m4v"];
    self.videoPlayerViewController.player = [AVPlayer playerWithURL:introURL];
    [self.videoPlayerViewController.player play];
    
}

- (void) playOutroVideo {
    NSURL *introURL = [[NSBundle mainBundle]
                       URLForResource:@"Outro"
                       withExtension:@"m4v"];
    self.videoPlayerViewController.player = [AVPlayer playerWithURL:introURL];
//    self.videoPlayerViewController.showsPlaybackControls = FALSE;
    [self.videoPlayerViewController.player play];
}

- (IBAction)backToHQ:(id)sender {
    [self.navigationController popToRootViewControllerAnimated:YES];
}

- (NSString *) getSectorVideoName:(int)position {
    NSString *res = @"";
    switch (position) {
        case 0:
            res = @"Dino Disaster";
            break;
            
        case 1:
            res = @"Big Bad Apple";
            break;
            
        case 2:
            res = @"Chinese Challenge";
            break;
            
        case 3:
            res = @"Atlantis Aquaventure";
            break;
            
        case 4:
            res = @"Serengeti Stampede";
            
            break;
            
        case 5:
            res = @"Ox Tails, Rails and Egyptian Trails";
            break;
            
        case 6:
            res = @"Les Pie Rats of the Caribbean";
            break;
            
        default:
            break;
    }
    return res;
}


@end

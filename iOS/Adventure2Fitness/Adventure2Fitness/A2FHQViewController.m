//
//  ViewController.m
//  Adventure2Fitness
//
//  Created by Amber Meighan on 1/17/16.
//  Copyright © 2016 Adventure To Fitness. All rights reserved.
//

#import "A2FHQViewController.h"
#import <AVFoundation/AVFoundation.h>
#import <AudioToolbox/AudioToolbox.h>
#import <QuartzCore/QuartzCore.h>
#import <AVKit/AVKit.h>


@implementation A2FHQViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.muted = NO;
    
    self.adventureButton.layer.cornerRadius = 10.0f;
    self.adventureButton.layer.borderWidth = 3.0f;
    self.adventureButton.layer.borderColor = [[UIColor whiteColor] CGColor];
    
    self.scanPictureButton.layer.cornerRadius = 10.0f;
    self.scanPictureButton.layer.borderWidth = 3.0f;
    self.scanPictureButton.layer.borderColor = [[UIColor whiteColor] CGColor];
}

-(void) viewWillAppear:(BOOL)animated {
    // Play short audio
    NSURL *themeSongURL = [[NSBundle mainBundle]
                           URLForResource:@"Hey kids_short"
                           withExtension:@"aifc"];
    self.audioPlayer = [[AVAudioPlayer alloc] initWithContentsOfURL:themeSongURL error:nil];
    self.audioPlayer.volume = 1.0;
    [self.audioPlayer play];
    
    // Play video clip audio
    NSURL *themeSong = [[NSBundle mainBundle]
                        URLForResource:@"A2F Theme Song"
                        withExtension:@"wav"];
    self.themeSongPlayer = [[AVAudioPlayer alloc] initWithContentsOfURL:themeSong error:nil];
    self.themeSongPlayer.numberOfLoops = -1;
    self.themeSongPlayer.volume = 0.5;
    [self.themeSongPlayer play];

    
    [self performSelector:@selector(playThemeSong) withObject:nil afterDelay:2.0f];
}

- (void) viewWillDisappear:(BOOL)animated {
    [self.themeSongPlayer stop];
}

- (void) playThemeSong {
    self.themeSongPlayer.volume = 1.0f;
}
- (IBAction)speakerOnOff:(id)sender {
    // Icon made by Flaticon Basic License from www.flaticon.com **note in credits**
    if (self.muted) {
        self.muted = NO;
        [self.themeSongPlayer setVolume:1.0];
        [self.muteButton setImage:[UIImage imageNamed:@"speaker.png"] forState:UIControlStateNormal];
    } else {
        self.muted = YES;
        [self.themeSongPlayer setVolume:0.0];
        [self.muteButton setImage:[UIImage imageNamed:@"mute.png"] forState:UIControlStateNormal];
    }
}

- (IBAction)findAdventureTouched:(id)sender {
    NSURL *findAdventureAudioURL = [[NSBundle mainBundle]
                           URLForResource:@"Find Adventure"
                           withExtension:@"aifc"];
    self.audioPlayer = [[AVAudioPlayer alloc] initWithContentsOfURL:findAdventureAudioURL error:nil];
    [self.audioPlayer play];
}
- (IBAction)scanPictureTouched:(id)sender {
    NSURL *scanAudioURL = [[NSBundle mainBundle]
                           URLForResource:@"Scan*"
                           withExtension:@"aifc"];
    self.audioPlayer = [[AVAudioPlayer alloc] initWithContentsOfURL:scanAudioURL error:nil];
    [self.audioPlayer play];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end

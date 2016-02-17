//
//  ViewController.h
//  Adventure2Fitness
//
//  Created by Amber Meighan on 1/17/16.
//  Copyright © 2016 Adventure To Fitness. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface A2FHQViewController : UIViewController

@property AVAudioPlayer *audioPlayer;
@property AVAudioPlayer *themeSongPlayer;
@property (strong, nonatomic) IBOutlet UIButton *adventureButton;
@property (strong, nonatomic) IBOutlet UIButton *scanPictureButton;
@property (strong, nonatomic) IBOutlet UIButton *muteButton;

@property BOOL muted;

@end

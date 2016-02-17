//
//  AppDelegate.h
//  Adventure2Fitness
//
//  Created by Amber Meighan on 1/17/16.
//  Copyright © 2016 Adventure To Fitness. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import <AudioToolbox/AudioToolbox.h>
#import <QuartzCore/QuartzCore.h>
#import <AVKit/AVKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) UnityAppController *unityController;
@property AVPlayerViewController *launchVideoPlayerViewController;
@property UIViewController *originalRootViewController;
@property AVAudioPlayer *themeSongPlayer;
@property NSTimeInterval timeVideoLastPlayed;

@end


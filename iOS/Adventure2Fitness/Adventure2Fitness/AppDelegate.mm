//
//  AppDelegate.m
//  Adventure2Fitness
//
//  Created by Amber Meighan on 1/17/16.
//  Copyright © 2016 Adventure To Fitness. All rights reserved.
//

#import "AppDelegate.h"
#import "A2FHQViewController.h"
#import "VuforiaRenderDelegate.h"


@interface AppDelegate ()

@end

extern "C" void VuforiaRenderEvent(int marker);

@implementation AppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    
    self.unityController = [[UnityAppController alloc] init];
    self.unityController.renderDelegate = [[VuforiaRenderDelegate alloc] init];
    UnityRegisterRenderingPlugin(NULL, &VuforiaRenderEvent);
    [self.unityController application:application didFinishLaunchingWithOptions:launchOptions];
    
    self.timeVideoLastPlayed = INFINITY;
    
    // Play splash screen
    self.originalRootViewController = self.window.rootViewController;
    
    self.launchVideoPlayerViewController = [[AVPlayerViewController alloc] init];
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(splashVideoFinishedPlaying:) name:AVPlayerItemDidPlayToEndTimeNotification object:self.launchVideoPlayerViewController.player];
    NSURL *introURL = [[NSBundle mainBundle]
                       URLForResource:@"Theme_song"
                       withExtension:@"m4v"];
    self.launchVideoPlayerViewController.player = [AVPlayer playerWithURL:introURL];
    self.launchVideoPlayerViewController.view.backgroundColor = [UIColor whiteColor];
    self.launchVideoPlayerViewController.showsPlaybackControls = FALSE;
    self.window.rootViewController = self.launchVideoPlayerViewController;
    [self.launchVideoPlayerViewController.player play];
    
    return YES;
}

- (void)splashVideoFinishedPlaying:(NSNotification *) notification {
    [self.launchVideoPlayerViewController dismissViewControllerAnimated:YES completion:nil];
    self.window.rootViewController = self.originalRootViewController;
}

- (void)applicationWillResignActive:(UIApplication *)application {
    // Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
    // Use this method to pause ongoing tasks, disable timers, and throttle down OpenGL ES frame rates. Games should use this method to pause the game.
    [self.unityController applicationWillResignActive:application];
}

- (void)applicationDidEnterBackground:(UIApplication *)application {
    // Use this method to release shared resources, save user data, invalidate timers, and store enough application state information to restore your application to its current state in case it is terminated later.
    // If your application supports background execution, this method is called instead of applicationWillTerminate: when the user quits.
    [self.unityController applicationDidEnterBackground:application];
}

- (void)applicationWillEnterForeground:(UIApplication *)application {
    // Called as part of the transition from the background to the inactive state; here you can undo many of the changes made on entering the background.
    [self.unityController applicationWillEnterForeground:application];
}

- (void)applicationDidBecomeActive:(UIApplication *)application {
    // Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
    [self.unityController applicationDidBecomeActive:application];
}

- (void)applicationWillTerminate:(UIApplication *)application {
    // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
    [self.unityController applicationWillTerminate:application];
}

@end

//
//  A2FAdventureWheelController.h
//  Adventure2Fitness
//
//  Created by Amber Meighan on 1/20/16.
//  Copyright © 2016 Adventure To Fitness. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "VideoTitleLabel.h"


@interface A2FAdventureWheelViewController : UIViewController

@property (nonatomic, strong) VideoTitleLabel *videoLabel;
@property (strong, nonatomic) IBOutlet UIButton *backButton;
@property (strong, nonatomic) IBOutlet UIView *gameView;
@property AVPlayerViewController *videoPlayerViewController;
@property AVAudioPlayer *audioPlayer;
@property (nonatomic, strong) IBOutlet UIButton *spinButton;

@end

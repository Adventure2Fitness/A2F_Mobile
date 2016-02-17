//
//  A2FExerciseWheel.h
//  Adventure2Fitness
//
//  Created by Amber Meighan on 1/20/16.
//  Copyright © 2016 Adventure To Fitness. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface A2FExerciseWheel : UIControl

@property (nonatomic, strong) UIView *container;
@property int numberOfSections;
@property (nonatomic, strong) NSMutableArray *sectors;
@property int selectedSector;
@property CGFloat angleSize;
@property AVAudioPlayer *audioPlayer;

- (id) initWithFrame:(CGRect)frame andDelegate:(id)del withSections:(int)sectionsNumber;
- (void) spin;
- (void) buildSectorsEven;
- (void) buildSectorsOdd;

@end

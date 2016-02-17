//
//  A2FExerciseWheel.m
//  Adventure2Fitness
//
//  Created by Amber Meighan on 1/20/16.
//  Copyright © 2016 Adventure To Fitness. All rights reserved.
//

#import "A2FExerciseWheel.h"
#import "A2FExerciseWheelSector.h"
#import <QuartzCore/QuartzCore.h>

@interface A2FExerciseWheel()

@property BOOL animate;

- (void)drawWheel;
- (void)stopSpin;
- (void)findSectorCenter;
- (UIImageView *) getSectorByValue:(int)value;

@end

static float minAlphavalue = 0.6;
static float maxAlphavalue = 1.0;

@implementation A2FExerciseWheel

- (id) initWithFrame:(CGRect)frame andDelegate:(id)del withSections:(int)sectionsNumber {
    // 1 - Call super init
    if ((self = [super initWithFrame:frame])) {
        // 2 - Set properties
        self.numberOfSections = sectionsNumber;
        // 3 - Draw wheel
        [self drawWheel];
    }
    
    return self;
}

- (void) drawWheel {
    self.container = [[UIView alloc] initWithFrame:self.frame];
    
    self.angleSize = 2*M_PI/self.numberOfSections;
    
    // Create sectors and set anchor point
    for (int i = 0; i < self.numberOfSections; i++) {
        // Create sector image view
        UIImageView *im = [[UIImageView alloc] initWithImage:[UIImage imageNamed:[self getSectorImageName:i]]];
        im.layer.anchorPoint = CGPointMake(1.0f, 0.0f);
        im.layer.position = CGPointMake(self.container.bounds.size.width/2.0,
                                        self.container.bounds.size.height/2.0);
        im.transform = CGAffineTransformMakeRotation(self.angleSize*i);
        im.alpha = minAlphavalue;
        im.tag = i;
        
        if (i == 0) {
            im.alpha = maxAlphavalue;
        }
        
        [self.container addSubview:im];        
    }
    
    // Add container to view
    self.container.userInteractionEnabled = NO;
    [self addSubview:self.container];
    
    // Initialize sectors
    self.sectors = [NSMutableArray arrayWithCapacity:self.numberOfSections];
    if (self.numberOfSections % 2 == 0) {
        [self buildSectorsEven];
    } else {
        // In case exercises change in the future
        [self buildSectorsOdd];
    }
    self.selectedSector = 0;
}

- (void) buildSectorsOdd {
    // 1 - Define sector length
    CGFloat fanWidth = M_PI*2/self.numberOfSections;
    // 2 - Set initial midpoint
    CGFloat mid = 0;
    // 3 - Iterate through all sectors
    for (int i = 0; i < self.numberOfSections; i++) {
        A2FExerciseWheelSector *sector = [[A2FExerciseWheelSector alloc] init];
        // 4 - Set sector values
        sector.midValue = mid;
        sector.minValue = mid - (fanWidth/2);
        sector.maxValue = mid + (fanWidth/2);
        sector.sector = i;
        mid -= fanWidth;
        if (sector.minValue < - M_PI) {
            mid = -mid;
            mid -= fanWidth;
        }
        // 5 - Add sector to array
        [self.sectors addObject:sector];
    }
    
}

- (void) buildSectorsEven {
    // 1 - Define sector length
    CGFloat fanWidth = M_PI*2/self.numberOfSections;
    // 2 - Set initial midpoint
    CGFloat mid = 0;
    // 3 - Iterate through all sectors
    for (int i = 0; i < self.numberOfSections; i++) {
        A2FExerciseWheelSector *sector = [[A2FExerciseWheelSector alloc] init];
        // 4 - Set sector values
        sector.midValue = mid;
        sector.minValue = mid - (fanWidth/2);
        sector.maxValue = mid + (fanWidth/2);
        sector.sector = i;
        if (sector.maxValue-fanWidth < - M_PI) {
            mid = M_PI;
            sector.midValue = mid;
            sector.minValue = fabsf(sector.maxValue);
            
        }
        mid -= fanWidth;
        // 5 - Add sector to array
        [self.sectors addObject:sector];
    }
}

- (void) spinWithOptions: (UIViewAnimationOptions) options {
    [UIView animateWithDuration: 0.25f
                          delay: 0.0f
                        options: options
                     animations: ^{
                         self.container.transform = CGAffineTransformRotate(self.container.transform, (M_PI / 2));
                     }
                     completion: ^(BOOL finished) {
                         if (finished) {
                             if (self.animate) {
                                 // if flag still set, keep spinning with constant speed
                                 [self spinWithOptions: UIViewAnimationOptionCurveLinear];
                             } else if (options != UIViewAnimationOptionCurveEaseOut) {
                                 CGFloat rotationAngle = self.angleSize * arc4random_uniform(self.numberOfSections);
//                                 if (rotationAngle> (3.14 + 1.57) | rotationAngle < (3.14-1.57)) {
//                                     rotationAngle = rotationAngle + self.angleSize;
//                                 }
                                 [UIView animateWithDuration: 0.75f
                                                       delay: 0.0f
                                                     options: UIViewAnimationOptionCurveLinear
                                                  animations: ^{
                                                      self.container.transform = CGAffineTransformRotate(self.container.transform, rotationAngle);
                                                  }
                                                  completion:nil
                                  ];
                                 [self findSectorCenter];
                             }
                         }
                     }];
}

- (void) spin {
    if (!self.animate) {
        // Play spin again audio
        NSURL *spinAudioURL = [[NSBundle mainBundle]
                               URLForResource:@"Yahoo_MrClock"
                               withExtension:@"aif"];
        self.audioPlayer = [[AVAudioPlayer alloc] initWithContentsOfURL:spinAudioURL error:nil];
        [self.audioPlayer play];
        self.animate = YES;
        UIImageView *im = [self getSectorByValue:self.selectedSector];
        im.alpha = minAlphavalue;
        [self spinWithOptions: UIViewAnimationOptionCurveEaseIn];
        [NSTimer scheduledTimerWithTimeInterval:4.0f
                                         target:self
                                       selector:@selector(stopSpin)
                                       userInfo:nil
                                        repeats:YES];
    }
}

- (void) stopSpin {
    // set the flag to stop spinning after one last 90 degree increment
    self.animate = NO;
}

- (void) findSectorCenter {
    // 1 - Get current container rotation in radians
    CGFloat radians = atan2f(self.container.transform.b, self.container.transform.a);
    // 2 - Initialize new value
    CGFloat newVal = 0.0;
    // 3 - Iterate through all the sectors
    for (A2FExerciseWheelSector *s in self.sectors) {
        if (self.numberOfSections % 2 == 0) {
            // 4 - Check for anomaly (occurs with even number of sectors)
            if (s.minValue > 0 && s.maxValue < 0) {
                if (s.maxValue >= radians || s.minValue <= radians) {
                    // 5 - Find the quadrant (positive or negative)
                    if (radians > 0) {
                        newVal = radians - M_PI;
                    } else {
                        newVal = M_PI + radians;
                    }
                    self.selectedSector = s.sector;
                }
            }
            // 6 - All non-anomalous cases
            else if (radians >= s.minValue && radians <= s.maxValue) {
                newVal = radians - s.midValue;
                self.selectedSector = s.sector;
            }
        } else {    
            // 4 - See if the current sector contains the radian value
            if (radians > s.minValue && radians < s.maxValue) {
                // 5 - Set new value
                newVal = radians - s.midValue;
                // 6 - Get sector number
                self.selectedSector = s.sector;
                break;
            }
        }
    }
    
    // 7 - Set up animation for final rotation
    [UIView beginAnimations:nil context:NULL];
    [UIView setAnimationDuration:0.2];
    CGAffineTransform t = CGAffineTransformRotate(self.container.transform, -newVal);// newVal can be neg
    self.container.transform = t;
    [UIView commitAnimations];
    
    
    // Change sector image alpha
    UIImageView *im = [self getSectorByValue:self.selectedSector];
    im.alpha = maxAlphavalue;
    
    [[NSNotificationCenter defaultCenter] postNotificationName:@"sectorSelected" object:self];
    
}

- (UIImageView *) getSectorByValue:(int)value {
    UIImageView *res;
    NSArray *views = [self.container subviews];
    for (UIImageView *im in views) {
        if (im.tag == value){
            res = im;
            break;
        }
    }
    return res;
}


- (NSString *) getSectorImageName:(int)position {
    NSString *res = @"";
    switch (position) {
        case 0:
            res = @"Mr.Clock_s.png";
            break;
            
        case 1:
            res = @"Acer_s.png";
            break;
            
        case 2:
            res = @"Mr.Marc_s.png";
            break;
            
        case 3:
            res = @"Energia_s.png";
            break;
            
        case 4:
            res = @"A2F_s.png";
            break;
            
        case 5:
            res = @"Mr.Laze_s.png";
            break;
            
        case 6:
            res = @"Prof.Madison_s.png";
            break;
            
        default:
            break;
    }
    return res;
}



@end

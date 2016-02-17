//
//  A2FExerciseWheelSector.m
//  Adventure2Fitness
//
//  Created by Amber Meighan on 1/20/16.
//  Copyright © 2016 Adventure To Fitness. All rights reserved.
//

#import "A2FExerciseWheelSector.h"

@implementation A2FExerciseWheelSector

- (NSString *) description {
    return [NSString stringWithFormat:@"%i | %f, %f, %f", self.sector, self.minValue, self.midValue, self.maxValue];
}

@end

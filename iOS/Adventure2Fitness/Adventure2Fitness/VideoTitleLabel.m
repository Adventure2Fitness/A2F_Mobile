//
//  VideoTitleLabel.m
//  Adventure2Fitness
//
//  Created by Amber Meighan on 1/29/16.
//  Copyright © 2016 Adventure To Fitness. All rights reserved.
//

#import "VideoTitleLabel.h"

@implementation VideoTitleLabel

- (void)drawTextInRect:(CGRect)rect {
    
    CGSize shadowOffset = self.shadowOffset;
    UIColor *textColor = self.textColor;
    
    CGContextRef c = UIGraphicsGetCurrentContext();
    CGContextSetLineWidth(c, 4);
    CGContextSetLineJoin(c, kCGLineJoinRound);
    
    CGContextSetTextDrawingMode(c, kCGTextStroke);
    self.textColor = [UIColor whiteColor];
//    self.textColor = [UIColor colorWithRed:238.0/255 green:164.0/255 blue:46.0/255 alpha:1.0];
    [super drawTextInRect:rect];
    
    CGContextSetTextDrawingMode(c, kCGTextFill);
    self.textColor = textColor;
    self.shadowOffset = CGSizeMake(0, 0);
    [super drawTextInRect:rect];
    
    self.shadowOffset = shadowOffset;
    
}


@end

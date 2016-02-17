//
//  DetailViewController.h
//  Adventure2Fitness
//
//  Created by Amber Meighan on 1/17/16.
//  Copyright © 2016 Adventure To Fitness. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end


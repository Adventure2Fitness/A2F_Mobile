//
//  UnityVuforiaViewController.m
//  Adventure2Fitness
//
//  Created by Amber Meighan on 1/19/16.
//  Copyright © 2016 Adventure To Fitness. All rights reserved.
//

#import "UnityVuforiaViewController.h"

@implementation UnityVuforiaViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    self.unityView = UnityGetGLView();

    [self.view addSubview: self.unityView];
    [self.view addSubview: self.backButton];
    
    self.unityView.translatesAutoresizingMaskIntoConstraints = FALSE;
}

- (IBAction)backToHQ:(id)sender {
    [self.navigationController popViewControllerAnimated:YES];
}


@end

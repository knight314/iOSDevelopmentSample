//
//  ViewController.m
//  InstrumentDemo
//
//  Created by Apple on 16/9/19.
//  Copyright © 2016年 GJ. All rights reserved.
//

#import "ViewController.h"
#import "GJColorView.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    GJColorView *colorView = [[GJColorView alloc]initWithFrame:CGRectMake(100, 100, 100, 100)];
    
    [self.view addSubview:colorView];

    // Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end

//
//  ViewController.m
//  BTLayout
//
//  Created by britayin on 2018/2/2.
//  Copyright © 2018年 britayin. All rights reserved.
//

#import "ViewController.h"
#import "UIView+BTLayout.h"

@interface ViewController ()

@property (nonatomic, strong) UILabel *view0;
@property (nonatomic, strong) UILabel *view1;
@property (nonatomic, strong) UILabel *view2;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.view.layer.borderWidth = 1;
    self.view.layer.borderColor = UIColor.lightGrayColor.CGColor;
    
    self.view0 = [UILabel new];
    self.view0.backgroundColor = UIColor.redColor;
    self.view0.text = @"view0";
    self.view0.textAlignment = NSTextAlignmentCenter;
    [self.view addSubview:self.view0];
    
    self.view1 = [UILabel new];
    self.view1.backgroundColor = UIColor.greenColor;
    self.view1.text = @"view1";
    self.view1.textAlignment = NSTextAlignmentCenter;
    [self.view addSubview:self.view1];
    
    self.view2 = [UILabel new];
    self.view2.backgroundColor = UIColor.blueColor;
    self.view2.text = @"view2";
    self.view2.textAlignment = NSTextAlignmentCenter;
    [self.view addSubview:self.view2];
    
}

- (void)viewDidLayoutSubviews
{
    [super viewDidLayoutSubviews];
    
    [self.view0 widthAsParentMarginsLeft:self.view.sWidth/2 right:10];  //设置尺寸 宽度与父View对齐，靠右边距10，左侧居中
    self.view0.sHeight = 50;                    //设置尺寸 高度50
    [self.view0 pAlignParentBottomOffset:-10];  //设置位置 位置与父View对齐，靠父View底部，偏移-10
    
    self.view1.pOrigin = CGPointMake(10, 30);   //设置位置
    [self.view1 sLeftTo:self.view0 margin:0];   //设置尺寸 右侧在view0左距离0
    [self.view1 sAbove:self.view0 margin:-self.view0.sHeight/2];    //设置尺寸 右侧在view0上距离（view0的负半高）
    
    [self.view2 pRightTo:self.view1 margin:10]; //设置位置 在view1右侧距离10
    [self.view2 sAlignRight:self.view0];        //设置尺寸 右侧与view0右侧对齐
    [self.view2 sAlignTop:self.view1];          //设置尺寸 上侧与view1上侧对齐
    [self.view2 sAbove:self.view0 margin:10];   //设置尺寸 底部在view0上距离10
}


@end

//
//  UINavigationController+CustomNavBar.h
//  CustomNavigationBarController
//
//  Created by LiJian Qiu on 11-11-16.
//  Copyright (c) 2011年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UINavigationController (CustomNavBar)

-(id)initWithRoot:(UIViewController *)root backgroundColor:(UIColor *)color;
-(id)initWithRoot:(UIViewController *)root backgroundColor:(UIColor *)bgColor barButtonItemColor:(UIColor *)bbiColor;

@end

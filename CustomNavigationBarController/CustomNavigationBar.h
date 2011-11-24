//
//  CustomNavigationBar.h
//  CustomNavigationBarController
//
//  Created by LiJian Qiu on 11-11-16.
//  Copyright (c) 2011年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum {
  CustomNavigationColor = 0,
  CustomNavigationLinearGradient,
  CustomNavigationImage
}CustomNavigationStyle;


@interface CustomNavigationBar : UINavigationBar{
  
}
@property (nonatomic)CustomNavigationStyle customStyle;
@property (nonatomic, retain)UIColor *customColor;

@end

//
//  AppDelegate.h
//  BarChartTesting
//
//  Created by Prasad on 9/21/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

//import "CorePlot-CocoaTouch.h"
#import "BarPlotViewController.h"

@class ViewController;

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) ViewController *viewController;
@property (strong, nonatomic) BarPlotViewController *barPlotViewController;

@end

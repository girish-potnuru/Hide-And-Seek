//
//  ViewController.h
//  BarChartTesting
//
//  Created by Prasad on 9/21/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CorePlot-CocoaTouch.h"

@interface ViewController : UIViewController<CPTBarPlotDataSource, CPTBarPlotDelegate>

@property (nonatomic, retain) NSMutableArray *data;
@property (nonatomic, retain) CPTGraphHostingView *hostingView;
@property (nonatomic, retain) CPTXYGraph *graph;

- (void) generateBarPlot;

@end

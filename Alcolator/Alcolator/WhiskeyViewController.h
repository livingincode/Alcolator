//
//  WhiskeyViewController.h
//  Alcolator
//
//  Created by Dean Laurea on 6/5/15.
//  Copyright (c) 2015 Bloc. All rights reserved.
//

#import "ViewController.h"

@interface WhiskeyViewController : ViewController

@property (weak, nonatomic) IBOutlet UINavigationItem *whiskeyNavigationBar;
- (IBAction)sliderValueDidChange:(UISlider *)sender;
- (float)calculateShots:(int) nummberOfBeers;

@end

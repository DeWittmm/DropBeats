//
//  DPViewController.h
//  dropBeats
//

//  Copyright (c) 2013 Michael Dewitt. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <SpriteKit/SpriteKit.h>

@interface DPViewController : UIViewController

@property (nonatomic) BOOL displayBanner;

- (IBAction)hideShowBanner:(UIButton *)sender;

@end
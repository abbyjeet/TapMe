//
//  AJViewController.h
//  TapMe
//
//  Created by Abhijit on 13/10/13.
//  Copyright (c) 2013 Abhijit. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AJViewController : UIViewController<UIAlertViewDelegate>{
    IBOutlet UILabel *scoreLabel;
    IBOutlet UILabel *timerLabel;
    IBOutlet UIButton *roundedButton;
    
    NSInteger count;
    NSInteger seconds;
    NSTimer *timer;
    
}
- (IBAction)buttonPressed;
@end

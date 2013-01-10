//
//  DetailViewController.h
//  splitview
//
//  Created by Shreekant Pawar on 10/01/13.
//  Copyright (c) 2013 Shreekant Pawar. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (weak, nonatomic) IBOutlet UILabel *display;

@end

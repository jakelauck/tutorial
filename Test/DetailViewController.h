//
//  DetailViewController.h
//  Test
//
//  Created by FWD on 5/12/14.
//  Copyright (c) 2014 FWD. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end


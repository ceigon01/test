//
//  DetailViewController.h
//  test
//
//  Created by Jason Smith on 6/14/16.
//  Copyright © 2016 Jason Smith. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end


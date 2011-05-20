//
//  PickProductViewController.h
//  TableSearch
//
//  Created by jmatchett on 05/19/2011.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MainViewController2.h"
#import "MainViewController.h"

@interface PickProductViewController : UIViewController <ProductPickerDelegate, ProductPickerDelegate2> {
    UIButton *productPickerButton;
    UILabel *pickedProductLabel;
    UISegmentedControl *controllerChoice;
}

@property (nonatomic, retain) IBOutlet UIButton *productPickerButton;
@property (nonatomic, retain) IBOutlet UILabel *pickedProductLabel;
@property (nonatomic, retain) IBOutlet UISegmentedControl *controllerChoice;

-(IBAction)showProductPicker:(id)sender;

@end

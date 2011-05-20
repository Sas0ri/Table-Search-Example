//
//  PickProductViewController.h
//  TableSearch
//
//  Created by jmatchett on 05/19/2011.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MainViewController.h"

@interface PickProductViewController : UIViewController <ProductPickerDelegate> {
    UIButton *productPickerButton;
    UILabel *pickedProductLabel;
}

@property (nonatomic, retain) IBOutlet UIButton *productPickerButton;
@property (nonatomic, retain) IBOutlet UILabel *pickedProductLabel;

-(IBAction)showProductPicker:(id)sender;

@end

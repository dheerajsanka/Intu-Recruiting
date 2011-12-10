//
//  IntuitRecruitingViewController.h
//  Intu-Recruiting
//
//  Created by dheeraj sanka on 12/9/11.
//  Copyright (c) 2011 University of Michigan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface IntuitRecruitingViewController : UIViewController<UIImagePickerControllerDelegate,UINavigationControllerDelegate, UIPopoverControllerDelegate>
{
    UIImagePickerController *ipc;
    UIPopoverController *popoverController;
    IBOutlet UITextField *nameField;
    IBOutlet UISlider *rateSlider;
    IBOutlet UIImageView *userPhoto;
}
@property (strong, nonatomic) IBOutlet UILabel *dataLabel;
@property (strong, nonatomic) id dataObject;
@property (strong, nonatomic) UIImagePickerController *ipc;
@property (strong, nonatomic) UIPopoverController *popoverController;

- (void) imagePickerController:(UIImagePickerController *)picker didFinishPickingMediaWithInfo:(NSDictionary *)info;
- (void)image:(UIImage *)image didFinishSavingWithError:(NSError *)error contextInfo:(void *)contextInfo; 
- (IBAction) snapImage:(id)sender;
- (void) useCameraRoll;


@end

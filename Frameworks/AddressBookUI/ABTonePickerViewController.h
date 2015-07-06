/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:26 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/ABPickerViewController.h>

@class TKTonePickerViewController;

@interface ABTonePickerViewController : ABPickerViewController {

	TKTonePickerViewController* _tonePickerViewController;

}

@property (nonatomic,retain,readonly) TKTonePickerViewController * tonePickerViewController; 
-(float)ab_heightToFitForViewInPopoverView;
-(id)initWithAlertType:(int)arg1 ;
-(TKTonePickerViewController *)tonePickerViewController;
-(void)ringtoneSaveButtonClicked:(id)arg1 ;
-(void)setStyleProvider:(id)arg1 ;
-(id)init;
-(void)loadView;
-(void)_getRotationContentSettings:(SCD_Struct_AB0*)arg1 ;
-(void)cancelButtonClicked:(id)arg1 ;
@end


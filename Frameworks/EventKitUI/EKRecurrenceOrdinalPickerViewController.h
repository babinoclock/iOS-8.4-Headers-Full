/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:52 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>

@protocol EKRecurrenceOrdinalPickerViewControllerDelegate;
@class UIPickerView, NSString;

@interface EKRecurrenceOrdinalPickerViewController : UIViewController <UIPickerViewDataSource, UIPickerViewDelegate> {

	id<EKRecurrenceOrdinalPickerViewControllerDelegate> _delegate;

}

@property (nonatomic,readonly) UIPickerView * pickerView; 
@property (assign) id<EKRecurrenceOrdinalPickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIPickerView *)pickerView;
-(void)updateRecurrenceRuleBuilder:(id)arg1 ;
-(void)updateFromRecurrenceRule:(id)arg1 ;
-(id)_leftColumn;
-(id)_rightColumn;
-(int)dayMask;
-(int)ordinalValue;
-(void)setDelegate:(id<EKRecurrenceOrdinalPickerViewControllerDelegate>)arg1 ;
-(int)numberOfComponentsInPickerView:(id)arg1 ;
-(int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(int)arg2 forComponent:(int)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3 ;
-(id<EKRecurrenceOrdinalPickerViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewDidLoad;
@end


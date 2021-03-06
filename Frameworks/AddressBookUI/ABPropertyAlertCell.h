/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:23 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/ABPropertySimpleCell.h>
#import <AddressBookUI/ABPickerControllerDelegate.h>

@class ABPropertyGroupAlertItem, NSString;

@interface ABPropertyAlertCell : ABPropertySimpleCell <ABPickerControllerDelegate>

@property (nonatomic,readonly) ABPropertyGroupAlertItem * alertItem; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)wantsChevron;
-(void)performDefaultAction;
-(void)pickerDidCancel:(id)arg1 ;
-(void)picker:(id)arg1 didPickItem:(id)arg2 ;
-(ABPropertyGroupAlertItem *)alertItem;
-(char)shouldPerformDefaultAction;
@end


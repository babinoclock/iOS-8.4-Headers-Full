/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:19 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>
#import <AddressBookUI/ABGroupWrapperDelegate.h>

@class ABGroupWrapper, ABStyleProvider, NSString;

@interface ABGroupTableCell : UITableViewCell <ABGroupWrapperDelegate> {

	ABGroupWrapper* _groupWrapper;
	ABStyleProvider* _styleProvider;

}

@property (nonatomic,retain) ABGroupWrapper * groupWrapper;                //@synthesize groupWrapper=_groupWrapper - In the implementation block
@property (nonatomic,retain) ABStyleProvider * styleProvider;              //@synthesize styleProvider=_styleProvider - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setGroupWrapper:(ABGroupWrapper *)arg1 ;
-(ABGroupWrapper *)groupWrapper;
-(void)updateFromGroupWrapper;
-(void)groupWrapper:(id)arg1 didBecomeSelected:(char)arg2 ;
-(ABStyleProvider *)styleProvider;
-(void)setStyleProvider:(ABStyleProvider *)arg1 ;
-(void)dealloc;
-(void)tintColorDidChange;
@end

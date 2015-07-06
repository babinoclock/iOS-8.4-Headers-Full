/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:22 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UITextField, CNContactStyle;

@interface ABPickerItemCell : UITableViewCell {

	UITextField* _textField;
	CNContactStyle* _contactStyle;

}

@property (nonatomic,retain) UITextField * textField;                    //@synthesize textField=_textField - In the implementation block
@property (nonatomic,retain) CNContactStyle * contactStyle;              //@synthesize contactStyle=_contactStyle - In the implementation block
-(void)setContactStyle:(CNContactStyle *)arg1 ;
-(CNContactStyle *)contactStyle;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)beginEditing;
-(void)endEditing;
-(UITextField *)textField;
-(void)setTextField:(UITextField *)arg1 ;
@end

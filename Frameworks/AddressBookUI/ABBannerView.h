/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:17 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class NSString;

@interface ABBannerView : UITableViewCell {

	NSString* _title;
	NSString* _value;

}

@property (nonatomic,copy) NSString * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * value;              //@synthesize value=_value - In the implementation block
+(float)defaultHeight;
-(void)cellWasLongPressed:(id)arg1 ;
-(void)cellWasDoubleTapped:(id)arg1 ;
-(void)menuDidHide:(id)arg1 ;
-(void)setTitle:(id)arg1 value:(id)arg2 ;
-(void)dealloc;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(char)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(NSString *)title;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(char)canBecomeFirstResponder;
-(void)_updateLabel;
-(void)copy:(id)arg1 ;
-(void)showMenu;
@end


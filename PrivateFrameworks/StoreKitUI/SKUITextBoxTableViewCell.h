/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:47 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUITableViewCell.h>

@class SKUITextBoxView;

@interface SKUITextBoxTableViewCell : SKUITableViewCell {

	SKUITextBoxView* _textBoxView;
	UIEdgeInsets _textBoxInsets;

}

@property (nonatomic,readonly) SKUITextBoxView * textBoxView;              //@synthesize textBoxView=_textBoxView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets textBoxInsets;                   //@synthesize textBoxInsets=_textBoxInsets - In the implementation block
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(SKUITextBoxView *)textBoxView;
-(void)setTextBoxInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)textBoxInsets;
@end


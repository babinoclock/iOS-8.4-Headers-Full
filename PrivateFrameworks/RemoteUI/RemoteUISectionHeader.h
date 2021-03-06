/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:19 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RemoteUI/RemoteUI-Structs.h>
#import <UIKit/UIView.h>
#import <RemoteUI/RemoteUITableHeader.h>

@class UILabel, UIImageView, NSString;

@interface RemoteUISectionHeader : UIView <RemoteUITableHeader> {

	UILabel* _headerLabel;
	UILabel* _detailHeaderLabel;
	UILabel* _subHeaderLabel;
	UIImageView* _iconView;
	int _imageAlignment;
	char _isFirstSection;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setIconImage:(id)arg1 ;
-(void)setImageAlignment:(int)arg1 ;
-(void)layoutSubviews;
-(id)headerLabel;
-(void)setText:(id)arg1 attributes:(id)arg2 ;
-(void)setSectionIsFirst:(char)arg1 ;
-(float)headerHeightForWidth:(float)arg1 inTableView:(id)arg2 ;
-(void)setDetailText:(id)arg1 attributes:(id)arg2 ;
-(void)setSubHeaderText:(id)arg1 attributes:(id)arg2 ;
-(void)setImageSize:(CGSize)arg1 ;
-(id)subHeaderLabel;
-(CGRect)_iconFrame;
-(void)setHeaderColor:(id)arg1 ;
-(void)setSubHeaderAlignment:(int)arg1 ;
-(void)setSubHeaderColor:(id)arg1 ;
-(id)detailHeaderLabel;
-(void)setHeaderAlignment:(int)arg1 ;
-(id)initWithAttributes:(id)arg1 ;
@end


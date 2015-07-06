/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:41 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, _UILegibilityView, NSString, UIColor;

@interface CAMButtonLabel : UIView {

	char _useLegibilityView;
	UILabel* __label;
	_UILegibilityView* __legibilityView;
	CGSize _contentSize;

}

@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) UIColor * textColor; 
@property (assign,nonatomic) int textAlignment; 
@property (nonatomic,readonly) CGSize contentSize;                                             //@synthesize contentSize=_contentSize - In the implementation block
@property (assign,getter=isUsingLegibilityView,nonatomic) char useLegibilityView;              //@synthesize useLegibilityView=_useLegibilityView - In the implementation block
@property (nonatomic,retain,readonly) UILabel * _label;                                        //@synthesize _label=__label - In the implementation block
@property (nonatomic,retain,readonly) _UILegibilityView * _legibilityView;                     //@synthesize _legibilityView=__legibilityView - In the implementation block
-(UILabel *)_label;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setTextAlignment:(int)arg1 ;
-(CGSize)contentSize;
-(void)setTextColor:(UIColor *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(CGSize)intrinsicContentSize;
-(UIColor *)textColor;
-(int)textAlignment;
-(void)setHighlightedTextColor:(id)arg1 ;
-(id)highlightedTextColor;
-(void)updateToContentSize:(id)arg1 ;
-(void)_updateAttributedText;
-(void)_updateInternalContentSize;
-(void)_createLegibilityView;
-(void)_updateViewAlphas;
-(char)isUsingLegibilityView;
-(void)setUseLegibilityView:(char)arg1 ;
-(_UILegibilityView *)_legibilityView;
@end


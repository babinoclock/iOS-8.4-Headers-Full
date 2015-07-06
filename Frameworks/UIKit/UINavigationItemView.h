/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:28 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UINavigationItem, UIView, UILabel;

@interface UINavigationItemView : UIView {

	UINavigationItem* _item;
	CGSize _titleSize;
	UIView* _topCrossView;
	UIView* _bottomCrossView;
	char _isCrossFading;
	char _customFontSet;
	UILabel* _label;
	char _isFadingInFromCustomAlpha;

}

@property (assign,setter=_setFadingInFromCustomAlpha:,nonatomic) char _isFadingInFromCustomAlpha;              //@synthesize isFadingInFromCustomAlpha=_isFadingInFromCustomAlpha - In the implementation block
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)navigationItem;
-(id)title;
-(void)setFont:(id)arg1 ;
-(id)_scriptingInfo;
-(void)_resetTitleSize;
-(void)_setLineBreakMode:(int)arg1 ;
-(id)initWithNavigationItem:(id)arg1 ;
-(char)titleAutoresizesToFit;
-(void)setTitleAutoresizesToFit:(char)arg1 ;
-(void)_updateLabelColor;
-(void)_prepareCrossViewsForNewSize:(CGSize)arg1 ;
-(void)_crossFadeHiddingButton:(char)arg1 ;
-(void)_cleanUpCrossView;
-(CGSize)_titleSize;
-(char)_isFadingInFromCustomAlpha;
-(void)_setFadingInFromCustomAlpha:(char)arg1 ;
-(id)_defaultFont;
-(void)_setFont:(id)arg1 ;
-(CGRect)_labelFrame;
-(char)_useSilverLookForBarStyle:(int)arg1 ;
-(id)_currentTextColorForBarStyle:(int)arg1 ;
-(CGSize)_currentTextShadowOffsetForBarStyle:(int)arg1 ;
-(id)_currentTextShadowColorForBarStyle:(int)arg1 ;
-(float)_titleYAdjustmentCustomization;
-(void)_updateLabel;
-(void)_updateLabelContents;
-(id)font;
-(void)_adjustLabelTrackingIfNecessary;
@end


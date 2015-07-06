/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:34 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SportsTrainer.framework/SportsTrainer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SportsTrainer/SportsTrainer-Structs.h>
#import <UIKit/UIView.h>
#import <SportsTrainer/STAnimatableButtonSliceDelegate.h>

@class UIImage, STShadowLabel, UIColor, STAnimatableButtonSlice, NSString;

@interface STAnimatableButton : UIView <STAnimatableButtonSliceDelegate> {

	UIImage* _image;
	UIImage* _normalImage;
	UIImage* _highlightedImage;
	STShadowLabel* _titleLabel;
	STShadowLabel* _subtitleLabel;
	id _target;
	SEL _action;
	char _isLandscape;
	char _touchInside;
	char _slicesNeedDisplay;
	UIColor* _shadowColor;
	float _shadowBlurRadius;
	UIEdgeInsets _hitRectEdgeInsets;
	STAnimatableButtonSlice* _leftSlice;
	STAnimatableButtonSlice* _middleSlice;
	STAnimatableButtonSlice* _rightSlice;

}

@property (assign,nonatomic) UIEdgeInsets hitRectEdgeInsets;              //@synthesize hitRectEdgeInsets=_hitRectEdgeInsets - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(CGRect)hitRect;
-(void)setSubtitle:(id)arg1 ;
-(void)setTarget:(id)arg1 action:(SEL)arg2 ;
-(void)drawImageForSlice;
-(void)setHitRectEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)hitRectEdgeInsets;
-(id)_buttonWellLandscapeImage;
-(id)_buttonWellImage;
-(void)setFrame:(CGRect)arg1 animated:(char)arg2 ;
-(void)setNormalBackgroundImage:(id)arg1 ;
-(void)setHighlightedBackgroundImage:(id)arg1 ;
-(void)setLandscape:(char)arg1 ;
-(void)setShadowColor:(id)arg1 blurRadius:(float)arg2 ;
@end


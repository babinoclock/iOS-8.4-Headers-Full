/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:33 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIView.h>

@class MusicInteractiveBackdropView, _UIBackdropViewSettings, UIView;

@interface MusicInteractiveBlurringView : UIView {

	MusicInteractiveBackdropView* _backdropView;
	_UIBackdropViewSettings* _destinationSettings;
	UIView* _tintView;
	float _tintAlphaProgressMultiplier;

}

@property (nonatomic,readonly) UIView * tintView;                            //@synthesize tintView=_tintView - In the implementation block
@property (assign,nonatomic) float tintAlphaProgressMultiplier;              //@synthesize tintAlphaProgressMultiplier=_tintAlphaProgressMultiplier - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForTransition;
-(UIView *)tintView;
-(void)setTransitionProgress:(float)arg1 ;
-(char)_shouldUseHighQualityGraphics;
-(void)transitionCompleted;
-(float)tintAlphaProgressMultiplier;
-(void)setTintAlphaProgressMultiplier:(float)arg1 ;
@end


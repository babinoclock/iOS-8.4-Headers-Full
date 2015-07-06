/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:49 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIStatusBarStyleAttributes, UIStatusBarCorners, UIImageView;

@interface UIStatusBarBackgroundView : UIView {

	UIStatusBarStyleAttributes* _style;
	UIStatusBarCorners* _topCorners;
	UIImageView* _glowView;
	char _glowEnabled;
	char _suppressGlow;

}
-(void)dealloc;
-(id)style;
-(id)_baseImage;
-(char)_topCornersAreRounded;
-(void)_setGlowAnimationEnabled:(char)arg1 waitForNextCycle:(char)arg2 ;
-(void)_startGlowAnimationWaitForNextCycle:(char)arg1 ;
-(void)_stopGlowAnimation;
-(char)_styleCanGlow;
-(id)_glowImage;
-(id)_backgroundImageName;
-(id)initWithFrame:(CGRect)arg1 style:(id)arg2 backgroundColor:(id)arg3 ;
-(void)setGlowAnimationEnabled:(char)arg1 ;
-(void)setSuppressesGlow:(char)arg1 ;
@end


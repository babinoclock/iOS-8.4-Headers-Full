/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:59 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBUIStarkScreenAnimationController.h>

@class UIView;

@interface SBUIStarkStartupAnimation : SBUIStarkScreenAnimationController {

	UIView* _fromLockoutView;

}

@property (nonatomic,retain,readonly) UIView * fromLockoutView;              //@synthesize fromLockoutView=_fromLockoutView - In the implementation block
-(id)_getTransitionWindow;
-(void)_cleanupAnimation;
-(UIView *)fromLockoutView;
-(void)_cancelAnimation;
-(id)initFromLockoutView:(id)arg1 starkScreenController:(id)arg2 ;
-(id)initWithActivatingApp:(id)arg1 fromLockoutView:(id)arg2 starkScreenController:(id)arg3 ;
-(void)dealloc;
-(void)beginAnimation;
@end


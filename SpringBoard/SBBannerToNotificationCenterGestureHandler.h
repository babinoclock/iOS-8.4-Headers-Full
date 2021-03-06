/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:44 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBBannerGestureHandler.h>

@interface SBBannerToNotificationCenterGestureHandler : SBBannerGestureHandler {

	char _canPullDown;
	char _didPreparePullDown;
	CGSize _rootSize;
	CGSize _pullDownSize;
	CGRect _pullDownTargetRect;
	float _bannerHeight;
	char _bannerHidden;
	char _shouldObscure;

}
-(void)_updateWithDisplacement:(float)arg1 velocity:(float)arg2 ;
-(char)handleGestureType:(int)arg1 state:(int)arg2 location:(CGPoint)arg3 displacement:(float)arg4 velocity:(float)arg5 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:47 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBCenterZoomSettings.h>

@class SBFAnimationSettings;

@interface SBCenterAppZoomSettings : SBCenterZoomSettings {

	SBFAnimationSettings* _appZoomSettings;
	SBFAnimationSettings* _appFadeSettings;
	double _appHeadStart;

}

@property (assign) double appHeadStart;                                 //@synthesize appHeadStart=_appHeadStart - In the implementation block
@property (retain) SBFAnimationSettings * appZoomSettings;              //@synthesize appZoomSettings=_appZoomSettings - In the implementation block
@property (retain) SBFAnimationSettings * appFadeSettings;              //@synthesize appFadeSettings=_appFadeSettings - In the implementation block
+(id)settingsControllerModule;
-(double)appHeadStart;
-(void)setAppHeadStart:(double)arg1 ;
-(SBFAnimationSettings *)appZoomSettings;
-(void)setAppZoomSettings:(SBFAnimationSettings *)arg1 ;
-(SBFAnimationSettings *)appFadeSettings;
-(void)setAppFadeSettings:(SBFAnimationSettings *)arg1 ;
@end


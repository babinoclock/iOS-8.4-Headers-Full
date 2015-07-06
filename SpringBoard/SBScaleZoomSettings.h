/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:47 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBIconZoomSettings.h>

@class SBFAnimationSettings;

@interface SBScaleZoomSettings : SBIconZoomSettings {

	char _crossfadeWithZoom;
	SBFAnimationSettings* _outerFolderFadeSettings;
	SBFAnimationSettings* _crossfadeSettings;

}

@property (retain) SBFAnimationSettings * outerFolderFadeSettings;              //@synthesize outerFolderFadeSettings=_outerFolderFadeSettings - In the implementation block
@property (assign) char crossfadeWithZoom;                                      //@synthesize crossfadeWithZoom=_crossfadeWithZoom - In the implementation block
@property (retain) SBFAnimationSettings * crossfadeSettings;                    //@synthesize crossfadeSettings=_crossfadeSettings - In the implementation block
+(id)settingsControllerModule;
-(void)setCrossfadeWithZoom:(char)arg1 ;
-(char)crossfadeWithZoom;
-(SBFAnimationSettings *)crossfadeSettings;
-(id)effectiveCrossfadeAnimationSettings;
-(SBFAnimationSettings *)outerFolderFadeSettings;
-(void)setOuterFolderFadeSettings:(SBFAnimationSettings *)arg1 ;
-(void)setCrossfadeSettings:(SBFAnimationSettings *)arg1 ;
-(void)setDefaultValues;
@end

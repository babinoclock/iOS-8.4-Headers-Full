/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:47 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBScaleZoomSettings.h>

@class SBFAnimationSettings;

@interface SBFolderZoomSettings : SBScaleZoomSettings {

	SBFAnimationSettings* _innerFolderFadeSettings;

}

@property (retain) SBFAnimationSettings * innerFolderFadeSettings;              //@synthesize innerFolderFadeSettings=_innerFolderFadeSettings - In the implementation block
+(id)settingsControllerModule;
-(SBFAnimationSettings *)innerFolderFadeSettings;
-(void)setInnerFolderFadeSettings:(SBFAnimationSettings *)arg1 ;
-(void)setDefaultValues;
@end


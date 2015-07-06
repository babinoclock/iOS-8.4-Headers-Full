/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:35 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/SpringBoardPlugins/NowPlayingArtLockScreen.lockbundle/NowPlayingArtLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUI/SBAwayViewPluginController.h>
#import <NowPlayingArtLockScreen/MPUSystemMediaControlsDelegate.h>
#import <NowPlayingArtLockScreen/SBLockScreenBundleController.h>

@class MPUSystemMediaControlsViewController, NSString;

@interface NowPlayingArtPluginController : SBAwayViewPluginController <MPUSystemMediaControlsDelegate, SBLockScreenBundleController> {

	MPUSystemMediaControlsViewController* _systemMediaController;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)rootViewController;
-(id)init;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(char)showDateView;
-(char)viewWantsFullscreenLayout;
-(char)shouldDisableOnUnlock;
-(char)shouldShowLockStatusBarTime;
-(char)wantsAutomaticFullscreenTimer;
-(char)_tapHandler:(id)arg1 ;
@end


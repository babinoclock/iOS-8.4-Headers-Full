/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:39 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>
#import <MediaPlayer/AirPlayDiagnosticsFullscreenControllerDelegate.h>

@class UIWindow, AirPlayDiagnosticsFullscreenController, NSString;

@interface MPFloatingAirPlayDebugViewController : UINavigationController <AirPlayDiagnosticsFullscreenControllerDelegate> {

	UIWindow* _floatingWindow;
	char _presentedAnimated;
	AirPlayDiagnosticsFullscreenController* _airPlayDiagsController;

}

@property (nonatomic,readonly) AirPlayDiagnosticsFullscreenController * airPlayDiagsController;              //@synthesize airPlayDiagsController=_airPlayDiagsController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)presentFromFloatingWindowAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)_destroyFloatingWindow;
-(void)airPlayDiagnosticsContentViewController:(id)arg1 didComplete:(char)arg2 ;
-(AirPlayDiagnosticsFullscreenController *)airPlayDiagsController;
-(char)shouldAutorotate;
-(unsigned)supportedInterfaceOrientations;
@end


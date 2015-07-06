/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:27 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UIApplication.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, UIColor, NSString;

@interface SUApplication : UIApplication <UIApplicationDelegate> {

	char _terminateOnNextSuspend;
	UIWindow* _window;
	UIColor* _interactionTintColor;

}

@property (nonatomic,copy) UIColor * interactionTintColor;              //@synthesize interactionTintColor=_interactionTintColor - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIWindow * window; 
-(void)dealloc;
-(id)init;
-(char)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(unsigned)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2 ;
-(char)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)applicationDidFinishLaunching:(id)arg1 ;
-(double)defaultImageSnapshotExpiration;
-(char)applicationSuspendWithSettings:(id)arg1 ;
-(void)setInteractionTintColor:(UIColor *)arg1 ;
-(UIColor *)interactionTintColor;
-(char)runTest:(id)arg1 options:(id)arg2 ;
-(void)_applicationDidFinishLaunching:(id)arg1 ;
-(void)_storeEnabledChangeNotification:(id)arg1 ;
-(void)_teardownUI;
-(void)_setupUI;
-(void)_exitIfStoreNotAvailable;
-(void)_exitForStoreNotAvailable;
-(void)_runScriptTestWithOptions:(id)arg1 ;
-(void)runTestInvocation:(id)arg1 ;
@end


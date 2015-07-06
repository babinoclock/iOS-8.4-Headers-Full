/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:30 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSNumber;

@interface SUScriptApplication : SUScriptObject

@property (getter=isDelayingTerminate,readonly) id delayingTerminate; 
@property (getter=isRunningInStoreDemoMode,readonly) id runningInStoreDemoMode; 
@property (retain) id iconBadgeNumber; 
@property (readonly) id screenHeight; 
@property (readonly) id screenWidth; 
@property (assign) id statusBarHidden; 
@property (assign) int statusBarStyle; 
@property (getter=wasLaunchedFromLibrary,readonly) id launchedFromLibrary; 
@property (readonly) NSNumber * exitStoreReasonButton; 
@property (readonly) NSNumber * exitStoreReasonDownloadComplete; 
@property (readonly) NSNumber * exitStoreReasonFatalError; 
@property (readonly) NSNumber * exitStoreReasonGotoMainStore; 
@property (readonly) NSNumber * exitStoreReasonOther; 
@property (readonly) NSNumber * exitStoreReasonPurchase; 
@property (readonly) int statusBarAnimationFade; 
@property (readonly) int statusBarAnimationNone; 
@property (readonly) int statusBarAnimationSlide; 
@property (readonly) int statusBarStyleDefault; 
@property (readonly) int statusBarStyleBlackOpaque; 
@property (readonly) int statusBarStyleBlackTranslucent; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(id)statusBarHidden;
-(int)statusBarStyle;
-(void)setStatusBarStyle:(int)arg1 ;
-(void)setStatusBarHidden:(id)arg1 ;
-(void)setStatusBarHidden:(char)arg1 withAnimation:(int)arg2 ;
-(id)isRunningInStoreDemoMode;
-(void)setStatusBarStyle:(int)arg1 animated:(char)arg2 ;
-(id)scriptAttributeKeys;
-(id)screenHeight;
-(id)screenWidth;
-(id)attributeKeys;
-(id)wasLaunchedFromLibrary;
-(void)beginDelayingTerminate;
-(void)endDelayingTerminate;
-(void)exitStoreWithReason:(id)arg1 ;
-(void)returnToLibrary;
-(void)scrollIconToVisible:(id)arg1 shouldSuspend:(char)arg2 ;
-(void)showNewsstand;
-(id)iconBadgeNumber;
-(id)isDelayingTerminate;
-(void)setIconBadgeNumber:(id)arg1 ;
-(NSNumber *)exitStoreReasonButton;
-(NSNumber *)exitStoreReasonDownloadComplete;
-(NSNumber *)exitStoreReasonFatalError;
-(NSNumber *)exitStoreReasonGotoMainStore;
-(NSNumber *)exitStoreReasonOther;
-(NSNumber *)exitStoreReasonPurchase;
-(int)statusBarAnimationFade;
-(int)statusBarAnimationNone;
-(int)statusBarAnimationSlide;
-(int)statusBarStyleDefault;
-(int)statusBarStyleBlackOpaque;
-(int)statusBarStyleBlackTranslucent;
@end

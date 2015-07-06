/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:48 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIViewController, UIWindow, UIScreen;

@interface CKStarkManager : NSObject {

	char _isStarkConnected;
	UIViewController* _starkRootViewController;
	UIWindow* _starkWindow;
	UIScreen* _starkScreen;

}

@property (nonatomic,retain) UIViewController * starkRootViewController;              //@synthesize starkRootViewController=_starkRootViewController - In the implementation block
@property (nonatomic,retain) UIWindow * starkWindow;                                  //@synthesize starkWindow=_starkWindow - In the implementation block
@property (nonatomic,retain) UIScreen * starkScreen;                                  //@synthesize starkScreen=_starkScreen - In the implementation block
@property (nonatomic,readonly) char isStarkConnected;                                 //@synthesize isStarkConnected=_isStarkConnected - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(char)isStarkConnected;
-(void)startListeningForScreenNotifications;
-(void)attachStarkToScreen:(id)arg1 ;
-(void)screenDidConnectNotification:(id)arg1 ;
-(void)screenDidDisconnectNotification:(id)arg1 ;
-(void)detachStarkScreen:(id)arg1 ;
-(void)setStarkScreen:(UIScreen *)arg1 ;
-(void)setStarkWindow:(UIWindow *)arg1 ;
-(void)setStarkRootViewController:(UIViewController *)arg1 ;
-(UIScreen *)starkScreen;
-(UIViewController *)starkRootViewController;
-(UIWindow *)starkWindow;
@end


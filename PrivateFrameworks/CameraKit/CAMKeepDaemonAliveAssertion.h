/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:41 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject;

@interface CAMKeepDaemonAliveAssertion : NSObject {

	NSObject*<OS_xpc_object> _keepaliveConnection;

}
+(id)assertion;
-(void)dealloc;
-(id)init;
-(void)_applicationWillResignActive:(id)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)_tearDownConnection;
-(void)_registerForAppActiveNotifications;
-(void)_unregisterForAppActiveNotifications;
-(void)_setupHeartBeatForConnection:(id)arg1 ;
-(void)_setupConnection;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:33 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSPointerArray, NSObject;

@interface MPAVSystemRoutingController : NSObject {

	NSPointerArray* _clientRoutingControllers;
	int _clientDiscoveryMode;
	NSObject*<OS_dispatch_queue> _serialQueue;
	int _debugNotifyToken;

}
+(id)sharedRoutingController;
-(void)_clientRoutingControllerDidUpdateDiscoveryModeNotification:(id)arg1 ;
-(void)_debugLogSystemControllerState;
-(void)_onQueueUpdateClientRouteDiscoveryMode;
-(void)_updateClientRouteDiscoveryMode;
-(void)registerClientRoutingController:(id)arg1 ;
-(void)unregisterClientRoutingController:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)_init;
@end


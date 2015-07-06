/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:39 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/StoreBookkeeperClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, SBCClientConfiguration, NSMutableDictionary, SBCXPCServiceInterface;

@interface SBCXPCService : NSObject {

	char _isConnecting;
	NSObject*<OS_dispatch_queue> _queue;
	id _serviceProxy;
	id _applicationWillTerminateObserver;
	NSXPCConnection* _xpcConnection;
	SBCClientConfiguration* _clientConfiguration;
	NSMutableDictionary* _pendingReplyBlockCompletionHandlers;
	SBCXPCServiceInterface* _XPCServiceInterface;

}

@property (readonly) NSObject*<OS_dispatch_queue> queue;                                     //@synthesize queue=_queue - In the implementation block
@property (readonly) id serviceProxy;                                                        //@synthesize serviceProxy=_serviceProxy - In the implementation block
@property (__weak,readonly) id applicationWillTerminateObserver;                             //@synthesize applicationWillTerminateObserver=_applicationWillTerminateObserver - In the implementation block
@property (readonly) NSXPCConnection * xpcConnection;                                        //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (readonly) SBCClientConfiguration * clientConfiguration;                           //@synthesize clientConfiguration=_clientConfiguration - In the implementation block
@property (readonly) NSMutableDictionary * pendingReplyBlockCompletionHandlers;              //@synthesize pendingReplyBlockCompletionHandlers=_pendingReplyBlockCompletionHandlers - In the implementation block
@property (readonly) SBCXPCServiceInterface * XPCServiceInterface;                           //@synthesize XPCServiceInterface=_XPCServiceInterface - In the implementation block
@property (readonly) char isConnecting;                                                      //@synthesize isConnecting=_isConnecting - In the implementation block
+(Class)XPCServiceInterfaceClass;
+(id)newListener;
+(id)XPCInterfaceDebugDescription;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(char)isConnecting;
-(NSXPCConnection *)xpcConnection;
-(SBCClientConfiguration *)clientConfiguration;
-(oneway void)setClientConfiguration:(SBCClientConfiguration *)arg1 ;
-(id)initWithClientConfiguration:(id)arg1 ;
-(void)didConnectToService;
-(void)sendMessage:(SEL)arg1 withClientCompletionHandler:(/*^block*/id)arg2 messageBlock:(/*^block*/id)arg3 ;
-(void)_openServiceConnection;
-(id)newServiceConnection;
-(void)_onQueueInvalidateOutstandingRequests:(id)arg1 ;
-(id)_enqueueReplyBlockMessageWithSelector:(SEL)arg1 withClientCompletionHandler:(/*^block*/id)arg2 ;
-(id)_serviceProxy;
-(void)_dequeueReplyBlockMessageWithEnqueuedToken:(id)arg1 ;
-(void)_invalidateOutstandingRequests:(id)arg1 ;
-(id)applicationWillTerminateObserver;
-(NSMutableDictionary *)pendingReplyBlockCompletionHandlers;
-(SBCXPCServiceInterface *)XPCServiceInterface;
-(void)closeServiceConnection;
-(void)_onQueueCloseServiceConnection;
-(id)serviceProxy;
@end


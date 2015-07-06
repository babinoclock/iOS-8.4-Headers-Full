/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:31 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMutableSet, NSMutableDictionary;

@interface SPXPCServer : NSObject {

	NSObject*<OS_xpc_object> _conn;
	NSMutableSet* _connections;
	NSMutableDictionary* _handlerMap;
	NSObject*<OS_dispatch_queue> _connectionsQueue;
	/*^block*/id _disconnectHandler;
	/*^block*/id _shutdownHandler;
	/*^block*/id _defaultMessageHandler;
	NSObject*<OS_dispatch_queue> _eventQueue;
	NSObject*<OS_dispatch_queue> _timerQueue;
	NSObject*<OS_dispatch_source> _idleTimerSource;
	char _timerHasFiredSinceLastMessage;
	char _timeoutPending;
	double _idleTimerInterval;
	char _shutdown;

}

@property (nonatomic,copy) id defaultMessageHandler;              //@synthesize defaultMessageHandler=_defaultMessageHandler - In the implementation block
@property (nonatomic,copy) id disconnectHandler;                  //@synthesize disconnectHandler=_disconnectHandler - In the implementation block
@property (nonatomic,copy) id shutdownHandler;                    //@synthesize shutdownHandler=_shutdownHandler - In the implementation block
-(void)dealloc;
-(void)startListening;
-(void)_resetMessageFlag;
-(/*^block*/id)_handlerForMessageName:(id)arg1 ;
-(id)_highAvailabilityQueue;
-(void)setDefaultMessageHandler:(id)arg1 ;
-(char)_doingWork;
-(id)initListenerWithServiceName:(id)arg1 ;
-(void)setHandlerForMessageName:(id)arg1 handler:(/*^block*/id)arg2 ;
-(char)_runShutdownHandler;
-(void)setIdleTimerInterval:(double)arg1 ;
-(id)defaultMessageHandler;
-(id)shutdownHandler;
-(void)setShutdownHandler:(id)arg1 ;
-(void)_handleNewConnection:(id)arg1 ;
-(char)shutdown;
-(id)disconnectHandler;
-(void)setDisconnectHandler:(id)arg1 ;
-(id)initListenerWithServiceName:(id)arg1 onQueue:(id)arg2 ;
-(void)_rescheduleIdleTimer;
-(char)connectionsAreActive;
@end


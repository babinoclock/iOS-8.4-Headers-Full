/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:16 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, Protocol, NSXPCInterface, NSObject, NSMutableDictionary, NSXPCConnection;

@interface SGDaemonConnection : NSObject {

	NSString* _machServiceName;
	Protocol* _protocol;
	NSXPCInterface* _xpcInterface;
	NSObject*<OS_dispatch_queue> _replyHandlerLock;
	NSObject*<OS_dispatch_queue> _connectLock;
	NSMutableDictionary* _cancellableOperations;
	unsigned _nextCancellationToken;
	NSMutableDictionary* _aborts;
	int _abortCounter;
	int _abortLock;
	int _disconnectCount;
	NSXPCConnection* _xpcConnection;
	id _delegate;

}

@property (nonatomic,retain,readonly) NSXPCConnection * xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (assign,nonatomic) id delegate;                                           //@synthesize delegate=_delegate - In the implementation block
-(void)cancelRemoteOperation:(unsigned)arg1 ;
-(void)_connectToServer;
-(void)_finishAllRepliesOnServerDeath;
-(void)removeCancellableRemoteOperation:(unsigned)arg1 ;
-(unsigned)addCancellableRemoteOperation:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)disconnect;
-(id)initWithMachServiceName:(id)arg1 protocol:(id)arg2 xpcInterface:(id)arg3 ;
-(id)waitUntilReturn:(/*^block*/id)arg1 error:(id*)arg2 ;
-(void)sgClientReceivedResults:(id)arg1 forSearchToken:(unsigned)arg2 finished:(char)arg3 ;
-(NSXPCConnection *)xpcConnection;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:23 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, NSXPCListenerDelegate;
@class NSObject, NSString, NSXPCListenerEndpoint;

@interface NSXPCListener : NSObject {

	void* _xconnection;
	NSObject*<OS_dispatch_queue> _userQueue;
	void* reserved0;
	id<NSXPCListenerDelegate> _delegate;
	NSString* _serviceName;
	unsigned long long _state;
	id _reserved1;
	id _reserved2;

}

@property (assign) id<NSXPCListenerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (retain,readonly) NSXPCListenerEndpoint * endpoint; 
+(id)_UUID;
+(id)serviceListener;
+(id)anonymousListener;
+(void)enableTransactions;
-(id)_initShared;
-(void)dealloc;
-(void)setDelegate:(id<NSXPCListenerDelegate>)arg1 ;
-(id)description;
-(id<NSXPCListenerDelegate>)delegate;
-(void)invalidate;
-(void)suspend;
-(void)stop;
-(void)resume;
-(id)initWithMachServiceName:(id)arg1 ;
-(void)setOptions:(unsigned)arg1 ;
-(void)_setQueue:(id)arg1 ;
-(id)initWithServiceName:(id)arg1 ;
-(id)_queue;
-(NSXPCListenerEndpoint *)endpoint;
-(id)_xpcConnection;
-(id)serviceName;
-(void)finalize;
@end


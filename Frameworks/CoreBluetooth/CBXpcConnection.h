/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:32 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CBXpcConnectionDelegate, OS_dispatch_queue, OS_dispatch_semaphore, OS_xpc_object;
@class NSObject, NSMutableDictionary;

@interface CBXpcConnection : NSObject {

	id<CBXpcConnectionDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _eventQueue;
	NSMutableDictionary* _options;
	int _type;
	char _appIsBackgrounded;
	NSObject*<OS_dispatch_semaphore> _xpcSendBarrier;
	NSObject*<OS_xpc_object> _xpcConnection;
	char _isFinalizing;

}

@property (getter=isSetupOnUIThread,nonatomic,readonly) char setupOnUIThread; 
-(void)sendMsg:(unsigned short)arg1 args:(id)arg2 ;
-(id)sendSyncMsg:(unsigned short)arg1 args:(id)arg2 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 options:(id)arg3 sessionType:(int)arg4 ;
-(char)isSetupOnUIThread;
-(void)handleMsg:(unsigned short)arg1 args:(id)arg2 ;
-(void)applicationWillEnterForegroundNotification;
-(void)handleConnectionEvent:(id)arg1 ;
-(void)checkOut;
-(void)sendAsyncMsg:(unsigned short)arg1 args:(id)arg2 ;
-(id)allocXpcDictionaryWithNSDictionary:(id)arg1 ;
-(id)allocXpcMsg:(unsigned short)arg1 args:(id)arg2 ;
-(void)sendBarrier;
-(id)nsDictionaryFromXpcDictionary:(id)arg1 extraCapacity:(unsigned)arg2 ;
-(void)handleFinalized;
-(void)handleReset;
-(void)handleInvalid;
-(id)allocXpcArrayWithNSArray:(id)arg1 ;
-(id)allocXpcObjectWithNSObject:(id)arg1 ;
-(id)nsArrayWithXpcArray:(id)arg1 ;
-(id)nsObjectWithXpcObject:(id)arg1 ;
-(void)dealloc;
-(void)disconnect;
-(void)applicationDidEnterBackgroundNotification;
-(void)checkIn;
@end

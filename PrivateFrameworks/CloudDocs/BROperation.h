/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:52 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface BROperation : NSOperation {

	id _remoteOperation;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned char _uuid[16];
	char _executing;
	char _finished;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize queue=_queue - In the implementation block
@property (getter=isExecuting,readonly) char executing;                                 //@synthesize executing=_executing - In the implementation block
@property (getter=isFinished,readonly) char finished;                                   //@synthesize finished=_finished - In the implementation block
@property (assign,nonatomic) NSObject*<BRCancellable> remoteOperation;                  //@synthesize remoteOperation=_remoteOperation - In the implementation block
-(void)_setExecuting:(char)arg1 ;
-(void)_setFinished:(char)arg1 ;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(oneway void)invalidate;
-(void)start;
-(char)isFinished;
-(char)isExecuting;
-(void)_setRemoteOperation:(id)arg1 ;
-(id)remoteObject;
-(oneway void)progressCallbackWithTopic:(id)arg1 userInfo:(id)arg2 ;
-(NSObject*<BRCancellable>)remoteOperation;
-(void)setRemoteOperation:(NSObject*<BRCancellable>)arg1 ;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(char)_finishIfCancelled;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)completedWithResult:(id)arg1 error:(id)arg2 ;
-(oneway void)setRemoteOperationProxy:(id)arg1 userInfo:(id)arg2 ;
@end


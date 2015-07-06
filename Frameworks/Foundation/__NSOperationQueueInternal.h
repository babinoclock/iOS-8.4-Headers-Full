/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:58 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Foundation/Foundation-Structs.h>
@class NSOperation, NSObject;

@interface __NSOperationQueueInternal : NSObject {

	opaque_pthread_mutex_t __queueLock;
	NSOperation* __firstOperation;
	NSOperation* __lastOperation;
	NSOperation* __pendingFirstOperation;
	NSOperation* __pendingLastOperation;
	NSOperation* __firstPriOperation[5];
	NSOperation* __lastPriOperation[5];
	NSObject*<OS_dispatch_queue> __pending_barrier;
	int __maxNumOps;
	int __actualMaxNumOps;
	int __numExecOps;
	unsigned __unused2;
	unsigned char __mainQ;
	unsigned char __suspended;
	unsigned char __overcommit;
	char __propertyQOS;
	NSObject*<OS_dispatch_queue> __dispatch_queue;
	char __nameBuffer[160];

}
-(void)dealloc;
-(id)init;
-(void)finalize;
@end


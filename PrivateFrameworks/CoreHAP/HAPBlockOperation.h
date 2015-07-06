/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:09 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSBlockOperation.h>

@protocol OS_dispatch_semaphore, OS_dispatch_queue;
@class NSObject, NSError;

@interface HAPBlockOperation : NSBlockOperation {

	NSObject*<OS_dispatch_semaphore> _finishedSemaphore;
	NSError* _error;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (nonatomic,retain) NSError * error;                                                 //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> finishedSemaphore;              //@synthesize finishedSemaphore=_finishedSemaphore - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                        //@synthesize workQueue=_workQueue - In the implementation block
-(char)_isCancelled;
-(id)_error;
-(void)_setError:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)debugDescription;
-(char)isCancelled;
-(void)start;
-(void)_cancelWithError:(id)arg1 ;
-(char)isFinished;
-(char)isExecuting;
-(void)finish;
-(NSError *)error;
-(void)cancelWithError:(id)arg1 ;
-(void)_finish;
-(NSObject*<OS_dispatch_semaphore>)finishedSemaphore;
-(void)setFinishedSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(char)_isExecuting;
-(char)_isFinished;
-(id)_finishedSemaphore;
-(void)_setFinishedSemaphore:(id)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
@end

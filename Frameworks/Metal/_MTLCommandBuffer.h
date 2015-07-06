/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:44 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MTLCommandEncoder, MTLCommandQueue;
#import <Metal/Metal-Structs.h>
@class _MTLCommandQueue, MTLError, NSString, NSDictionary, NSError;

@interface _MTLCommandBuffer : NSObject {

	id<MTLCommandEncoder> _currentCommandEncoder;
	_MTLCommandQueue*<MTLCommandQueue> _queue;
	MTLDispatch* _scheduledDispatchList;
	MTLDispatch* _completedDispatchList;
	opaque_pthread_mutex_t _mutex;
	opaque_pthread_cond_t _cond;
	unsigned long long _creationTime;
	unsigned long long _enqueueTime;
	unsigned long long _commitTime;
	unsigned long long _submitToKernelTime;
	unsigned long long _kernelScheduledTime;
	unsigned long long _submitToHardwareTime;
	unsigned long long _completionInterruptTime;
	unsigned long long _kernelCompleteTime;
	unsigned long long _completionHandlerEnqueueTime;
	unsigned long long _completionHandlerExecutionTime;
	unsigned _status;
	MTLError* _error;
	NSString* _label;
	BOOL _skipRender;
	BOOL _profilingEnabled;
	BOOL _scheduledCallbacksDone;
	BOOL _completedCallbacksDone;
	char _strongObjectReferences;
	NSDictionary* _profilingResults;
	char _retainedReferences;
	char _synchronousDebugMode;

}

@property (readonly) char retainedReferences;                             //@synthesize retainedReferences=_retainedReferences - In the implementation block
@property (readonly) char synchronousDebugMode;                           //@synthesize synchronousDebugMode=_synchronousDebugMode - In the implementation block
@property (readonly) id<MTLCommandQueue> commandQueue;                    //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned status;                                     //@synthesize status=_status - In the implementation block
@property (copy) NSString * label;                                        //@synthesize label=_label - In the implementation block
@property (readonly) NSError * error; 
@property (getter=isProfilingEnabled) char profilingEnabled; 
@property (readonly) NSDictionary * profilingResults; 
+(void)initialize;
-(id)initWithQueue:(id)arg1 retainedReferences:(char)arg2 synchronousDebugMode:(char)arg3 ;
-(void)didComplete:(unsigned long long)arg1 error:(unsigned)arg2 ;
-(char)isProfilingEnabled;
-(void)commitAndReset;
-(char)retainedReferences;
-(id)initWithQueue:(id)arg1 retainedReferences:(char)arg2 ;
-(void)enqueue;
-(void)addScheduledHandler:(/*^block*/id)arg1 ;
-(void)presentDrawable:(id)arg1 ;
-(void)presentDrawable:(id)arg1 atTime:(double)arg2 ;
-(void)addCompletedHandler:(/*^block*/id)arg1 ;
-(void)setCurrentCommandEncoder:(id)arg1 ;
-(char)skipRender;
-(void)setProfilingEnabled:(char)arg1 ;
-(void)didSchedule:(unsigned long long)arg1 error:(unsigned)arg2 ;
-(void)kernelSubmitTime;
-(char)isCommitted;
-(void)setCommitted:(char)arg1 ;
-(NSDictionary *)profilingResults;
-(char)synchronousDebugMode;
-(void)waitUntilScheduled;
-(void)waitUntilCompleted;
-(void)dealloc;
-(id)description;
-(NSString *)label;
-(void)commit;
-(void)setLabel:(NSString *)arg1 ;
-(unsigned)status;
-(NSError *)error;
-(id<MTLCommandQueue>)commandQueue;
@end

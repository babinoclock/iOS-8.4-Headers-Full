/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:52 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, NSDate, CUTWeakReference;

@interface PCDispatchTimer : NSObject {

	NSObject*<OS_dispatch_source> _timerSource;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _fireTime;
	NSDate* _fireDate;
	CUTWeakReference* _target;
	SEL _selector;
	char _isValid;

}

@property (nonatomic,readonly) char isValid; 
@property (nonatomic,retain) NSDate * fireDate; 
-(void)dealloc;
-(void)invalidate;
-(char)isValid;
-(void)setFireDate:(NSDate *)arg1 ;
-(void)start;
-(NSDate *)fireDate;
-(void)_cleanupTimer;
-(id)initWithQueue:(id)arg1 target:(id)arg2 selector:(SEL)arg3 fireTime:(unsigned long long)arg4 ;
-(void)_callTarget;
@end


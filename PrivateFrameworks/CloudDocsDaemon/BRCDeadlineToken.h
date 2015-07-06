/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:55 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSObject, BRCDeadlineScheduler;

@interface BRCDeadlineToken : NSObject {

	long long _deadline;
	NSObject*<OS_dispatch_source> _latch;
	BRCDeadlineScheduler* _scheduler;
	char _isResumed;

}
-(void)cancel;
-(void)dealloc;
-(id)description;
-(void)suspend;
-(void)resume;
-(id)initWithScheduler:(id)arg1 ;
-(void)setTargetQueue:(id)arg1 ;
-(void)setBottomQueue:(id)arg1 ;
-(void)setEventHandler:(/*^block*/id)arg1 ;
-(void)scheduleAt:(long long)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:05 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface IDSInternalQueueController : NSObject {

	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)performBlock:(/*^block*/id)arg1 ;
-(id)queue;
-(void)assertQueueIsNotCurrent;
-(void)performBlock:(/*^block*/id)arg1 waitUntilDone:(char)arg2 ;
-(char)isQueueCurrent;
-(void)assertQueueIsCurrent;
@end


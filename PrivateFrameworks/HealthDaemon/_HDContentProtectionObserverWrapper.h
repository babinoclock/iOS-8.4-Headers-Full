/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:58 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol HDContentProtectionObserver, OS_dispatch_queue;
@class NSObject;

@interface _HDContentProtectionObserverWrapper : NSObject {

	id<HDContentProtectionObserver> _observer;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,__weak,readonly) id<HDContentProtectionObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                           //@synthesize queue=_queue - In the implementation block
-(id<HDContentProtectionObserver>)observer;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithObserver:(id)arg1 queue:(id)arg2 ;
@end

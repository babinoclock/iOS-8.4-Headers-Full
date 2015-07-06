/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:05 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class NSMutableSet, NSString, NSObject;

@interface PLSemaphore : NSObject {

	NSMutableSet* _interestedObjects;
	NSMutableSet* _pendingDoneObjects;
	NSString* _key;
	NSObject*<OS_dispatch_semaphore> _semaphore;
	double _timeout;

}

@property (assign) double timeout;                                          //@synthesize timeout=_timeout - In the implementation block
@property (retain) NSMutableSet * interestedObjects;                        //@synthesize interestedObjects=_interestedObjects - In the implementation block
@property (retain) NSMutableSet * pendingDoneObjects;                       //@synthesize pendingDoneObjects=_pendingDoneObjects - In the implementation block
@property (retain) NSString * key;                                          //@synthesize key=_key - In the implementation block
@property (retain) NSObject*<OS_dispatch_semaphore> semaphore;              //@synthesize semaphore=_semaphore - In the implementation block
+(id)sharedSemaphoreForKey:(id)arg1 ;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)semaphore;
-(void)setSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(double)timeout;
-(NSMutableSet *)interestedObjects;
-(NSMutableSet *)pendingDoneObjects;
-(void)signalNonInterestByObject:(id)arg1 ;
-(void)setInterestedObjects:(NSMutableSet *)arg1 ;
-(void)setPendingDoneObjects:(NSMutableSet *)arg1 ;
-(void)signalStartListening;
-(void)waitWithBlock:(/*^block*/id)arg1 ;
-(void)signalInterestByObject:(id)arg1 ;
-(void)signalDoneByObject:(id)arg1 ;
-(id)initWithKey:(id)arg1 ;
@end

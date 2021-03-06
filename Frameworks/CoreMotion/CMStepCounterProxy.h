/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:46 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject;

@interface CMStepCounterProxy : NSObject {

	CLConnectionClient* fLocationdConnection;
	char fStartedUpdates;
	NSObject*<OS_dispatch_queue> fInternalQueue;
	int fStepCountFromStart;
	int fPrevStepCount;

}
-(void)_handleQueryResponse:(CLConnectionMessage*)arg1 onQueue:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)_queryStepCountStartingFromInternal:(id)arg1 to:(id)arg2 toQueue:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)_startStepCountingUpdatesToQueue:(id)arg1 updateOn:(int)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)dealloc;
-(id)init;
-(void)_teardown;
@end


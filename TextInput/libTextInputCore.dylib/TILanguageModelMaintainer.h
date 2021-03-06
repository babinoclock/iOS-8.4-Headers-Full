/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:37 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDate, NSTimer;

@interface TILanguageModelMaintainer : NSObject {

	NSDate* _nextEligibleMaintenanceDate;
	NSTimer* _timer;
	NSTimer* _dynamicLearningCacheTimer;

}

@property (nonatomic,retain) NSDate * nextEligibleMaintenanceDate;              //@synthesize nextEligibleMaintenanceDate=_nextEligibleMaintenanceDate - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                                   //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) NSTimer * dynamicLearningCacheTimer;               //@synthesize dynamicLearningCacheTimer=_dynamicLearningCacheTimer - In the implementation block
+(id)sharedLanguageModelMaintainer;
-(void)dealloc;
-(id)init;
-(void)timerFired:(id)arg1 ;
-(void)setTimer:(NSTimer *)arg1 ;
-(NSTimer *)timer;
-(void)keyboardAssertionsDidChange:(id)arg1 ;
-(NSDate *)nextEligibleMaintenanceDate;
-(NSTimer *)dynamicLearningCacheTimer;
-(void)dynamicLearningCacheTimerFired:(id)arg1 ;
-(void)setDynamicLearningCacheTimer:(NSTimer *)arg1 ;
-(void)touchTimer;
-(void)touchDynamicLearningCacheTimer;
-(void)setNextEligibleMaintenanceDate:(NSDate *)arg1 ;
@end


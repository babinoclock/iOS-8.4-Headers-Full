/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:35 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SportsWorkout/SWRunSensor.h>

@protocol SWFakeRunSensorDelegate;
@interface SWFakeRunSensor : SWRunSensor {

	id<SWFakeRunSensorDelegate> _delegate;

}
+(void)initialize;
+(id)_createDelegate;
-(void)dealloc;
-(id)init;
-(void)deactivate;
-(void)_fakeLinkingSuccess;
-(void)_fakeSearchSuccess;
-(void)_fakeNextPacketWithPayload:(id)arg1 timestamp:(unsigned long)arg2 ;
-(void)beginLinking;
-(void)cancelLinking;
-(void)beginSearching;
-(void)cancelSearching;
-(unsigned)remainingBatteryLifetimeInHours;
-(void)_fakeLinkingFailure;
@end

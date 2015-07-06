/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:07 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogLiteOperators/PLAWDAuxMetrics.h>

@class PLEntryNotificationOperatorComposition, NSDate;

@interface PLAWDAudio : PLAWDAuxMetrics {

	PLEntryNotificationOperatorComposition* _audioRailCallback;
	NSDate* _startTime;

}

@property (retain) PLEntryNotificationOperatorComposition * audioRailCallback;              //@synthesize audioRailCallback=_audioRailCallback - In the implementation block
@property (retain) NSDate * startTime;                                                      //@synthesize startTime=_startTime - In the implementation block
+(id)entryAggregateDefinitionAwdAudio;
+(id)getSharedObjWithOperator:(id)arg1 ;
+(id)entryAggregateDefinitions;
-(void)setStartTime:(NSDate *)arg1 ;
-(NSDate *)startTime;
-(void)resetAudioTable;
-(void)handleAudioRailCallback:(id)arg1 ;
-(void)setAudioRailCallback:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)finalizeAudioTable;
-(void)startMetricCollection:(id)arg1 ;
-(void)stopMetricCollection:(id)arg1 ;
-(char)submitDataToAWDServer:(id)arg1 withAwdConn:(id)arg2 ;
-(PLEntryNotificationOperatorComposition *)audioRailCallback;
@end

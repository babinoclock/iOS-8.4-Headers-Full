/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:52 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PerformanceAnalysis/PASampleAggregator.h>

@interface PAExecutableAggregator : PASampleAggregator
-(id)newAggregatedTaskForIdentificationPurposesWithSampleTask:(id)arg1 ;
-(id)newAggregatedTaskForSampleTask:(id)arg1 atTimestampIndex:(unsigned)arg2 ;
-(void)filterToWallTimeRangeStart:(double)arg1 end:(double)arg2 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:13 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <VoiceMemos/NSCoding.h>

@class NSData;

@interface RCWaveformSegment : NSObject <NSCoding> {

	NSData* _averagePowerLevelData;
	SCD_Struct_RC4 _timeRange;

}

@property (nonatomic,readonly) SCD_Struct_RC4 timeRange;                     //@synthesize timeRange=_timeRange - In the implementation block
@property (nonatomic,readonly) const float* averagePowerLevels; 
@property (nonatomic,readonly) int averagePowerLevelsCount; 
+(void)initialize;
+(id)_discontinuityRepairedSegmentsByGrowingToFillGapsInSegments:(id)arg1 ;
+(id)_segmentByMergingMergableSegments:(id)arg1 ;
+(id)emptySegmentWithTimeRange:(SCD_Struct_RC4)arg1 ;
+(id)_segmentsByJoiningSegment:(id)arg1 toSegmentIfNecessaryWithGreaterSegment:(id)arg2 averagePowerLevelJoinLimit:(unsigned)arg3 ;
+(id)_mergedSegmentByFastMergingWithMergeableSegments:(id)arg1 mergedLevelsDuration:(double)arg2 ;
+(id)_mergedSegmentByResamplingWithMergeableSegments:(id)arg1 mergedLevelsDuration:(double)arg2 ;
+(id)segmentsByReparingDiscontinuitiesInSegments:(id)arg1 ;
+(id)segmentsByShiftingSegments:(id)arg1 byTimeOffset:(double)arg2 ;
+(id)segmentsByMergingSegments:(id)arg1 preferredSegmentDuration:(double)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(SCD_Struct_RC4)timeRange;
-(id)copyWithTimeRangeOffsetByTimeOffset:(double)arg1 ;
-(id)initWithTimeRange:(SCD_Struct_RC4)arg1 averagePowerLevelVector:(vector<float, std::__1::allocator<float> >*)arg2 ;
-(id)_initWithTimeRange:(SCD_Struct_RC4)arg1 averagePowerLevelData:(id)arg2 ;
-(id)initWithTimeRange:(SCD_Struct_RC4)arg1 averagePowerLevelData:(id)arg2 ;
-(id)simpleDescription;
-(int)averagePowerLevelsCount;
-(const float*)averagePowerLevels;
-(id)copyWithAdjustedTimeRange:(SCD_Struct_RC4)arg1 ;
-(id)_segmentsByJoiningIfNecessaryGreaterSegment:(id)arg1 averagePowerLevelJoinLimit:(unsigned)arg2 ;
-(id)_segmentWithValuesInContainedTimeRange:(SCD_Struct_RC4)arg1 ;
-(id)verboseDescription;
-(char)hasUniformPowerLevel:(float)arg1 ;
-(char)isWaveformDataEqualToDataInSegment:(id)arg1 ;
-(id)segmentsByJoiningIfSmallSegment:(id)arg1 ;
-(id)segmentsByJoiningIfSmallSegment:(id)arg1 averagePowerLevelJoinLimit:(unsigned)arg2 ;
-(id)segmentByClippingToTimeRange:(SCD_Struct_RC4)arg1 ;
@end


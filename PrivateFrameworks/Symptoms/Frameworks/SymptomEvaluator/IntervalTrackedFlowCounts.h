/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:59 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SymptomEvaluator/TrackedFlowCounts.h>

@interface IntervalTrackedFlowCounts : TrackedFlowCounts {

	unsigned long long _timestampSeconds;
	unsigned long long _numBlemishedFlows;
	unsigned long long _numUnblemishedFlows;

}

@property (assign,nonatomic) unsigned long long timestampSeconds;                 //@synthesize timestampSeconds=_timestampSeconds - In the implementation block
@property (assign,nonatomic) unsigned long long numBlemishedFlows;                //@synthesize numBlemishedFlows=_numBlemishedFlows - In the implementation block
@property (assign,nonatomic) unsigned long long numUnblemishedFlows;              //@synthesize numUnblemishedFlows=_numUnblemishedFlows - In the implementation block
-(id)description;
-(void)addFlowCounts:(id)arg1 ;
-(void)subtractFlowCounts:(id)arg1 ;
-(unsigned long long)numBlemishedFlows;
-(unsigned long long)numUnblemishedFlows;
-(void)addIntervalFlowCounts:(id)arg1 ;
-(void)subtractIntervalFlowCounts:(id)arg1 ;
-(unsigned long long)timestampSeconds;
-(void)setTimestampSeconds:(unsigned long long)arg1 ;
-(void)setNumBlemishedFlows:(unsigned long long)arg1 ;
-(void)setNumUnblemishedFlows:(unsigned long long)arg1 ;
@end


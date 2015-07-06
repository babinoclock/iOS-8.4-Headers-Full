/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:57 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <HealthDaemon/HealthDaemon-Structs.h>
@interface HDDiscreteCollectionCalculator : NSObject {

	SCD_Struct_HD0 _currentStats;
	map<long long, _HDDiscreteStats, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDDiscreteStats> > >* _bySource;
	char _detailBySource;

}

@property (assign,nonatomic) char detailBySource;              //@synthesize detailBySource=_detailBySource - In the implementation block
-(id)init;
-(id)description;
-(char)hasData;
-(int)dataCount;
-(id)statsBySource;
-(void)addCurrentValue:(double)arg1 sourceId:(long long)arg2 ;
-(void)advanceBucket;
-(void)getCurrentBucketStats:(SCD_Struct_HD0*)arg1 ;
-(char)detailBySource;
-(void)setDetailBySource:(char)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:03 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface PLCloudSchedulerConfiguration : NSObject {

	NSArray* _triggers;
	NSArray* _scenarioProducers;
	unsigned _concurrencyLevel;

}

@property (nonatomic,retain) NSArray * triggers;                       //@synthesize triggers=_triggers - In the implementation block
@property (nonatomic,retain) NSArray * scenarioProducers;              //@synthesize scenarioProducers=_scenarioProducers - In the implementation block
@property (assign,nonatomic) unsigned concurrencyLevel;                //@synthesize concurrencyLevel=_concurrencyLevel - In the implementation block
-(NSArray *)triggers;
-(void)setTriggers:(NSArray *)arg1 ;
-(NSArray *)scenarioProducers;
-(void)setScenarioProducers:(NSArray *)arg1 ;
-(unsigned)concurrencyLevel;
-(void)setConcurrencyLevel:(unsigned)arg1 ;
@end


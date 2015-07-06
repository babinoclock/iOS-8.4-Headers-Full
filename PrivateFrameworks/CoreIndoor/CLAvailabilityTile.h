/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:11 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreIndoor/CoreIndoor-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreIndoor/NSCopying.h>

@class LocalizerParameters, NSMutableArray;

@interface CLAvailabilityTile : PBCodable <NSCopying> {

	double _availabilityZScoreConfidenceInterval;
	unsigned _locationOfInterestMergeRadiusKM;
	LocalizerParameters* _parameterOverrides;
	unsigned _preferPredictionWithinNActivityCycles;
	unsigned _prefetchMaxFloorCount;
	unsigned _prefetchRadiusKM;
	NSMutableArray* _venues;
	SCD_Struct_Pd4 _has;

}

@property (nonatomic,retain) NSMutableArray * venues;                                     //@synthesize venues=_venues - In the implementation block
@property (nonatomic,readonly) char hasParameterOverrides; 
@property (nonatomic,retain) LocalizerParameters * parameterOverrides;                    //@synthesize parameterOverrides=_parameterOverrides - In the implementation block
@property (assign,nonatomic) char hasAvailabilityZScoreConfidenceInterval; 
@property (assign,nonatomic) double availabilityZScoreConfidenceInterval;                 //@synthesize availabilityZScoreConfidenceInterval=_availabilityZScoreConfidenceInterval - In the implementation block
@property (assign,nonatomic) char hasPrefetchRadiusKM; 
@property (assign,nonatomic) unsigned prefetchRadiusKM;                                   //@synthesize prefetchRadiusKM=_prefetchRadiusKM - In the implementation block
@property (assign,nonatomic) char hasPrefetchMaxFloorCount; 
@property (assign,nonatomic) unsigned prefetchMaxFloorCount;                              //@synthesize prefetchMaxFloorCount=_prefetchMaxFloorCount - In the implementation block
@property (assign,nonatomic) char hasLocationOfInterestMergeRadiusKM; 
@property (assign,nonatomic) unsigned locationOfInterestMergeRadiusKM;                    //@synthesize locationOfInterestMergeRadiusKM=_locationOfInterestMergeRadiusKM - In the implementation block
@property (assign,nonatomic) char hasPreferPredictionWithinNActivityCycles; 
@property (assign,nonatomic) unsigned preferPredictionWithinNActivityCycles;              //@synthesize preferPredictionWithinNActivityCycles=_preferPredictionWithinNActivityCycles - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setVenues:(NSMutableArray *)arg1 ;
-(void)addVenues:(id)arg1 ;
-(unsigned)venuesCount;
-(void)clearVenues;
-(id)venuesAtIndex:(unsigned)arg1 ;
-(void)setParameterOverrides:(LocalizerParameters *)arg1 ;
-(char)hasParameterOverrides;
-(double)availabilityZScoreConfidenceInterval;
-(void)setAvailabilityZScoreConfidenceInterval:(double)arg1 ;
-(void)setHasAvailabilityZScoreConfidenceInterval:(char)arg1 ;
-(char)hasAvailabilityZScoreConfidenceInterval;
-(unsigned)prefetchRadiusKM;
-(void)setPrefetchRadiusKM:(unsigned)arg1 ;
-(void)setHasPrefetchRadiusKM:(char)arg1 ;
-(char)hasPrefetchRadiusKM;
-(unsigned)prefetchMaxFloorCount;
-(void)setPrefetchMaxFloorCount:(unsigned)arg1 ;
-(void)setHasPrefetchMaxFloorCount:(char)arg1 ;
-(char)hasPrefetchMaxFloorCount;
-(unsigned)locationOfInterestMergeRadiusKM;
-(void)setLocationOfInterestMergeRadiusKM:(unsigned)arg1 ;
-(void)setHasLocationOfInterestMergeRadiusKM:(char)arg1 ;
-(char)hasLocationOfInterestMergeRadiusKM;
-(unsigned)preferPredictionWithinNActivityCycles;
-(void)setPreferPredictionWithinNActivityCycles:(unsigned)arg1 ;
-(void)setHasPreferPredictionWithinNActivityCycles:(char)arg1 ;
-(char)hasPreferPredictionWithinNActivityCycles;
-(NSMutableArray *)venues;
-(LocalizerParameters *)parameterOverrides;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end


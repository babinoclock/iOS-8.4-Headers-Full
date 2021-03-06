/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:52 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSMutableArray;

@interface GEOVLaneCharacteristic : PBCodable <NSCopying> {

	NSMutableArray* _laneDirections;
	NSMutableArray* _laneDividers;
	NSMutableArray* _laneTypes;
	unsigned _roadLaneCount;
	SCD_Struct_GE5 _has;

}

@property (assign,nonatomic) char hasRoadLaneCount; 
@property (assign,nonatomic) unsigned roadLaneCount;                       //@synthesize roadLaneCount=_roadLaneCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * laneDividers;                //@synthesize laneDividers=_laneDividers - In the implementation block
@property (nonatomic,retain) NSMutableArray * laneDirections;              //@synthesize laneDirections=_laneDirections - In the implementation block
@property (nonatomic,retain) NSMutableArray * laneTypes;                   //@synthesize laneTypes=_laneTypes - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setLaneDividers:(NSMutableArray *)arg1 ;
-(void)setLaneDirections:(NSMutableArray *)arg1 ;
-(void)setLaneTypes:(NSMutableArray *)arg1 ;
-(void)addLaneDivider:(id)arg1 ;
-(void)addLaneDirection:(id)arg1 ;
-(void)addLaneType:(id)arg1 ;
-(unsigned)laneDividersCount;
-(void)clearLaneDividers;
-(id)laneDividerAtIndex:(unsigned)arg1 ;
-(unsigned)laneDirectionsCount;
-(void)clearLaneDirections;
-(id)laneDirectionAtIndex:(unsigned)arg1 ;
-(unsigned)laneTypesCount;
-(void)clearLaneTypes;
-(id)laneTypeAtIndex:(unsigned)arg1 ;
-(void)setRoadLaneCount:(unsigned)arg1 ;
-(void)setHasRoadLaneCount:(char)arg1 ;
-(char)hasRoadLaneCount;
-(unsigned)roadLaneCount;
-(NSMutableArray *)laneDividers;
-(NSMutableArray *)laneDirections;
-(NSMutableArray *)laneTypes;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:47 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSMutableArray, NSString, GEORPMapLocation, GEOPlace, GEOPDPlace;

@interface GEORPProblemContext : PBCodable <NSCopying> {

	SCD_Struct_GE2 _sessionId;
	unsigned long long _originatingAuxiliaryControlIndex;
	NSMutableArray* _auxiliaryControls;
	NSMutableArray* _directionsRequests;
	NSMutableArray* _directionsResponses;
	NSString* _lastSearchString;
	GEORPMapLocation* _mapLocation;
	GEOPlace* _originalPlace;
	int _pinType;
	GEOPDPlace* _place;
	NSString* _tileStateLog;
	NSMutableArray* _visibleTileSets;
	SCD_Struct_GE4 _has;

}

@property (assign,nonatomic) char hasSessionId; 
@property (assign,nonatomic) SCD_Struct_GE2 sessionId;                                         //@synthesize sessionId=_sessionId - In the implementation block
@property (assign,nonatomic) char hasPinType; 
@property (assign,nonatomic) int pinType;                                                      //@synthesize pinType=_pinType - In the implementation block
@property (nonatomic,readonly) char hasOriginalPlace; 
@property (nonatomic,retain) GEOPlace * originalPlace;                                         //@synthesize originalPlace=_originalPlace - In the implementation block
@property (nonatomic,readonly) char hasMapLocation; 
@property (nonatomic,retain) GEORPMapLocation * mapLocation;                                   //@synthesize mapLocation=_mapLocation - In the implementation block
@property (nonatomic,retain) NSMutableArray * visibleTileSets;                                 //@synthesize visibleTileSets=_visibleTileSets - In the implementation block
@property (nonatomic,readonly) char hasTileStateLog; 
@property (nonatomic,retain) NSString * tileStateLog;                                          //@synthesize tileStateLog=_tileStateLog - In the implementation block
@property (nonatomic,readonly) char hasPlace; 
@property (nonatomic,retain) GEOPDPlace * place;                                               //@synthesize place=_place - In the implementation block
@property (nonatomic,retain) NSMutableArray * directionsRequests;                              //@synthesize directionsRequests=_directionsRequests - In the implementation block
@property (nonatomic,retain) NSMutableArray * directionsResponses;                             //@synthesize directionsResponses=_directionsResponses - In the implementation block
@property (nonatomic,readonly) char hasLastSearchString; 
@property (nonatomic,retain) NSString * lastSearchString;                                      //@synthesize lastSearchString=_lastSearchString - In the implementation block
@property (nonatomic,retain) NSMutableArray * auxiliaryControls;                               //@synthesize auxiliaryControls=_auxiliaryControls - In the implementation block
@property (assign,nonatomic) char hasOriginatingAuxiliaryControlIndex; 
@property (assign,nonatomic) unsigned long long originatingAuxiliaryControlIndex;              //@synthesize originatingAuxiliaryControlIndex=_originatingAuxiliaryControlIndex - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setPlace:(GEOPDPlace *)arg1 ;
-(GEOPDPlace *)place;
-(char)hasPlace;
-(SCD_Struct_GE2)sessionId;
-(char)hasSessionId;
-(void)setOriginalPlace:(GEOPlace *)arg1 ;
-(void)setMapLocation:(GEORPMapLocation *)arg1 ;
-(void)setVisibleTileSets:(NSMutableArray *)arg1 ;
-(void)setTileStateLog:(NSString *)arg1 ;
-(void)setDirectionsRequests:(NSMutableArray *)arg1 ;
-(void)setDirectionsResponses:(NSMutableArray *)arg1 ;
-(void)setLastSearchString:(NSString *)arg1 ;
-(void)setAuxiliaryControls:(NSMutableArray *)arg1 ;
-(void)addVisibleTileSet:(id)arg1 ;
-(void)addDirectionsRequest:(id)arg1 ;
-(void)addDirectionsResponse:(id)arg1 ;
-(void)addAuxiliaryControl:(id)arg1 ;
-(unsigned)visibleTileSetsCount;
-(void)clearVisibleTileSets;
-(id)visibleTileSetAtIndex:(unsigned)arg1 ;
-(unsigned)directionsRequestsCount;
-(void)clearDirectionsRequests;
-(id)directionsRequestAtIndex:(unsigned)arg1 ;
-(unsigned)directionsResponsesCount;
-(void)clearDirectionsResponses;
-(id)directionsResponseAtIndex:(unsigned)arg1 ;
-(unsigned)auxiliaryControlsCount;
-(void)clearAuxiliaryControls;
-(id)auxiliaryControlAtIndex:(unsigned)arg1 ;
-(void)setSessionId:(SCD_Struct_GE2)arg1 ;
-(void)setHasSessionId:(char)arg1 ;
-(void)setPinType:(int)arg1 ;
-(void)setHasPinType:(char)arg1 ;
-(char)hasPinType;
-(char)hasOriginalPlace;
-(char)hasMapLocation;
-(char)hasTileStateLog;
-(char)hasLastSearchString;
-(void)setOriginatingAuxiliaryControlIndex:(unsigned long long)arg1 ;
-(void)setHasOriginatingAuxiliaryControlIndex:(char)arg1 ;
-(char)hasOriginatingAuxiliaryControlIndex;
-(int)pinType;
-(GEOPlace *)originalPlace;
-(GEORPMapLocation *)mapLocation;
-(NSString *)tileStateLog;
-(NSMutableArray *)directionsRequests;
-(NSMutableArray *)directionsResponses;
-(NSString *)lastSearchString;
-(NSMutableArray *)auxiliaryControls;
-(unsigned long long)originatingAuxiliaryControlIndex;
-(NSMutableArray *)visibleTileSets;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

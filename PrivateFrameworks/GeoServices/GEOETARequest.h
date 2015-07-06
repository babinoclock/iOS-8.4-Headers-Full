/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:47 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <GeoServices/NSCopying.h>

@class GEOAutomobileOptions, NSMutableArray, GEOWaypoint, GEOWaypointTyped, GEOWalkingOptions;

@interface GEOETARequest : PBRequest <NSCopying> {

	SCD_Struct_GE2 _sessionID;
	SCD_Struct_GE83 _timepoint;
	GEOAutomobileOptions* _automobileOptions;
	NSMutableArray* _destinationWaypointTypeds;
	NSMutableArray* _destinations;
	unsigned _distanceLimitMeters;
	GEOWaypoint* _origin;
	GEOWaypointTyped* _originWaypointTyped;
	NSMutableArray* _serviceTags;
	int _transportType;
	GEOWalkingOptions* _walkingOptions;
	char _allowPartialResults;
	char _includeDistance;
	char _includeHistoricTravelTime;
	SCD_Struct_GE59 _has;

}

@property (assign,nonatomic) char hasTransportType; 
@property (assign,nonatomic) int transportType;                                       //@synthesize transportType=_transportType - In the implementation block
@property (assign,nonatomic) char hasTimepoint; 
@property (assign,nonatomic) SCD_Struct_GE84 timepoint;                               //@synthesize timepoint=_timepoint - In the implementation block
@property (nonatomic,readonly) char hasOrigin; 
@property (nonatomic,retain) GEOWaypoint * origin;                                    //@synthesize origin=_origin - In the implementation block
@property (nonatomic,retain) NSMutableArray * destinations;                           //@synthesize destinations=_destinations - In the implementation block
@property (assign,nonatomic) char hasIncludeHistoricTravelTime; 
@property (assign,nonatomic) char includeHistoricTravelTime;                          //@synthesize includeHistoricTravelTime=_includeHistoricTravelTime - In the implementation block
@property (assign,nonatomic) char hasAllowPartialResults; 
@property (assign,nonatomic) char allowPartialResults;                                //@synthesize allowPartialResults=_allowPartialResults - In the implementation block
@property (assign,nonatomic) char hasIncludeDistance; 
@property (assign,nonatomic) char includeDistance;                                    //@synthesize includeDistance=_includeDistance - In the implementation block
@property (assign,nonatomic) char hasSessionID; 
@property (assign,nonatomic) SCD_Struct_GE2 sessionID;                                //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) char hasDistanceLimitMeters; 
@property (assign,nonatomic) unsigned distanceLimitMeters;                            //@synthesize distanceLimitMeters=_distanceLimitMeters - In the implementation block
@property (nonatomic,readonly) char hasOriginWaypointTyped; 
@property (nonatomic,retain) GEOWaypointTyped * originWaypointTyped;                  //@synthesize originWaypointTyped=_originWaypointTyped - In the implementation block
@property (nonatomic,retain) NSMutableArray * destinationWaypointTypeds;              //@synthesize destinationWaypointTypeds=_destinationWaypointTypeds - In the implementation block
@property (nonatomic,readonly) char hasAutomobileOptions; 
@property (nonatomic,retain) GEOAutomobileOptions * automobileOptions;                //@synthesize automobileOptions=_automobileOptions - In the implementation block
@property (nonatomic,readonly) char hasWalkingOptions; 
@property (nonatomic,retain) GEOWalkingOptions * walkingOptions;                      //@synthesize walkingOptions=_walkingOptions - In the implementation block
@property (nonatomic,retain) NSMutableArray * serviceTags;                            //@synthesize serviceTags=_serviceTags - In the implementation block
-(void)setDestinations:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEOWaypoint *)origin;
-(void)setOrigin:(GEOWaypoint *)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(SCD_Struct_GE2)sessionID;
-(void)setSessionID:(SCD_Struct_GE2)arg1 ;
-(void)setHasSessionID:(char)arg1 ;
-(char)hasSessionID;
-(char)hasOrigin;
-(void)setTransportType:(int)arg1 ;
-(char)hasTransportType;
-(void)setServiceTags:(NSMutableArray *)arg1 ;
-(void)addServiceTag:(id)arg1 ;
-(unsigned)serviceTagsCount;
-(void)clearServiceTags;
-(id)serviceTagAtIndex:(unsigned)arg1 ;
-(NSMutableArray *)serviceTags;
-(void)setHasTransportType:(char)arg1 ;
-(void)setOriginWaypointTyped:(GEOWaypointTyped *)arg1 ;
-(void)setDestinationWaypointTypeds:(NSMutableArray *)arg1 ;
-(void)setAutomobileOptions:(GEOAutomobileOptions *)arg1 ;
-(void)setWalkingOptions:(GEOWalkingOptions *)arg1 ;
-(void)addDestination:(id)arg1 ;
-(void)addDestinationWaypointTyped:(id)arg1 ;
-(unsigned)destinationsCount;
-(void)clearDestinations;
-(id)destinationAtIndex:(unsigned)arg1 ;
-(unsigned)destinationWaypointTypedsCount;
-(void)clearDestinationWaypointTypeds;
-(id)destinationWaypointTypedAtIndex:(unsigned)arg1 ;
-(void)setTimepoint:(SCD_Struct_GE84)arg1 ;
-(void)setHasTimepoint:(char)arg1 ;
-(char)hasTimepoint;
-(void)setIncludeHistoricTravelTime:(char)arg1 ;
-(void)setHasIncludeHistoricTravelTime:(char)arg1 ;
-(char)hasIncludeHistoricTravelTime;
-(void)setAllowPartialResults:(char)arg1 ;
-(void)setHasAllowPartialResults:(char)arg1 ;
-(char)hasAllowPartialResults;
-(void)setIncludeDistance:(char)arg1 ;
-(void)setHasIncludeDistance:(char)arg1 ;
-(char)hasIncludeDistance;
-(unsigned)distanceLimitMeters;
-(void)setDistanceLimitMeters:(unsigned)arg1 ;
-(void)setHasDistanceLimitMeters:(char)arg1 ;
-(char)hasDistanceLimitMeters;
-(char)hasOriginWaypointTyped;
-(char)hasAutomobileOptions;
-(char)hasWalkingOptions;
-(SCD_Struct_GE84)timepoint;
-(NSMutableArray *)destinations;
-(char)includeHistoricTravelTime;
-(char)allowPartialResults;
-(char)includeDistance;
-(GEOWaypointTyped *)originWaypointTyped;
-(NSMutableArray *)destinationWaypointTypeds;
-(GEOAutomobileOptions *)automobileOptions;
-(GEOWalkingOptions *)walkingOptions;
-(id)initWithQuickETARequest:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)transportType;
@end


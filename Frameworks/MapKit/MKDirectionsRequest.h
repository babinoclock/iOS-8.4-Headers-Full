/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:32 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/NSCopying.h>

@class MKMapItem, NSDate, NSArray;

@interface MKDirectionsRequest : NSObject <NSCopying> {

	MKMapItem* _source;
	MKMapItem* _destination;
	unsigned _transportType;
	char _requestsAlternateRoutes;
	char _includeTravelTimes;
	char _includeTrafficIncidents;
	char _includeZilchRoutePoints;
	char _includeBasicRoutePoints;
	char _includeEntryPoints;
	char _includeDistanceInETA;
	NSDate* _departureDate;
	NSDate* _arrivalDate;
	NSArray* _additionalTransportTypesRequested;

}

@property (nonatomic,retain) MKMapItem * source;                                                                                                                               //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) MKMapItem * destination;                                                                                                                          //@synthesize destination=_destination - In the implementation block
@property (assign,setter=_setIncludeDistanceInETA:,getter=_includeDistanceInETA,nonatomic) char includeDistanceInETA;                                                          //@synthesize includeDistanceInETA=_includeDistanceInETA - In the implementation block
@property (setter=_setAdditionalTransportTypesRequested:,getter=_additionalTransportTypesRequested,nonatomic,retain) NSArray * additionalTransportTypesRequested;              //@synthesize additionalTransportTypesRequested=_additionalTransportTypesRequested - In the implementation block
@property (nonatomic,readonly) char _includeTypicalRouteDuration; 
@property (nonatomic,readonly) char _includeTravelTimes;                                                                                                                       //@synthesize includeTravelTimes=_includeTravelTimes - In the implementation block
@property (nonatomic,readonly) char _includeTrafficIncidents;                                                                                                                  //@synthesize includeTrafficIncidents=_includeTrafficIncidents - In the implementation block
@property (nonatomic,readonly) char _includeZilchRoutePoints;                                                                                                                  //@synthesize includeZilchRoutePoints=_includeZilchRoutePoints - In the implementation block
@property (nonatomic,readonly) char _includeBasicRoutePoints;                                                                                                                  //@synthesize includeBasicRoutePoints=_includeBasicRoutePoints - In the implementation block
@property (nonatomic,readonly) char _includeEntryPoints;                                                                                                                       //@synthesize includeEntryPoints=_includeEntryPoints - In the implementation block
+(char)isDirectionsRequestURL:(id)arg1 ;
-(void)setArrivalDate:(id)arg1 ;
-(char)_includeBasicRoutePoints;
-(char)_includeZilchRoutePoints;
-(unsigned)_transportType;
-(char)_includeTravelTimes;
-(char)_includeTrafficIncidents;
-(char)requestsAlternateRoutes;
-(id)_arrivalDate;
-(id)_departureDate;
-(char)_includeDistanceInETA;
-(id)_additionalTransportTypesRequested;
-(void)setRequestsAlternateRoutes:(char)arg1 ;
-(void)setDepartureDate:(id)arg1 ;
-(id)_mapkit_initWithSource:(id)arg1 destination:(id)arg2 transportType:(unsigned)arg3 departureDate:(id)arg4 includeTravelTimes:(char)arg5 includeTrafficIncidents:(char)arg6 includeEntryPoints:(char)arg7 includeRoutePoints:(char)arg8 ;
-(id)_mapkit_initWithSource:(id)arg1 destination:(id)arg2 transportType:(unsigned)arg3 departureDate:(id)arg4 ;
-(id)_mapkit_initWithSource:(id)arg1 destination:(id)arg2 transportType:(unsigned)arg3 arrivalDate:(id)arg4 ;
-(char)_includeTypicalRouteDuration;
-(id)_mapkit_initWithSource:(id)arg1 destination:(id)arg2 transportType:(unsigned)arg3 arrivalDate:(id)arg4 includeTravelTimes:(char)arg5 includeTrafficIncidents:(char)arg6 includeEntryPoints:(char)arg7 includeRoutePoints:(char)arg8 ;
-(id)_mapkit_initWithAllTransportTypesSource:(id)arg1 destination:(id)arg2 departureDate:(id)arg3 ;
-(id)_mapkit_initWithAllTransportTypesSource:(id)arg1 destination:(id)arg2 arrivalDate:(id)arg3 ;
-(char)_includeEntryPoints;
-(void)_setIncludeDistanceInETA:(char)arg1 ;
-(void)_setAdditionalTransportTypesRequested:(id)arg1 ;
-(char)writeToURL:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(MKMapItem *)source;
-(void)setSource:(MKMapItem *)arg1 ;
-(MKMapItem *)destination;
-(void)setDestination:(MKMapItem *)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(void)setTransportType:(unsigned)arg1 ;
-(id)departureDate;
-(id)arrivalDate;
-(unsigned)transportType;
@end


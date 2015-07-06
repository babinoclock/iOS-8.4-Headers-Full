/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:57 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <GeoServices/NSCopying.h>

@class NSMutableArray;

@interface GEOBatchRevGeocodeRequest : PBRequest <NSCopying> {

	SCD_Struct_GE54* _additionalPlaceTypes;
	NSMutableArray* _locations;
	NSMutableArray* _serviceTags;
	char _splitIntoClusters;
	SCD_Struct_GE5 _has;

}

@property (assign,nonatomic) char hasSplitIntoClusters; 
@property (assign,nonatomic) char splitIntoClusters;                            //@synthesize splitIntoClusters=_splitIntoClusters - In the implementation block
@property (nonatomic,retain) NSMutableArray * locations;                        //@synthesize locations=_locations - In the implementation block
@property (nonatomic,readonly) unsigned additionalPlaceTypesCount; 
@property (nonatomic,readonly) int* additionalPlaceTypes; 
@property (nonatomic,retain) NSMutableArray * serviceTags;                      //@synthesize serviceTags=_serviceTags - In the implementation block
-(void)dealloc;
-(void)setLocations:(NSMutableArray *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)setServiceTags:(NSMutableArray *)arg1 ;
-(void)addServiceTag:(id)arg1 ;
-(unsigned)serviceTagsCount;
-(void)clearServiceTags;
-(id)serviceTagAtIndex:(unsigned)arg1 ;
-(NSMutableArray *)serviceTags;
-(unsigned)additionalPlaceTypesCount;
-(void)clearAdditionalPlaceTypes;
-(int)additionalPlaceTypeAtIndex:(unsigned)arg1 ;
-(void)addAdditionalPlaceType:(int)arg1 ;
-(int*)additionalPlaceTypes;
-(void)setAdditionalPlaceTypes:(int*)arg1 count:(unsigned)arg2 ;
-(unsigned)locationsCount;
-(id)locationAtIndex:(unsigned)arg1 ;
-(NSMutableArray *)locations;
-(void)addLocation:(id)arg1 ;
-(void)clearLocations;
-(char)splitIntoClusters;
-(void)setSplitIntoClusters:(char)arg1 ;
-(void)setHasSplitIntoClusters:(char)arg1 ;
-(char)hasSplitIntoClusters;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end


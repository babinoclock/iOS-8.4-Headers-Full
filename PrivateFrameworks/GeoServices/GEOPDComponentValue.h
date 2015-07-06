/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:57 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class GEOPDRoadAccessInfo, GEOPDAddress, GEOPDAmenities, GEOPDBounds, GEOPDBusinessClaim, GEOPDEntity, GEOPDETA, GEOPDFlyover, GEOPDHours, GEOPDPhoto, GEOPDPlaceInfo, GEOPDRating, GEOPDRawAttribute, GEOPDReview, GEOPDStyleAttributes;

@interface GEOPDComponentValue : PBCodable <NSCopying> {

	GEOPDRoadAccessInfo* _accessInfo;
	GEOPDAddress* _address;
	GEOPDAmenities* _amenities;
	GEOPDBounds* _bounds;
	GEOPDBusinessClaim* _businessClaim;
	GEOPDEntity* _entity;
	GEOPDETA* _eta;
	GEOPDFlyover* _flyover;
	GEOPDHours* _hours;
	GEOPDPhoto* _photo;
	GEOPDPlaceInfo* _placeInfo;
	GEOPDRating* _rating;
	GEOPDRawAttribute* _rawAttribute;
	GEOPDReview* _review;
	GEOPDStyleAttributes* _styleAttributes;

}

@property (nonatomic,readonly) char hasEntity; 
@property (nonatomic,retain) GEOPDEntity * entity;                                //@synthesize entity=_entity - In the implementation block
@property (nonatomic,readonly) char hasPlaceInfo; 
@property (nonatomic,retain) GEOPDPlaceInfo * placeInfo;                          //@synthesize placeInfo=_placeInfo - In the implementation block
@property (nonatomic,readonly) char hasAccessInfo; 
@property (nonatomic,retain) GEOPDRoadAccessInfo * accessInfo;                    //@synthesize accessInfo=_accessInfo - In the implementation block
@property (nonatomic,readonly) char hasBounds; 
@property (nonatomic,retain) GEOPDBounds * bounds;                                //@synthesize bounds=_bounds - In the implementation block
@property (nonatomic,readonly) char hasAddress; 
@property (nonatomic,retain) GEOPDAddress * address;                              //@synthesize address=_address - In the implementation block
@property (nonatomic,readonly) char hasRating; 
@property (nonatomic,retain) GEOPDRating * rating;                                //@synthesize rating=_rating - In the implementation block
@property (nonatomic,readonly) char hasReview; 
@property (nonatomic,retain) GEOPDReview * review;                                //@synthesize review=_review - In the implementation block
@property (nonatomic,readonly) char hasPhoto; 
@property (nonatomic,retain) GEOPDPhoto * photo;                                  //@synthesize photo=_photo - In the implementation block
@property (nonatomic,readonly) char hasHours; 
@property (nonatomic,retain) GEOPDHours * hours;                                  //@synthesize hours=_hours - In the implementation block
@property (nonatomic,readonly) char hasEta; 
@property (nonatomic,retain) GEOPDETA * eta;                                      //@synthesize eta=_eta - In the implementation block
@property (nonatomic,readonly) char hasFlyover; 
@property (nonatomic,retain) GEOPDFlyover * flyover;                              //@synthesize flyover=_flyover - In the implementation block
@property (nonatomic,readonly) char hasRawAttribute; 
@property (nonatomic,retain) GEOPDRawAttribute * rawAttribute;                    //@synthesize rawAttribute=_rawAttribute - In the implementation block
@property (nonatomic,readonly) char hasAmenities; 
@property (nonatomic,retain) GEOPDAmenities * amenities;                          //@synthesize amenities=_amenities - In the implementation block
@property (nonatomic,readonly) char hasStyleAttributes; 
@property (nonatomic,retain) GEOPDStyleAttributes * styleAttributes;              //@synthesize styleAttributes=_styleAttributes - In the implementation block
@property (nonatomic,readonly) char hasBusinessClaim; 
@property (nonatomic,retain) GEOPDBusinessClaim * businessClaim;                  //@synthesize businessClaim=_businessClaim - In the implementation block
-(GEOPDPhoto *)photo;
-(GEOPDAddress *)address;
-(void)dealloc;
-(GEOPDBounds *)bounds;
-(void)setBounds:(GEOPDBounds *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(char)hasBounds;
-(void)setAddress:(GEOPDAddress *)arg1 ;
-(char)hasAddress;
-(char)hasRating;
-(GEOPDRating *)rating;
-(GEOPDPlaceInfo *)placeInfo;
-(char)hasHours;
-(GEOPDHours *)hours;
-(char)hasReview;
-(GEOPDReview *)review;
-(char)hasPhoto;
-(GEOPDRoadAccessInfo *)accessInfo;
-(GEOPDFlyover *)flyover;
-(GEOPDAmenities *)amenities;
-(GEOPDBusinessClaim *)businessClaim;
-(void)setRating:(GEOPDRating *)arg1 ;
-(void)setStyleAttributes:(GEOPDStyleAttributes *)arg1 ;
-(void)setPlaceInfo:(GEOPDPlaceInfo *)arg1 ;
-(void)setAccessInfo:(GEOPDRoadAccessInfo *)arg1 ;
-(void)setReview:(GEOPDReview *)arg1 ;
-(void)setPhoto:(GEOPDPhoto *)arg1 ;
-(void)setHours:(GEOPDHours *)arg1 ;
-(void)setEta:(GEOPDETA *)arg1 ;
-(void)setFlyover:(GEOPDFlyover *)arg1 ;
-(void)setRawAttribute:(GEOPDRawAttribute *)arg1 ;
-(void)setAmenities:(GEOPDAmenities *)arg1 ;
-(void)setBusinessClaim:(GEOPDBusinessClaim *)arg1 ;
-(char)hasEntity;
-(char)hasPlaceInfo;
-(char)hasAccessInfo;
-(char)hasEta;
-(char)hasFlyover;
-(char)hasRawAttribute;
-(char)hasAmenities;
-(char)hasStyleAttributes;
-(char)hasBusinessClaim;
-(GEOPDRawAttribute *)rawAttribute;
-(void)setEntity:(GEOPDEntity *)arg1 ;
-(GEOPDEntity *)entity;
-(GEOPDETA *)eta;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(GEOPDStyleAttributes *)styleAttributes;
@end


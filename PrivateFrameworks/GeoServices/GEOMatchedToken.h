/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:55 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSString;

@interface GEOMatchedToken : PBCodable <NSCopying> {

	SCD_Struct_GE66* _geoIds;
	int _geoType;
	NSString* _matchedToken;
	SCD_Struct_GE5 _has;

}

@property (nonatomic,retain) NSString * matchedToken;                   //@synthesize matchedToken=_matchedToken - In the implementation block
@property (assign,nonatomic) char hasGeoType; 
@property (assign,nonatomic) int geoType;                               //@synthesize geoType=_geoType - In the implementation block
@property (nonatomic,readonly) unsigned geoIdsCount; 
@property (nonatomic,readonly) unsigned long long* geoIds; 
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)geoIdsCount;
-(void)clearGeoIds;
-(unsigned long long)geoIdAtIndex:(unsigned)arg1 ;
-(void)addGeoId:(unsigned long long)arg1 ;
-(unsigned long long*)geoIds;
-(void)setGeoIds:(unsigned long long*)arg1 count:(unsigned)arg2 ;
-(void)setMatchedToken:(NSString *)arg1 ;
-(void)setGeoType:(int)arg1 ;
-(void)setHasGeoType:(char)arg1 ;
-(char)hasGeoType;
-(NSString *)matchedToken;
-(int)geoType;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end


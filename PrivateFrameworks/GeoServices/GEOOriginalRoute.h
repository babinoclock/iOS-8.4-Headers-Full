/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:43 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSData;

@interface GEOOriginalRoute : PBCodable <NSCopying> {

	NSData* _originalDirectionsResponseID;
	int _originalRoutePurpose;
	NSData* _routeHandle;
	SCD_Struct_GE5 _has;

}

@property (assign,nonatomic) char hasOriginalRoutePurpose; 
@property (assign,nonatomic) int originalRoutePurpose;                            //@synthesize originalRoutePurpose=_originalRoutePurpose - In the implementation block
@property (nonatomic,readonly) char hasRouteHandle; 
@property (nonatomic,retain) NSData * routeHandle;                                //@synthesize routeHandle=_routeHandle - In the implementation block
@property (nonatomic,readonly) char hasOriginalDirectionsResponseID; 
@property (nonatomic,retain) NSData * originalDirectionsResponseID;               //@synthesize originalDirectionsResponseID=_originalDirectionsResponseID - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setRouteHandle:(NSData *)arg1 ;
-(void)setOriginalDirectionsResponseID:(NSData *)arg1 ;
-(void)setOriginalRoutePurpose:(int)arg1 ;
-(void)setHasOriginalRoutePurpose:(char)arg1 ;
-(char)hasOriginalRoutePurpose;
-(char)hasRouteHandle;
-(char)hasOriginalDirectionsResponseID;
-(int)originalRoutePurpose;
-(NSData *)routeHandle;
-(NSData *)originalDirectionsResponseID;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end


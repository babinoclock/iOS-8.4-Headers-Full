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

@interface GEOVPointOnRoad : PBCodable <NSCopying> {

	int _featureIndex;
	int _vertexIndex;
	SCD_Struct_GE5 _has;

}

@property (assign,nonatomic) int featureIndex;                 //@synthesize featureIndex=_featureIndex - In the implementation block
@property (assign,nonatomic) char hasVertexIndex; 
@property (assign,nonatomic) int vertexIndex;                  //@synthesize vertexIndex=_vertexIndex - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setVertexIndex:(int)arg1 ;
-(void)setHasVertexIndex:(char)arg1 ;
-(char)hasVertexIndex;
-(int)vertexIndex;
-(void)setFeatureIndex:(int)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)featureIndex;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:56 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@interface GEORPProblemOptInResponse : PBCodable <NSCopying> {

	int _statusCode;
	SCD_Struct_GE5 _has;

}

@property (assign,nonatomic) char hasStatusCode; 
@property (assign,nonatomic) int statusCode;                  //@synthesize statusCode=_statusCode - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)statusCode;
-(void)setStatusCode:(int)arg1 ;
-(void)setHasStatusCode:(char)arg1 ;
-(char)hasStatusCode;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end


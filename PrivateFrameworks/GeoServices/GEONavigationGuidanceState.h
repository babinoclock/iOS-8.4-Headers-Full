/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:54 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@interface GEONavigationGuidanceState : PBCodable <NSCopying> {

	int _navigationState;
	int _trackedTransportType;
	SCD_Struct_GE6 _has;

}

@property (assign,nonatomic) char hasTrackedTransportType; 
@property (assign,nonatomic) int trackedTransportType;                  //@synthesize trackedTransportType=_trackedTransportType - In the implementation block
@property (assign,nonatomic) char hasNavigationState; 
@property (assign,nonatomic) int navigationState;                       //@synthesize navigationState=_navigationState - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)navigationState;
-(void)setNavigationState:(int)arg1 ;
-(int)trackedTransportType;
-(void)setTrackedTransportType:(int)arg1 ;
-(id)initWithTransportType:(int)arg1 ;
-(void)setHasTrackedTransportType:(char)arg1 ;
-(char)hasTrackedTransportType;
-(void)setHasNavigationState:(char)arg1 ;
-(char)hasNavigationState;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end


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

@class GEONameInfo, NSMutableArray;

@interface GEOSubstep : PBCodable <NSCopying> {

	int _maneuverType;
	GEONameInfo* _name;
	NSMutableArray* _signposts;
	int _zilchIndex;
	SCD_Struct_GE6 _has;

}

@property (assign,nonatomic) char hasManeuverType; 
@property (assign,nonatomic) int maneuverType;                        //@synthesize maneuverType=_maneuverType - In the implementation block
@property (assign,nonatomic) char hasZilchIndex; 
@property (assign,nonatomic) int zilchIndex;                          //@synthesize zilchIndex=_zilchIndex - In the implementation block
@property (nonatomic,readonly) char hasName; 
@property (nonatomic,retain) GEONameInfo * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSMutableArray * signposts;              //@synthesize signposts=_signposts - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setName:(GEONameInfo *)arg1 ;
-(GEONameInfo *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setSignposts:(NSMutableArray *)arg1 ;
-(void)addSignpost:(id)arg1 ;
-(unsigned)signpostsCount;
-(void)clearSignposts;
-(id)signpostAtIndex:(unsigned)arg1 ;
-(void)setManeuverType:(int)arg1 ;
-(void)setHasManeuverType:(char)arg1 ;
-(char)hasManeuverType;
-(int)maneuverType;
-(NSMutableArray *)signposts;
-(int)zilchIndex;
-(void)setZilchIndex:(int)arg1 ;
-(void)setHasZilchIndex:(char)arg1 ;
-(char)hasZilchIndex;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)hasName;
@end


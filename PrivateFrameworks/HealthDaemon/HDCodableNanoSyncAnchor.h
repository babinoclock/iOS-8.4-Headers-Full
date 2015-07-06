/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:59 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <HealthDaemon/NSCopying.h>

@interface HDCodableNanoSyncAnchor : PBCodable <NSCopying> {

	long long _anchor;
	int _objectType;
	SCD_Struct_HD16 _has;

}

@property (assign,nonatomic) char hasObjectType; 
@property (assign,nonatomic) int objectType;                  //@synthesize objectType=_objectType - In the implementation block
@property (assign,nonatomic) char hasAnchor; 
@property (assign,nonatomic) long long anchor;                //@synthesize anchor=_anchor - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(long long)anchor;
-(void)setAnchor:(long long)arg1 ;
-(id)nanoSyncDescription;
-(void)setObjectType:(int)arg1 ;
-(void)setHasObjectType:(char)arg1 ;
-(char)hasObjectType;
-(int)objectType;
-(char)hasAnchor;
-(void)setHasAnchor:(char)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:47 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PBBridgeSupport/PBBridgeSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <PBBridgeSupport/NSCopying.h>

@interface PBBProtoPushControllerType : PBCodable <NSCopying> {

	double _intendedFireDate;
	unsigned _controllerType;
	SCD_Struct_PB1 _has;

}

@property (assign,nonatomic) unsigned controllerType;               //@synthesize controllerType=_controllerType - In the implementation block
@property (assign,nonatomic) char hasIntendedFireDate; 
@property (assign,nonatomic) double intendedFireDate;               //@synthesize intendedFireDate=_intendedFireDate - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setIntendedFireDate:(double)arg1 ;
-(void)setHasIntendedFireDate:(char)arg1 ;
-(char)hasIntendedFireDate;
-(unsigned)controllerType;
-(void)setControllerType:(unsigned)arg1 ;
-(double)intendedFireDate;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end


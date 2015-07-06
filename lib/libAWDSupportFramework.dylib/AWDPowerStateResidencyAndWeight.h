/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:49 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libAWDSupportFramework.dylib/NSCopying.h>

@interface AWDPowerStateResidencyAndWeight : PBCodable <NSCopying> {

	unsigned _residency;
	unsigned _weight;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) char hasResidency; 
@property (assign,nonatomic) unsigned residency;              //@synthesize residency=_residency - In the implementation block
@property (assign,nonatomic) char hasWeight; 
@property (assign,nonatomic) unsigned weight;                 //@synthesize weight=_weight - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)weight;
-(void)setWeight:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setResidency:(unsigned)arg1 ;
-(void)setHasResidency:(char)arg1 ;
-(char)hasResidency;
-(void)setHasWeight:(char)arg1 ;
-(char)hasWeight;
-(unsigned)residency;
@end


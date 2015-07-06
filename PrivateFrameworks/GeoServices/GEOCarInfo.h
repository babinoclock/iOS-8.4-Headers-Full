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

@class NSString;

@interface GEOCarInfo : PBCodable <NSCopying> {

	SCD_Struct_GE194 _screenResolution;
	int _interactionModel;
	NSString* _manufacturer;
	NSString* _model;
	SCD_Struct_GE6 _has;

}

@property (assign,nonatomic) char hasInteractionModel; 
@property (assign,nonatomic) int interactionModel;                           //@synthesize interactionModel=_interactionModel - In the implementation block
@property (nonatomic,readonly) char hasManufacturer; 
@property (nonatomic,retain) NSString * manufacturer;                        //@synthesize manufacturer=_manufacturer - In the implementation block
@property (nonatomic,readonly) char hasModel; 
@property (nonatomic,retain) NSString * model;                               //@synthesize model=_model - In the implementation block
@property (assign,nonatomic) char hasScreenResolution; 
@property (assign,nonatomic) SCD_Struct_GE195 screenResolution;              //@synthesize screenResolution=_screenResolution - In the implementation block
+(id)carInfoWithTraits:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)interactionModel;
-(NSString *)model;
-(id)dictionaryRepresentation;
-(void)setModel:(NSString *)arg1 ;
-(id)initWithTraits:(id)arg1 ;
-(NSString *)manufacturer;
-(void)setManufacturer:(NSString *)arg1 ;
-(void)setInteractionModel:(int)arg1 ;
-(void)setScreenResolution:(SCD_Struct_GE195)arg1 ;
-(void)setHasInteractionModel:(char)arg1 ;
-(char)hasInteractionModel;
-(char)hasManufacturer;
-(char)hasModel;
-(void)setHasScreenResolution:(char)arg1 ;
-(char)hasScreenResolution;
-(SCD_Struct_GE195)screenResolution;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

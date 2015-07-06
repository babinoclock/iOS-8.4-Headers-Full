/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:43 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/GEOURLSerializable.h>
#import <GeoServices/NSCopying.h>

@class NSMutableArray, GEOStructuredAddress, NSString;

@interface GEOAddress : PBCodable <GEOURLSerializable, NSCopying> {

	NSMutableArray* _formattedAddressLines;
	int _formattedAddressType;
	GEOStructuredAddress* _structuredAddress;
	SCD_Struct_GE5 _has;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSMutableArray * formattedAddressLines;                //@synthesize formattedAddressLines=_formattedAddressLines - In the implementation block
@property (nonatomic,readonly) char hasStructuredAddress; 
@property (nonatomic,retain) GEOStructuredAddress * structuredAddress;              //@synthesize structuredAddress=_structuredAddress - In the implementation block
@property (assign,nonatomic) char hasFormattedAddressType; 
@property (assign,nonatomic) int formattedAddressType;                              //@synthesize formattedAddressType=_formattedAddressType - In the implementation block
+(id)geoAddressForPlaceData:(id)arg1 ;
-(id)singleLineAddress;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setFormattedAddressLines:(NSMutableArray *)arg1 ;
-(NSMutableArray *)formattedAddressLines;
-(id)initWithAddressString:(id)arg1 ;
-(id)addressDictionary;
-(id)bestName;
-(void)addFormattedAddressLine:(id)arg1 ;
-(unsigned)formattedAddressLinesCount;
-(void)clearFormattedAddressLines;
-(id)formattedAddressLineAtIndex:(unsigned)arg1 ;
-(int)formattedAddressType;
-(void)setFormattedAddressType:(int)arg1 ;
-(void)setHasFormattedAddressType:(char)arg1 ;
-(char)hasFormattedAddressType;
-(id)initWithUrlRepresentation:(id)arg1 ;
-(id)urlRepresentation;
-(char)_isEquivalentURLRepresentationTo:(id)arg1 ;
-(void)setStructuredAddress:(GEOStructuredAddress *)arg1 ;
-(char)hasStructuredAddress;
-(GEOStructuredAddress *)structuredAddress;
-(id)initWithAddressDictionary:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end


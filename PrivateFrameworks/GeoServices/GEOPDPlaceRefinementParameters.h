/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:55 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class GEOStructuredAddress, NSMutableArray, GEOLatLng, NSString;

@interface GEOPDPlaceRefinementParameters : PBCodable <NSCopying> {

	unsigned long long _muid;
	GEOStructuredAddress* _addressHint;
	NSMutableArray* _formattedAddressLineHints;
	GEOLatLng* _locationHint;
	NSString* _placeNameHint;
	int _placeTypeHint;
	int _resultProviderId;
	SCD_Struct_GE4 _has;

}

@property (assign,nonatomic) char hasResultProviderId; 
@property (assign,nonatomic) int resultProviderId;                                    //@synthesize resultProviderId=_resultProviderId - In the implementation block
@property (assign,nonatomic) char hasMuid; 
@property (assign,nonatomic) unsigned long long muid;                                 //@synthesize muid=_muid - In the implementation block
@property (nonatomic,readonly) char hasLocationHint; 
@property (nonatomic,retain) GEOLatLng * locationHint;                                //@synthesize locationHint=_locationHint - In the implementation block
@property (nonatomic,readonly) char hasAddressHint; 
@property (nonatomic,retain) GEOStructuredAddress * addressHint;                      //@synthesize addressHint=_addressHint - In the implementation block
@property (nonatomic,readonly) char hasPlaceNameHint; 
@property (nonatomic,retain) NSString * placeNameHint;                                //@synthesize placeNameHint=_placeNameHint - In the implementation block
@property (nonatomic,retain) NSMutableArray * formattedAddressLineHints;              //@synthesize formattedAddressLineHints=_formattedAddressLineHints - In the implementation block
@property (assign,nonatomic) char hasPlaceTypeHint; 
@property (assign,nonatomic) int placeTypeHint;                                       //@synthesize placeTypeHint=_placeTypeHint - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)muid;
-(void)setResultProviderId:(int)arg1 ;
-(void)setHasResultProviderId:(char)arg1 ;
-(char)hasResultProviderId;
-(int)resultProviderId;
-(void)setLocationHint:(GEOLatLng *)arg1 ;
-(void)setAddressHint:(GEOStructuredAddress *)arg1 ;
-(void)setPlaceNameHint:(NSString *)arg1 ;
-(void)setFormattedAddressLineHints:(NSMutableArray *)arg1 ;
-(void)addFormattedAddressLineHint:(id)arg1 ;
-(unsigned)formattedAddressLineHintsCount;
-(void)clearFormattedAddressLineHints;
-(id)formattedAddressLineHintAtIndex:(unsigned)arg1 ;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)setHasMuid:(char)arg1 ;
-(char)hasMuid;
-(char)hasLocationHint;
-(char)hasAddressHint;
-(char)hasPlaceNameHint;
-(void)setPlaceTypeHint:(int)arg1 ;
-(void)setHasPlaceTypeHint:(char)arg1 ;
-(char)hasPlaceTypeHint;
-(GEOLatLng *)locationHint;
-(GEOStructuredAddress *)addressHint;
-(NSString *)placeNameHint;
-(NSMutableArray *)formattedAddressLineHints;
-(int)placeTypeHint;
-(id)initWithMuid:(unsigned long long)arg1 locationHint:(SCD_Struct_GE15)arg2 placeNameHint:(id)arg3 resultProviderId:(int)arg4 ;
-(id)initWithMapItemToRefine:(id)arg1 ;
-(id)initWithCoordinateHint:(SCD_Struct_GE15)arg1 addressHint:(id)arg2 placeNameHint:(id)arg3 ;
-(id)initWithSearchURLQuery:(id)arg1 coordinate:(SCD_Struct_GE15)arg2 muid:(unsigned long long)arg3 resultProviderId:(int)arg4 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end


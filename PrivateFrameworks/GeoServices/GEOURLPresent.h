/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:47 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSMutableArray, GEOURLOptions;

@interface GEOURLPresent : PBCodable <NSCopying> {

	NSMutableArray* _items;
	GEOURLOptions* _options;

}

@property (nonatomic,retain) NSMutableArray * items;               //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) char hasOptions; 
@property (nonatomic,retain) GEOURLOptions * options;              //@synthesize options=_options - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableArray *)items;
-(void)setItems:(NSMutableArray *)arg1 ;
-(void)addItem:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setOptions:(GEOURLOptions *)arg1 ;
-(GEOURLOptions *)options;
-(unsigned)itemsCount;
-(id)itemAtIndex:(unsigned)arg1 ;
-(id)initWithOptions:(id)arg1 ;
-(id)initWithDirectionsOptions:(id)arg1 ;
-(char)hasOptions;
-(void)clearItems;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

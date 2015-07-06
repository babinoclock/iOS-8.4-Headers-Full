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

@class NSMutableArray;

@interface GEORegionalResourceTile : PBCodable <NSCopying> {

	NSMutableArray* _attributions;
	NSMutableArray* _childrens;
	NSMutableArray* _iconChecksums;
	NSMutableArray* _icons;
	unsigned _x;
	unsigned _y;
	unsigned _z;

}

@property (assign,x,nonatomic) unsigned x;                                //@synthesize x=_x - In the implementation block
@property (assign,y,nonatomic) unsigned y;                                //@synthesize y=_y - In the implementation block
@property (assign,z,nonatomic) unsigned z;                                //@synthesize z=_z - In the implementation block
@property (nonatomic,retain) NSMutableArray * childrens;                  //@synthesize childrens=_childrens - In the implementation block
@property (nonatomic,retain) NSMutableArray * icons;                      //@synthesize icons=_icons - In the implementation block
@property (nonatomic,retain) NSMutableArray * attributions;               //@synthesize attributions=_attributions - In the implementation block
@property (nonatomic,retain) NSMutableArray * iconChecksums;              //@synthesize iconChecksums=_iconChecksums - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableArray *)icons;
-(id)dictionaryRepresentation;
-(unsigned)x;
-(void)setX:(unsigned)arg1 ;
-(unsigned)y;
-(void)setY:(unsigned)arg1 ;
-(unsigned)z;
-(void)setZ:(unsigned)arg1 ;
-(void)setIcons:(NSMutableArray *)arg1 ;
-(void)addAttribution:(id)arg1 ;
-(void)clearAttributions;
-(id)attributionAtIndex:(unsigned)arg1 ;
-(void)setIconChecksums:(NSMutableArray *)arg1 ;
-(void)addIcon:(id)arg1 ;
-(void)addIconChecksum:(id)arg1 ;
-(id)iconAtIndex:(unsigned)arg1 ;
-(unsigned)iconChecksumsCount;
-(void)clearIconChecksums;
-(id)iconChecksumAtIndex:(unsigned)arg1 ;
-(NSMutableArray *)iconChecksums;
-(char)containsTileKey:(const GEOTileKey*)arg1 ;
-(NSMutableArray *)childrens;
-(unsigned)childrensCount;
-(void)addChildren:(id)arg1 ;
-(void)setChildrens:(NSMutableArray *)arg1 ;
-(void)clearChildrens;
-(id)childrenAtIndex:(unsigned)arg1 ;
-(NSMutableArray *)attributions;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)iconsCount;
-(void)clearIcons;
-(unsigned)attributionsCount;
-(void)setAttributions:(NSMutableArray *)arg1 ;
@end


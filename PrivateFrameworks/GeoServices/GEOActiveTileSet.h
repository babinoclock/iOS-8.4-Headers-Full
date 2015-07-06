/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:49 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSString, NSMutableArray;

@interface GEOActiveTileSet : PBCodable <NSCopying> {

	SCD_Struct_GE72* _availableTiles;
	unsigned _availableTilesCount;
	unsigned _availableTilesSpace;
	NSString* _baseURL;
	NSString* _localizationURL;
	NSString* _multiTileURL;
	int _scale;
	NSMutableArray* _sentinelTiles;
	int _size;
	int _style;
	NSMutableArray* _supportedLanguages;
	unsigned _timeToLiveSeconds;
	int _updateBehavior;
	unsigned _version;
	char _multiTileURLUsesStatusCodes;
	SCD_Struct_GE4 _has;

}

@property (nonatomic,readonly) char hasBaseURL; 
@property (nonatomic,retain) NSString * baseURL;                               //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,readonly) char hasMultiTileURL; 
@property (nonatomic,retain) NSString * multiTileURL;                          //@synthesize multiTileURL=_multiTileURL - In the implementation block
@property (assign,nonatomic) int style;                                        //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) int scale;                                        //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) int size;                                         //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) unsigned version;                                 //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) char hasTimeToLiveSeconds; 
@property (assign,nonatomic) unsigned timeToLiveSeconds;                       //@synthesize timeToLiveSeconds=_timeToLiveSeconds - In the implementation block
@property (nonatomic,readonly) unsigned availableTilesCount; 
@property (nonatomic,readonly) SCD_Struct_GE72* availableTiles; 
@property (nonatomic,retain) NSMutableArray * sentinelTiles;                   //@synthesize sentinelTiles=_sentinelTiles - In the implementation block
@property (nonatomic,readonly) char hasLocalizationURL; 
@property (nonatomic,retain) NSString * localizationURL;                       //@synthesize localizationURL=_localizationURL - In the implementation block
@property (nonatomic,retain) NSMutableArray * supportedLanguages;              //@synthesize supportedLanguages=_supportedLanguages - In the implementation block
@property (assign,nonatomic) char hasMultiTileURLUsesStatusCodes; 
@property (assign,nonatomic) char multiTileURLUsesStatusCodes;                 //@synthesize multiTileURLUsesStatusCodes=_multiTileURLUsesStatusCodes - In the implementation block
@property (assign,nonatomic) char hasUpdateBehavior; 
@property (assign,nonatomic) int updateBehavior;                               //@synthesize updateBehavior=_updateBehavior - In the implementation block
-(void)dealloc;
-(int)size;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(int)scale;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)style;
-(void)setSize:(int)arg1 ;
-(void)setScale:(int)arg1 ;
-(void)setStyle:(int)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)baseURL;
-(void)setVersion:(unsigned)arg1 ;
-(unsigned)version;
-(void)setBaseURL:(NSString *)arg1 ;
-(void)setMultiTileURL:(NSString *)arg1 ;
-(void)setLocalizationURL:(NSString *)arg1 ;
-(void)setSupportedLanguages:(NSMutableArray *)arg1 ;
-(void)addSupportedLanguage:(id)arg1 ;
-(unsigned)supportedLanguagesCount;
-(void)clearSupportedLanguages;
-(id)supportedLanguageAtIndex:(unsigned)arg1 ;
-(char)hasBaseURL;
-(char)hasMultiTileURL;
-(char)hasLocalizationURL;
-(void)setMultiTileURLUsesStatusCodes:(char)arg1 ;
-(void)setHasMultiTileURLUsesStatusCodes:(char)arg1 ;
-(char)hasMultiTileURLUsesStatusCodes;
-(int)updateBehavior;
-(void)setUpdateBehavior:(int)arg1 ;
-(void)setHasUpdateBehavior:(char)arg1 ;
-(char)hasUpdateBehavior;
-(NSString *)multiTileURL;
-(NSString *)localizationURL;
-(NSMutableArray *)supportedLanguages;
-(char)multiTileURLUsesStatusCodes;
-(void)clearAvailableTiles;
-(unsigned)availableTilesCount;
-(SCD_Struct_GE72)availableTilesAtIndex:(unsigned)arg1 ;
-(void)addAvailableTiles:(SCD_Struct_GE72)arg1 ;
-(SCD_Struct_GE72*)availableTiles;
-(void)setAvailableTiles:(SCD_Struct_GE72*)arg1 count:(unsigned)arg2 ;
-(void)setTimeToLiveSeconds:(unsigned)arg1 ;
-(void)setHasTimeToLiveSeconds:(char)arg1 ;
-(char)hasTimeToLiveSeconds;
-(id)_bestLanguageWithOverrideLocale:(id)arg1 ;
-(void)_resetBestLanguage;
-(NSMutableArray *)sentinelTiles;
-(void)addSentinelTile:(id)arg1 ;
-(void)setSentinelTiles:(NSMutableArray *)arg1 ;
-(unsigned)sentinelTilesCount;
-(void)clearSentinelTiles;
-(id)sentinelTileAtIndex:(unsigned)arg1 ;
-(char)isAvailableForTileKey:(const GEOTileKey*)arg1 ;
-(unsigned)maximumZoomLevelInRect:(SCD_Struct_GE55)arg1 ;
-(char)isEquivalentTileSet:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dataForGenericTileType:(int)arg1 tileGroupIdentifier:(unsigned)arg2 ;
-(unsigned)minimumZoomLevelInRect:(SCD_Struct_GE55)arg1 ;
-(unsigned)timeToLiveSeconds;
-(unsigned)largestZoomLevelLEQ:(unsigned)arg1 inRect:(SCD_Struct_GE55)arg2 ;
@end


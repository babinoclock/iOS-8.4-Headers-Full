/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:54 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapRequest.h>

@class GEOMapAccess;

@interface GEOMapTileFinder : GEOMapRequest {

	unsigned _zoomLevel;
	int _tileSize;
	int _tileScale;
	int _tileStyle;
	SCD_Struct_GE15 _center;
	double _radius;
	/*^block*/id _tileHandler;
	char _isCanceling;

}

@property (nonatomic,readonly) unsigned zoomLevel;              //@synthesize zoomLevel=_zoomLevel - In the implementation block
@property (nonatomic,readonly) int tileSize;                    //@synthesize tileSize=_tileSize - In the implementation block
@property (nonatomic,readonly) int tileScale;                   //@synthesize tileScale=_tileScale - In the implementation block
@property (nonatomic,readonly) int tileStyle;                   //@synthesize tileStyle=_tileStyle - In the implementation block
@property (nonatomic,copy) id tileHandler;                      //@synthesize tileHandler=_tileHandler - In the implementation block
@property (nonatomic,readonly) GEOMapAccess * map; 
+(char)supportsRealisticMap;
+(id)realisticTileFinderForMap:(id)arg1 center:(SCD_Struct_GE15)arg2 radius:(double)arg3 ;
-(void)cancel;
-(void)dealloc;
-(int)tileSize;
-(void)findTilesAdjacentToTile:(const GEOTileKey*)arg1 containingPoint:(const Matrix<float, 2, 1>*)arg2 tileHandler:(/*^block*/id)arg3 ;
-(void)findTiles:(/*^block*/id)arg1 ;
-(id)_initWithMap:(id)arg1 zoomLevel:(unsigned)arg2 tileSize:(int)arg3 tileScale:(int)arg4 tileStyle:(int)arg5 center:(SCD_Struct_GE15)arg6 radius:(double)arg7 ;
-(void)setTileHandler:(id)arg1 ;
-(void)_fetchDataForKeys:(const unordered_set<_GEOTileKey, std::__1::hash<GEOTileKey>, std::__1::equal_to<GEOTileKey>, std::__1::allocator<_GEOTileKey> >*)arg1 ;
-(GEOTileKey)_adjacentTileKey:(const GEOTileKey*)arg1 dirX:(int)arg2 dirY:(int)arg3 ;
-(void)findTiles:(/*^block*/id)arg1 excludingKey:(const GEOTileKey*)arg2 ;
-(id)tileHandler;
-(int)tileScale;
-(GEOMapAccess *)map;
-(unsigned)zoomLevel;
-(int)tileStyle;
@end

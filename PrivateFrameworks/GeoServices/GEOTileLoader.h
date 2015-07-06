/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:42 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOTileLoader : NSObject

@property (nonatomic,readonly) int memoryHits; 
@property (nonatomic,readonly) int diskHits; 
@property (nonatomic,readonly) int networkHits; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)setServerProxyClass:(Class)arg1 ;
+(void)setTrackUsage:(char)arg1 ;
+(void)setMemoryCacheCountLimit:(unsigned)arg1 ;
+(id)diskCacheLocation;
+(id)singletonConfiguration;
+(void)useRemoteLoader;
+(void)setMemoryCacheTotalCostLimit:(unsigned)arg1 ;
+(void)setMemoryCacheMinCapacity:(unsigned)arg1 ;
+(id)sharedLoader;
+(id)alloc;
+(id)modernLoaderForTileGroupIdentifier:(unsigned)arg1 locale:(id)arg2 ;
+(id)modernLoaderForResourceManifestConfiguration:(id)arg1 locale:(id)arg2 ;
+(id)modernLoader;
+(void)setDiskCacheLocation:(id)arg1 ;
+(void)useLocalLoader;
-(void)clearAllCaches;
-(void)beginPreloadSessionOfSize:(unsigned long long)arg1 forClient:(id)arg2 exclusive:(char)arg3 ;
-(void)endPreloadSessionForClient:(id)arg1 ;
-(int)memoryHits;
-(int)diskHits;
-(int)networkHits;
-(void)calculateFreeableSizeWithCallbackQ:(id)arg1 finished:(/*^block*/id)arg2 ;
-(void)shrinkDiskCacheToSize:(unsigned long long)arg1 callbackQ:(id)arg2 finished:(/*^block*/id)arg3 ;
-(void)setInternalDelegate:(id)arg1 ;
-(id)internalDelegate;
-(void)setInternalDelegateQ:(id)arg1 ;
-(id)internalDelegateQ;
-(id)cachedTileForKey:(const GEOTileKey*)arg1 ;
-(void)endPreloadSession;
-(void)beginPreloadSessionOfSize:(unsigned long long)arg1 ;
-(void)cancelRequest:(id)arg1 ;
-(void)_loadTiles:(id)arg1 options:(unsigned)arg2 progress:(/*^block*/id)arg3 finished:(/*^block*/id)arg4 error:(/*^block*/id)arg5 ;
-(void)closeDatabase;
-(void)openDatabase;
-(id)renderDataForKey:(GEOTileKey*)arg1 ;
-(id)renderDataForKey:(GEOTileKey*)arg1 asyncHandler:(/*^block*/id)arg2 ;
-(void)loadTiles:(id)arg1 progress:(/*^block*/id)arg2 finished:(/*^block*/id)arg3 error:(/*^block*/id)arg4 ;
-(void)loadTilesFromCacheAndNetwork:(id)arg1 progress:(/*^block*/id)arg2 finished:(/*^block*/id)arg3 error:(/*^block*/id)arg4 ;
-(void)loadTilesFromCache:(id)arg1 progress:(/*^block*/id)arg2 finished:(/*^block*/id)arg3 error:(/*^block*/id)arg4 ;
-(void)preloadTiles:(id)arg1 requireWiFi:(char)arg2 progress:(/*^block*/id)arg3 finished:(/*^block*/id)arg4 error:(/*^block*/id)arg5 ;
-(id)expireTilesWithType:(unsigned char)arg1 provider:(unsigned short)arg2 olderThan:(double)arg3 ;
-(void)shrinkDiskCacheToSize:(unsigned long long)arg1 finished:(/*^block*/id)arg2 ;
-(void)openForClient:(id)arg1 ;
-(void)closeForClient:(id)arg1 ;
-(void)setSortPoint:(const SCD_Struct_GE7*)arg1 ;
-(void)cancelAllForClient:(id)arg1 ;
-(void)registerTileDecoder:(id)arg1 ;
-(void)loadKey:(const GEOTileKey*)arg1 priority:(unsigned)arg2 forClient:(id)arg3 options:(unsigned)arg4 callbackQ:(id)arg5 beginNetwork:(/*^block*/id)arg6 callback:(/*^block*/id)arg7 ;
-(void)cancelKey:(const GEOTileKey*)arg1 forClient:(id)arg2 ;
-(void)reportCorruptTile:(const GEOTileKey*)arg1 ;
-(void)registerTileLoader:(Class)arg1 ;
-(void)expireTilesWithPredicate:(/*^block*/id)arg1 ;
-(char)reprioritizeKey:(const GEOTileKey*)arg1 forClient:(id)arg2 newPriority:(unsigned)arg3 ;
@end


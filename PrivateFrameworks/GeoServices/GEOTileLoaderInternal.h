/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:42 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOTileLoader.h>
#import <GeoServices/GEOTileServerProxyDelegate.h>
#import <GeoServices/GEOResourceManifestTileGroupObserver.h>
#import <GeoServices/GEOExperimentConfigurationObserver.h>

@protocol OS_dispatch_queue, GEOTileLoaderInternalDelegate;
@class GEOTilePool, NSObject, NSMutableSet, GEOTileServerProxy, NSMutableArray, GEOTileLoaderConfiguration, NSString;

@interface GEOTileLoaderInternal : GEOTileLoader <GEOTileServerProxyDelegate, GEOResourceManifestTileGroupObserver, GEOExperimentConfigurationObserver> {

	list<LoadItem, std::__1::allocator<LoadItem> >* _loadItems;
	mutex _lock;
	GEOTilePool* _cache;
	GEOTilePool* _expiringCache;
	unique_ptr<geo::DispatchTimer, std::__1::default_delete<geo::DispatchTimer> >* _timer;
	NSObject*<OS_dispatch_queue> _loadQ;
	NSMutableSet* _openers;
	SCD_Struct_GE15 _sortPoint;
	GEOTileServerProxy* _proxy;
	int _memoryHits;
	int _diskHits;
	int _networkHits;
	list<_CacheRequester<void ()(unsigned long long)>, std::__1::allocator<_CacheRequester<void ()(unsigned long long)> > >* _shrinkCacheRequesters;
	list<_CacheRequester<void ()(unsigned long long)>, std::__1::allocator<_CacheRequester<void ()(unsigned long long)> > >* _freeableSizeRequesters;
	NSMutableArray* _tileDecoders;
	char _networkActive;
	id<GEOTileLoaderInternalDelegate> _internalDelegate;
	NSObject*<OS_dispatch_queue> _internalDelegateQ;
	GEOTileLoaderConfiguration* _config;
	mutex _usageLock;
	unordered_map<_GEOTileKey, UsageData, std::__1::hash<GEOTileKey>, std::__1::equal_to<GEOTileKey>, std::__1::allocator<std::__1::pair<const _GEOTileKey, UsageData> > >* _usageData;
	unique_ptr<geo::DispatchTimer, std::__1::default_delete<geo::DispatchTimer> >* _usageTimer;
	char _isUsageTimerScheduled;
	int _rollingBatchId;
	deque<ErrorInfo, std::__1::allocator<ErrorInfo> >* _recentErrors;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(id)proxy;
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
-(void)_tileEditionChanged:(id)arg1 ;
-(void)_cancel:(_list_iterator<LoadItem, void *>*)arg1 err:(id)arg2 ;
-(char)_cancelIfNeeded:(_list_iterator<LoadItem, void *>*)arg1 ;
-(void)_updateNetworkActive;
-(void)loadKey:(const GEOTileKey*)arg1 priority:(unsigned)arg2 forClient:(id)arg3 proxyClient:(id)arg4 options:(unsigned)arg5 callbackQ:(id)arg6 beginNetwork:(/*^block*/id)arg7 callback:(/*^block*/id)arg8 ;
-(void)_requestOnlineTiles;
-(void)_loadedTile:(id)arg1 forKey:(const GEOTileKey*)arg2 info:(id)arg3 ;
-(id)_findInCache:(const GEOTileKey*)arg1 ;
-(void)proxy:(id)arg1 loadedTile:(id)arg2 forKey:(const GEOTileKey*)arg3 info:(id)arg4 ;
-(void)proxy:(id)arg1 failedToLoadTiles:(id)arg2 error:(id)arg3 ;
-(void)proxy:(id)arg1 failedToLoadAllPendingTilesWithError:(id)arg2 ;
-(void)proxy:(id)arg1 willGoToNetworkForTiles:(id)arg2 ;
-(void)proxy:(id)arg1 canShrinkDiskCacheByAmount:(unsigned long long)arg2 ;
-(void)proxy:(id)arg1 didShrinkDiskCacheByAmount:(unsigned long long)arg2 ;
-(void)_usageTimerFired;
-(void)_timerFired;
-(void)_activeTileGroupChanged:(id)arg1 ;
-(void)_loadedTile:(id)arg1 forKey:(const GEOTileKey*)arg2 fromOfflinePack:(id)arg3 ;
-(id)initWithConfiguration:(id)arg1 ;
-(void)openForClient:(id)arg1 ;
-(void)closeForClient:(id)arg1 ;
-(void)_localeChanged:(id)arg1 ;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1 ;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(void)experimentConfigurationDidChange:(id)arg1 ;
-(void)setSortPoint:(const SCD_Struct_GE15*)arg1 ;
-(void)cancelAllForClient:(id)arg1 ;
-(void)registerTileDecoder:(id)arg1 ;
-(void)loadKey:(const GEOTileKey*)arg1 priority:(unsigned)arg2 forClient:(id)arg3 options:(unsigned)arg4 callbackQ:(id)arg5 beginNetwork:(/*^block*/id)arg6 callback:(/*^block*/id)arg7 ;
-(void)cancelKey:(const GEOTileKey*)arg1 forClient:(id)arg2 ;
-(void)reportCorruptTile:(const GEOTileKey*)arg1 ;
-(void)registerTileLoader:(Class)arg1 ;
-(void)expireTilesWithPredicate:(/*^block*/id)arg1 ;
-(char)reprioritizeKey:(const GEOTileKey*)arg1 forClient:(id)arg2 newPriority:(unsigned)arg3 ;
@end


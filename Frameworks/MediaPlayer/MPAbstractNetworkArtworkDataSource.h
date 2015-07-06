/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:37 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/NSURLSessionDataDelegate.h>
#import <MediaPlayer/MPArtworkDataSource.h>

@protocol OS_dispatch_queue;
@class NSObject, NSCache, NSMapTable, NSURLSession, NSURLSessionConfiguration, NSString;

@interface MPAbstractNetworkArtworkDataSource : NSObject <NSURLSessionDataDelegate, MPArtworkDataSource> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSCache* _artworkRepresentationCache;
	NSMapTable* _catalogTaskMap;
	NSURLSession* _URLSession;

}

@property (nonatomic,readonly) NSURLSessionConfiguration * URLSessionConfiguration; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accessQueue;                           //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,retain) NSCache * artworkRepresentationCache;                               //@synthesize artworkRepresentationCache=_artworkRepresentationCache - In the implementation block
@property (nonatomic,retain) NSMapTable * catalogTaskMap;                                        //@synthesize catalogTaskMap=_catalogTaskMap - In the implementation block
@property (nonatomic,retain) NSURLSession * URLSession;                                          //@synthesize URLSession=_URLSession - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)areRepresentationsAvailableForCatalog:(id)arg1 ;
-(char)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2 ;
-(id)existingRepresentationForArtworkCatalog:(id)arg1 ;
-(void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1 ;
-(id)visualIdenticalityIdentifierForCatalog:(id)arg1 ;
-(id)supportedSizesForCatalog:(id)arg1 ;
-(id)sortedSupportedSizesForCatalog:(id)arg1 ;
-(id)cacheKeyForCatalog:(id)arg1 size:(CGSize)arg2 ;
-(id)requestForCatalog:(id)arg1 size:(CGSize)arg2 ;
-(void)_updateConfigurationForCellularDataRestriction:(id)arg1 ;
-(NSURLSession *)URLSession;
-(NSCache *)artworkRepresentationCache;
-(id)_existingRepresentativeObjectForArtworkCatalog:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)_existingRepresentationFromURLCacheForArtworkCatalog:(id)arg1 immediateImageDecompressionAllowed:(char)arg2 ;
-(NSURLSessionConfiguration *)URLSessionConfiguration;
-(id)_artworkRepresentationWithImageFromData:(id)arg1 forURLResponse:(id)arg2 size:(CGSize)arg3 immediateImageDecompressionAllowed:(char)arg4 ;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(NSMapTable *)catalogTaskMap;
-(char)wantsBackgroundImageDecompression;
-(char)shouldLookForLargerRepresentationsWhenBestRepresentationIsUnavailable;
-(char)_isRepresentationSize:(CGSize)arg1 validForCatalog:(id)arg2 ;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setArtworkRepresentationCache:(NSCache *)arg1 ;
-(void)setCatalogTaskMap:(NSMapTable *)arg1 ;
-(void)setURLSession:(NSURLSession *)arg1 ;
-(void)dealloc;
-(id)init;
@end


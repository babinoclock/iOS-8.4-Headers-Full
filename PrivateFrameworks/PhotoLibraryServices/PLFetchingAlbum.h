/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:59 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/_PLFetchingAlbum.h>

@class NSArray, NSPredicate, NSFetchRequest, NSData, NSString, NSOrderedSet;

@interface PLFetchingAlbum : _PLFetchingAlbum {

	unsigned _countForDisplay;
	unsigned _photosCount;
	unsigned _videosCount;
	int _emptyState;
	NSArray* _cachedKeyAssets;
	NSPredicate* _ALAssetsGroupFilterPredicate;
	unsigned _batchSize;

}

@property (nonatomic,retain) NSFetchRequest * fetchRequest; 
@property (nonatomic,retain) NSData * customQueryParameters; 
@property (nonatomic,retain) NSString * customQueryType; 
@property (nonatomic,retain,readonly) NSPredicate * extraFilterPredicate; 
@property (nonatomic,retain) NSPredicate * ALAssetsGroupFilterPredicate;               //@synthesize ALAssetsGroupFilterPredicate=_ALAssetsGroupFilterPredicate - In the implementation block
@property (assign,nonatomic) unsigned batchSize;                                       //@synthesize batchSize=_batchSize - In the implementation block
@property (nonatomic,readonly) char hasAssetsCache; 
@property (nonatomic,retain) NSOrderedSet * fetchedAssets; 
+(id)predicateForAlbumKind:(int)arg1 ;
+(id)_panoramasAlbumPredicate;
+(id)sortDescriptorsForAlbumKind:(int)arg1 ;
+(char)contextShouldIgnoreChangesForFetchedAssets;
+(char)contextShouldIgnoreChangesForFetchedAssetsSet;
+(char)contextShouldIgnoreChangesForFetchRequest;
+(char)contextShouldIgnoreChangesForALAssetsGroupFilterPredicate;
-(void)dealloc;
-(unsigned)count;
-(char)isEmpty;
-(unsigned)batchSize;
-(void)batchFetchAssets:(id)arg1 ;
-(id)filteredIndexesForPredicate:(id)arg1 ;
-(id)mutableAssets;
-(void)setBatchSize:(unsigned)arg1 ;
-(char)canPerformEditOperation:(unsigned)arg1 ;
-(id)assets;
-(unsigned)approximateCount;
-(id)keyAsset;
-(void)setKeyAsset:(id)arg1 ;
-(id)secondaryKeyAsset;
-(void)setSecondaryKeyAsset:(id)arg1 ;
-(id)tertiaryKeyAsset;
-(void)setTertiaryKeyAsset:(id)arg1 ;
-(void)awakeFromInsert;
-(id)primitiveAssets;
-(void)awakeFromFetch;
-(void)didTurnIntoFault;
-(void)updateSnapshotAndClearCaches:(id)arg1 ;
-(NSPredicate *)extraFilterPredicate;
-(void)setupFetchRequest;
-(NSPredicate *)ALAssetsGroupFilterPredicate;
-(void)setFetchRequest:(NSFetchRequest *)arg1 ;
-(NSFetchRequest *)fetchRequest;
-(id)_performFetchWithRequest:(id)arg1 ;
-(unsigned)_fetchedCountForAssetsOfKind:(short)arg1 ;
-(id)_cachedKeyAssets;
-(void)setALAssetsGroupFilterPredicate:(NSPredicate *)arg1 ;
-(void)setAssets:(id)arg1 ;
-(unsigned)countForAssetsOfKind:(short)arg1 ;
-(char)hasAssetsCache;
-(id)fastPointerAccessSetForAssets:(id)arg1 ;
-(char)mayHaveAssetsInCommon:(id)arg1 ;
@end

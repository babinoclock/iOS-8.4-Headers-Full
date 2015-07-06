/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:59 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/_PLGenericAlbum.h>
#import <PhotoLibraryServices/PLAlbumProtocol.h>
#import <PhotoLibraryServices/PLDerivedAlbumOrigin.h>
#import <PhotoLibraryServices/PLIndexMappersDataOrigin.h>
#import <PhotoLibraryServices/PLOrderKeyObject.h>

@protocol PLIndexMappingCache;
@class NSNumber, NSMutableOrderedSet, NSString, UIImage, NSDictionary, NSURL, NSObject, PLPhotoLibrary, NSDate, NSOrderedSet, PLManagedAsset, NSArray;

@interface PLGenericAlbum : _PLGenericAlbum <PLAlbumProtocol, PLDerivedAlbumOrigin, PLIndexMappersDataOrigin, PLOrderKeyObject> {

	NSObject*<PLIndexMappingCache> _derivededAlbums[5];
	char isRegisteredForChanges;
	char didRegisteredWithUserInterfaceContext;

}

@property (nonatomic,retain,readonly) PLPhotoLibrary * photoLibrary; 
@property (assign,nonatomic) short trashedState; 
@property (nonatomic,retain) NSDate * trashedDate; 
@property (nonatomic,retain) NSDate * startDate; 
@property (nonatomic,retain) NSDate * endDate; 
@property (nonatomic,retain) NSString * uuid; 
@property (assign,nonatomic) int kindValue; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * cloudGUID; 
@property (assign,setter=setPinned:,getter=isPinned,nonatomic) char pinned; 
@property (assign,nonatomic) short cloudLocalState; 
@property (assign,nonatomic) short cloudServerState; 
@property (nonatomic,readonly) char isLibrary; 
@property (nonatomic,readonly) char isCameraAlbum; 
@property (nonatomic,readonly) char isSmartAlbum; 
@property (nonatomic,readonly) char isOwnPhotoStreamAlbum; 
@property (nonatomic,readonly) char isRootFolder; 
@property (nonatomic,readonly) char isRecentlyAddedAlbum; 
@property (nonatomic,readonly) char isUserLibraryAlbum; 
@property (nonatomic,readonly) char shouldDeleteWhenEmpty; 
@property (assign,nonatomic) char isRegisteredForChanges; 
@property (assign,nonatomic) char didRegisteredWithUserInterfaceContext; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * localizedTitle; 
@property (nonatomic,retain,readonly) NSOrderedSet * assets; 
@property (nonatomic,readonly) unsigned approximateCount; 
@property (nonatomic,readonly) unsigned assetsCount; 
@property (nonatomic,readonly) unsigned photosCount; 
@property (nonatomic,readonly) unsigned videosCount; 
@property (nonatomic,readonly) char isEmpty; 
@property (nonatomic,retain) PLManagedAsset * keyAsset; 
@property (nonatomic,retain) PLManagedAsset * secondaryKeyAsset; 
@property (nonatomic,retain) PLManagedAsset * tertiaryKeyAsset; 
@property (nonatomic,readonly) char canShowComments; 
@property (nonatomic,readonly) char canShowAvalancheStacks; 
@property (nonatomic,copy,readonly) NSArray * localizedLocationNames; 
@property (nonatomic,retain,readonly) NSNumber * kind; 
@property (nonatomic,retain,readonly) NSMutableOrderedSet * mutableAssets; 
@property (assign,nonatomic) char hasUnseenContentBoolValue; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,retain,readonly) UIImage * posterImage; 
@property (nonatomic,readonly) char isPanoramasAlbum; 
@property (nonatomic,readonly) char isWallpaperAlbum; 
@property (nonatomic,readonly) char isPhotoStreamAlbum; 
@property (nonatomic,readonly) char isCloudSharedAlbum; 
@property (nonatomic,readonly) char isPendingPhotoStreamAlbum; 
@property (nonatomic,readonly) char isStandInAlbum; 
@property (nonatomic,readonly) char isFolder; 
@property (nonatomic,readonly) char isInTrash; 
@property (nonatomic,readonly) char isOwnedCloudSharedAlbum; 
@property (nonatomic,readonly) char isFamilyCloudSharedAlbum; 
@property (nonatomic,readonly) char isMultipleContributorCloudSharedAlbum; 
@property (nonatomic,readonly) char canContributeToCloudSharedAlbum; 
@property (nonatomic,retain) NSDictionary * slideshowSettings; 
@property (nonatomic,retain) NSString * importSessionID; 
@property (nonatomic,retain,readonly) NSURL * groupURL; 
@property (nonatomic,copy,readonly) id sortingComparator; 
@property (assign,nonatomic) int pendingItemsCount; 
@property (assign,nonatomic) int pendingItemsType; 
@property (assign,nonatomic) unsigned batchSize; 
+(id)cameraRollAlbumInLibrary:(id)arg1 ;
+(id)userLibraryAlbumInLibrary:(id)arg1 ;
+(id)eventsWithName:(id)arg1 andImportSessionIdentifier:(id)arg2 inManagedObjectContext:(id)arg3 ;
+(id)albumsWithUUID:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)rootFolderInLibrary:(id)arg1 ;
+(id)albumsWithKind:(int)arg1 inManagedObjectContext:(id)arg2 ;
+(id)allPhotoStreamAssetsAlbumInLibrary:(id)arg1 ;
+(id)insertNewAlbumWithKind:(int)arg1 title:(id)arg2 intoLibrary:(id)arg3 ;
+(NSObject*)albumFromGroupURL:(id)arg1 photoLibrary:(id)arg2 ;
+(id)allSyncedAlbumsInManagedObjectContext:(id)arg1 ;
+(id)allAlbumsInManagedObjectContext:(id)arg1 ;
+(id)albumWithUUID:(id)arg1 inLibrary:(id)arg2 ;
+(id)albumWithKind:(int)arg1 inManagedObjectContext:(id)arg2 ;
+(id)allAssetsAlbumInLibrary:(id)arg1 ;
+(id)allNonPhotoStreamAssetsAlbumInLibrary:(id)arg1 ;
+(id)syncProgressAlbumInLibrary:(id)arg1 ;
+(id)otaRestoreProgressAlbumInLibrary:(id)arg1 ;
+(id)filesystemImportProgressAlbumInLibrary:(id)arg1 ;
+(id)albumsForStreamID:(id)arg1 inLibrary:(id)arg2 ;
+(id)albumsToUploadInitiallyInLibrary:(id)arg1 limit:(unsigned)arg2 ;
+(id)includeUnpushedParentsForAlbums:(id)arg1 limit:(unsigned)arg2 ;
+(id)albumsWithCloudGUIDs:(id)arg1 inLibrary:(id)arg2 ;
+(id)albumWithCloudGUID:(id)arg1 inLibrary:(id)arg2 ;
+(id)insertNewFolderWithTitle:(id)arg1 intoLibrary:(id)arg2 ;
+(id)insertNewAlbumWithTitle:(id)arg1 intoLibrary:(id)arg2 ;
+(id)childKeyForOrdering;
+(id)allAlbumsRegisteredWithManagedObjectContext:(id)arg1 ;
+(id)localizedTitleForAlbumKind:(int)arg1 ;
+(char)isFolder:(int)arg1 ;
+(id)_singletonManagedAlbumWithKind:(int)arg1 library:(id)arg2 ;
+(id)_singletonFetchingAlbumWithKind:(int)arg1 library:(id)arg2 ;
+(id)wallpaperAlbumInLibrary:(id)arg1 ;
+(id)albumsMatchingPredicate:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)_unpushedParentsOfAlbums:(id)arg1 ;
+(id)_insertNewAlbumWithKind:(int)arg1 title:(id)arg2 lastInterestingDate:(id)arg3 intoLibrary:(id)arg4 ;
+(id)insertNewSyncedEventWithTitle:(id)arg1 intoLibrary:(id)arg2 ;
+(id)uuidFromGroupURL:(id)arg1 ;
+(id)keyPathsForValuesAffectingName;
+(id)keyPathsForValuesAffectingKindValue;
+(id)allPanoramasAlbumInLibrary:(id)arg1 ;
+(id)allVerticalPanoramasAlbumInLibrary:(id)arg1 ;
+(id)allHorizontalPanoramasAlbumInLibrary:(id)arg1 ;
+(id)allVideosAlbumInLibrary:(id)arg1 ;
+(id)allFavoritesAlbumInLibrary:(id)arg1 ;
+(id)iTunesLibraryAlbumInLibrary:(id)arg1 ;
+(id)trashBinAlbumInLibrary:(id)arg1 ;
+(id)allAlbumsInLibrary:(id)arg1 ;
+(id)albumWithObjectID:(id)arg1 inLibrary:(id)arg2 ;
+(id)albumWithName:(id)arg1 inLibrary:(id)arg2 ;
+(void)resetAlbumStateForCloudInLibrary:(id)arg1 ;
+(void)removeEmptyAlbumsForCloudResetInLibrary:(id)arg1 ;
+(void)removeTrashedAlbumsAndFoldersForCloudResetInLibrary:(id)arg1 ;
+(id)cloudAlbumsInLibrary:(id)arg1 ;
+(id)albumsMatchingPredicate:(id)arg1 inLibrary:(id)arg2 ;
+(id)insertNewAlbumIntoLibrary:(id)arg1 ;
+(id)insertNewSyncedEventIntoLibrary:(id)arg1 ;
+(id)insertNewCloudSharedAlbumWithTitle:(id)arg1 lastInterestingDate:(id)arg2 intoLibrary:(id)arg3 ;
+(id)insertNewFaceAlbumIntoLibrary:(id)arg1 ;
+(id)insertNewSyncedFolderWithTitle:(id)arg1 intoLibrary:(id)arg2 ;
+(id)insertAlbumWithKind:(int)arg1 title:(id)arg2 uuid:(id)arg3 inManagedObjectContext:(id)arg4 ;
+(void)addSingletonObjectsToContext:(id)arg1 ;
+(id)albumsWithCloudGUID:(id)arg1 inLibrary:(id)arg2 ;
+(id)_predicateForSupportedAlbumTypes;
-(void)dealloc;
-(unsigned)count;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)description;
-(NSString *)name;
-(NSString *)title;
-(char)isEmpty;
-(char)isPinned;
-(void)setPinned:(char)arg1 ;
-(NSNumber *)kind;
-(NSString *)uuid;
-(NSString *)localizedTitle;
-(void)setKind:(NSNumber *)arg1 ;
-(char)isUserLibraryAlbum;
-(int)kindValue;
-(char)isCameraAlbum;
-(char)isCloudSharedAlbum;
-(NSString *)cloudGUID;
-(void)setCloudGUID:(NSString *)arg1 ;
-(void)reducePendingItemsCountBy:(unsigned)arg1 ;
-(void)batchFetchAssets:(id)arg1 ;
-(char)hasUnseenContentBoolValue;
-(void)setHasUnseenContentBoolValue:(char)arg1 ;
-(UIImage *)posterImage;
-(char)isLibrary;
-(char)isPanoramasAlbum;
-(char)isWallpaperAlbum;
-(char)isPhotoStreamAlbum;
-(char)isPendingPhotoStreamAlbum;
-(char)isStandInAlbum;
-(char)isFolder;
-(char)isInTrash;
-(char)isOwnedCloudSharedAlbum;
-(char)isFamilyCloudSharedAlbum;
-(char)isMultipleContributorCloudSharedAlbum;
-(char)isRecentlyAddedAlbum;
-(char)canContributeToCloudSharedAlbum;
-(char)shouldDeleteWhenEmpty;
-(NSDictionary *)slideshowSettings;
-(void)setSlideshowSettings:(NSDictionary *)arg1 ;
-(NSURL *)groupURL;
-(id)sortingComparator;
-(char)canPerformEditOperation:(unsigned)arg1 ;
-(unsigned)approximateCount;
-(unsigned)assetsCount;
-(unsigned)photosCount;
-(unsigned)videosCount;
-(char)canShowComments;
-(char)canShowAvalancheStacks;
-(NSArray *)localizedLocationNames;
-(void)delete;
-(char)canMoveToTrash;
-(void)applyTrashedState:(short)arg1 ;
-(char)isOwnPhotoStreamAlbum;
-(PLPhotoLibrary *)photoLibrary;
-(void)setUuid:(NSString *)arg1 ;
-(char)isSmartAlbum;
-(id)cplAlbumChangeInPhotoLibrary:(id)arg1 ;
-(void)applyPropertiesFromAlbumChange:(id)arg1 ;
-(void)setOrderValue:(long long)arg1 ;
-(void)updateAlbumFolderRelation:(id)arg1 inLibrary:(id)arg2 ;
-(void)awakeFromInsert;
-(void)setKindValue:(int)arg1 ;
-(void)didSave;
-(char)isRegisteredForChanges;
-(void)setDidRegisteredWithUserInterfaceContext:(char)arg1 ;
-(void)registerForChanges;
-(char)didRegisteredWithUserInterfaceContext;
-(void)unregisterForChanges;
-(id)childKeyForOrdering;
-(void)awakeFromFetch;
-(void)willTurnIntoFault;
-(id)_kindDescription;
-(id)_compactDebugDescription;
-(id)_prettyDescription;
-(unsigned)countForAssetsOfKind:(short)arg1 ;
-(void)unregisterAllDerivedAlbums;
-(void)_applyTrashedState:(short)arg1 date:(char)arg2 :(id)arg3 ;
-(char)isRootFolder;
-(void)setIsRegisteredForChanges:(char)arg1 ;
-(void)enumerateDerivedAlbums:(/*^block*/id)arg1 ;
-(void)registerDerivedAlbum:(NSObject*)arg1 ;
-(void)enumerateDerivedIndexMappers:(/*^block*/id)arg1 ;
-(char)hasDerivedIndexMappers;
-(long long)orderValue;
-(id)secondaryOrderSortKey;
-(id)childManagedObject;
-(id)assetsByObjectIDAtIndexes:(id)arg1 ;
-(id)migration_sortedOrderKeysForChildrenUsingMap:(id)arg1 ;
-(id)_itemIdentifier;
@end


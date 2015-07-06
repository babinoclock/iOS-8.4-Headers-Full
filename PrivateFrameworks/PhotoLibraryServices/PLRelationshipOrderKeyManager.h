/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:03 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class PLPhotoLibrary, NSMutableDictionary, NSObject;

@interface PLRelationshipOrderKeyManager : NSObject {

	PLPhotoLibrary* _photoLibrary;
	PLPhotoLibrary* _locationsPhotoLibrary;
	NSMutableDictionary* _locationsCache;
	NSMutableDictionary* _enqueuedFolderAlbumsOrderValueUpdates;
	NSMutableDictionary* _enqueuedAlbumAssetsOrderValueUpdates;
	NSObject*<OS_dispatch_queue> _locationsCacheQueue;
	char _hasStashedLocationValues;

}

@property (nonatomic,readonly) char hasStashedLocationValues;              //@synthesize hasStashedLocationValues=_hasStashedLocationValues - In the implementation block
+(id)sharedManager;
-(void)dealloc;
-(id)init;
-(id)photoLibrary;
-(void)updateAlbumAssetsUsingTransientOrdersByAlbumOID:(id)arg1 inLibrary:(id)arg2 ;
-(char)writeStashedLocationValuesInLibrary:(id)arg1 error:(id*)arg2 ;
-(unsigned)findIndexForAlbumWithID:(id)arg1 newOrderValue:(long long)arg2 inFolderWithID:(id)arg3 hasOrderValueConflictWithAlbumID:(id*)arg4 ;
-(void)getConflictResolutionOrderValuesForRelationship:(id)arg1 onObjectWithID:(id)arg2 atIndex:(unsigned)arg3 intoLower:(long long*)arg4 higher:(long long*)arg5 ;
-(void)stashFolderAlbumsLocationValue:(long long)arg1 forAlbumWithID:(id)arg2 inFolderWithID:(id)arg3 atIndex:(unsigned)arg4 ;
-(void)updateAlbumCounts:(id)arg1 inLibrary:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)migration_updateOrderValuesForAlbums:(id)arg1 managedObjectContext:(id)arg2 ;
-(void)migration_ensureValidOrderKey:(id)arg1 ;
-(long long)migration_defaultOrderKeySpacing;
-(void)migration_fixupOrderKeys:(id)arg1 withSpacing:(long long)arg2 ;
-(void)_migration_updateOrderKeysForParent:(id)arg1 childToOrderKeyMap:(id)arg2 ;
-(void)_migration_updateOrderValuesForAlbum:(id)arg1 managedObjectContext:(id)arg2 ;
-(id)albumsAndOrderValuesForAsset:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(id)parentFolderOrderValueForAlbum:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(int)compareOrderKeyObject:(id)arg1 withObject:(id)arg2 ;
-(unsigned)findIndexForAssetWithID:(id)arg1 newOrderValue:(long long)arg2 inAlbumWithID:(id)arg3 hasOrderValueConflictWithAssetID:(id*)arg4 ;
-(void)stashAlbumAssetsLocationValue:(long long)arg1 forAssetWithID:(id)arg2 inAlbumWithID:(id)arg3 atIndex:(unsigned)arg4 ;
-(void)_updateOrderOfChildrenInParent:(id)arg1 usingTransientOrders:(id)arg2 ;
-(id)locationsPhotoLibrary;
-(id)locationsManagedObjectContext;
-(id)_locationsCache;
-(id)_inq_orderingStateForRelationship:(id)arg1 onObjectWithID:(id)arg2 ;
-(id)_enqueuedFolderAlbumsOrderValueUpdates;
-(void)_inq_stashLocationValue:(long long)arg1 forOrderedObjectWithID:(id)arg2 inSourceObjectID:(id)arg3 relationship:(id)arg4 atIndex:(unsigned)arg5 usingStashDictionary:(id)arg6 ;
-(id)_enqueuedAlbumAssetsOrderValueUpdates;
-(void)_getAndResetEnqueuedOrderValueUpdatesForFolders:(id*)arg1 albums:(id*)arg2 ;
-(id)objectIDsAndOrderValuesForRelationship:(id)arg1 onObjectWithID:(id)arg2 ;
-(char)hasStashedLocationValues;
@end


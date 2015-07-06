/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:51 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, PLPhotoLibrary, NSMutableSet, NSMutableDictionary, NSHashTable;

@interface PHPhotoLibrary : NSObject {

	char _unknownMergeEvent;
	char _isChangeProcessingPending;
	NSObject*<OS_dispatch_queue> _queue;
	PLPhotoLibrary* _photoLibrary;
	PLPhotoLibrary* _changeHandlingPhotoLibrary;
	NSObject*<OS_dispatch_queue> _transactionQueue;
	NSMutableSet* _inserts;
	NSMutableSet* _updates;
	NSMutableSet* _deletes;
	NSMutableDictionary* _saveTokensToKnownUUIDs;
	NSMutableDictionary* _changeRequests;
	NSHashTable* _fetchResults;
	NSHashTable* _observers;
	NSMutableDictionary* _changeNotificationInfo;
	double _lastChangeProcessingStarted;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                         //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) PLPhotoLibrary * photoLibrary;                              //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (nonatomic,retain) PLPhotoLibrary * changeHandlingPhotoLibrary;                //@synthesize changeHandlingPhotoLibrary=_changeHandlingPhotoLibrary - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> transactionQueue;              //@synthesize transactionQueue=_transactionQueue - In the implementation block
@property (nonatomic,retain) NSMutableSet * inserts;                                     //@synthesize inserts=_inserts - In the implementation block
@property (nonatomic,retain) NSMutableSet * updates;                                     //@synthesize updates=_updates - In the implementation block
@property (nonatomic,retain) NSMutableSet * deletes;                                     //@synthesize deletes=_deletes - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * saveTokensToKnownUUIDs;               //@synthesize saveTokensToKnownUUIDs=_saveTokensToKnownUUIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * changeRequests;                       //@synthesize changeRequests=_changeRequests - In the implementation block
@property (nonatomic,retain) NSHashTable * fetchResults;                                 //@synthesize fetchResults=_fetchResults - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                                    //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * changeNotificationInfo;               //@synthesize changeNotificationInfo=_changeNotificationInfo - In the implementation block
@property (assign,nonatomic) char unknownMergeEvent;                                     //@synthesize unknownMergeEvent=_unknownMergeEvent - In the implementation block
@property (assign,nonatomic) char isChangeProcessingPending;                             //@synthesize isChangeProcessingPending=_isChangeProcessingPending - In the implementation block
@property (assign,nonatomic) double lastChangeProcessingStarted;                         //@synthesize lastChangeProcessingStarted=_lastChangeProcessingStarted - In the implementation block
+(id)uniquedOID:(id)arg1 ;
+(id)uniquedOIDsFromObjects:(id)arg1 ;
+(void)_forceUserInterfaceReload;
+(void)requestAuthorization:(/*^block*/id)arg1 ;
+(Class)PHObjectClassForEntityName:(id)arg1 ;
+(Class)classForFetchType:(id)arg1 ;
+(Class)PHObjectClassForOID:(id)arg1 ;
+(id)_effectiveRootEntity:(id)arg1 ;
+(id)uniquedOIDs:(id)arg1 ;
+(int)authorizationStatus;
+(id)sharedPhotoLibrary;
-(void)registerUUID:(id)arg1 forSaveToken:(id)arg2 ;
-(id)fetchUpdatedObject:(id)arg1 ;
-(void)assertTransaction;
-(void)recordDeleteRequest:(id)arg1 ;
-(id)changeRequestForUUID:(id)arg1 ;
-(void)setChangeRequest:(id)arg1 forUUID:(id)arg2 ;
-(void)recordInsertRequest:(id)arg1 ;
-(void)recordUpdateRequest:(id)arg1 ;
-(id)removeUuidForSaveToken:(id)arg1 ;
-(id)initSharedLibrary;
-(void)handleMergeNotification:(id)arg1 ;
-(NSMutableSet *)inserts;
-(NSMutableSet *)deletes;
-(id)transactionContext;
-(id)transactionPLPhotoLibrary;
-(NSMutableDictionary *)changeRequests;
-(void)_commitTransaction:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)saveTokensToKnownUUIDs;
-(id)fetchPHObjectsForOIDs:(id)arg1 propertyHint:(unsigned)arg2 includeTrash:(char)arg3 ;
-(PLPhotoLibrary *)changeHandlingPhotoLibrary;
-(void)registerFetchResult:(id)arg1 ;
-(void)unregisterFetchResult:(id)arg1 ;
-(char)isApplyingRequestedChanges;
-(id)queryForType:(id)arg1 withIdentifiers:(id)arg2 local:(char)arg3 ;
-(id)fetchPHObjectsForUUIDs:(id)arg1 entityName:(id)arg2 ;
-(void)setChangeHandlingPhotoLibrary:(PLPhotoLibrary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)transactionQueue;
-(void)setTransactionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setInserts:(NSMutableSet *)arg1 ;
-(void)setUpdates:(NSMutableSet *)arg1 ;
-(void)setDeletes:(NSMutableSet *)arg1 ;
-(void)setSaveTokensToKnownUUIDs:(NSMutableDictionary *)arg1 ;
-(void)setChangeRequests:(NSMutableDictionary *)arg1 ;
-(NSHashTable *)fetchResults;
-(void)setFetchResults:(NSHashTable *)arg1 ;
-(NSMutableDictionary *)changeNotificationInfo;
-(void)setChangeNotificationInfo:(NSMutableDictionary *)arg1 ;
-(char)unknownMergeEvent;
-(void)setUnknownMergeEvent:(char)arg1 ;
-(char)isChangeProcessingPending;
-(void)setIsChangeProcessingPending:(char)arg1 ;
-(double)lastChangeProcessingStarted;
-(void)setLastChangeProcessingStarted:(double)arg1 ;
-(id)pl_syncProgressAlbums;
-(void)unregisterChangeObserver:(id)arg1 ;
-(void)registerChangeObserver:(id)arg1 ;
-(void)performChanges:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)performChangesAndWait:(/*^block*/id)arg1 error:(id*)arg2 ;
-(id)init;
-(id)managedObjectContext;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_beginTransaction;
-(id)fetchPHObjectsForOIDs:(id)arg1 ;
-(PLPhotoLibrary *)photoLibrary;
-(void)setPhotoLibrary:(PLPhotoLibrary *)arg1 ;
-(void)_processPendingChanges;
-(NSMutableSet *)updates;
@end


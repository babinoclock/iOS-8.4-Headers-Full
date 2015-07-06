/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:04 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary, NSMutableSet, PLPhotoLibrary, NSCountedSet, NSSet;

@interface PLDupeManager : NSObject {

	NSMutableArray* _normalAssetsObjectIDsToAnalyze;
	NSMutableDictionary* _cloudAssetsToAnalyze;
	NSMutableArray* _assetsWithUpdatedVisibility;
	char _doneWithCloudAssets;
	char _isRebuilding;
	NSMutableSet* _normalInserts;
	NSMutableSet* _cloudInserts;
	PLPhotoLibrary* _photoLibrary;
	long _once;
	NSCountedSet* _pauseReasons;
	NSSet* _softPauseReasons;
	double _rebuildStartTime;

}

@property (nonatomic,readonly) PLPhotoLibrary * photoLibrary; 
+(id)sharedInstance;
+(id)hashForAsset:(id)arg1 ;
+(char)resetDupesAnalysisForOfflineStore:(id)arg1 resetHashes:(char)arg2 ;
+(id)placeholderHash;
+(char)_resetDupesAnalysisInManagedObjectContext:(id)arg1 resetHashes:(char)arg2 ;
+(id)_hashForFileAtPath:(id)arg1 utiType:(id)arg2 ;
+(void)_setPlaceHolderHashOnAsset:(id)arg1 ;
+(char)_computeHashForAsset:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)pauseAnalysisWithReason:(id)arg1 ;
-(void)resumeAnalysisWithReason:(id)arg1 ;
-(PLPhotoLibrary *)photoLibrary;
-(void)resetDupesAnalysisResetHashes:(char)arg1 ;
-(void)analyzeDupesWithNormalInserts:(id)arg1 cloudInserts:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)persistPublicGlobalUUIDsForAssets:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)launchDupeAnalysisIfNeeded;
-(void)_updateVisibilityState:(short)arg1 forAsset:(id)arg2 ;
-(void)_noteAssetVisibilityDidChange:(id)arg1 ;
-(id)_duplicateCloudAssetForHash:(id)arg1 orPublicGlobalUUID:(id)arg2 ;
-(void)_removeCloudAssetFromAnalysis:(id)arg1 ;
-(char)_prepareCloudAssetsToAnalyzeForManagedObjectContext:(id)arg1 ;
-(void)_analyzeDupeForNormalAsset:(id)arg1 ;
-(void)_analyzeDupesForRebuild;
-(void)_continueAnalysisForRebuild;
-(short)_computeCloudAssetHashesForManagedObjectContext:(id)arg1 ;
-(void)_continueAnalysisForRebuildOrPause;
-(short)_analyzeNormalAssetsForManagedObjectContext:(id)arg1 ;
-(short)_computeAssetHashesForManagedObjectContext:(id)arg1 ;
-(short)_adjustCloudAssetVisibilityStateForManagedObjectContext:(id)arg1 ;
-(void)_performAnalysisTransaction:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)_analyzeDupeForCloudAssetsAndHashes:(id)arg1 andPublicGlobalUUIDs:(id)arg2 forManagedObjectContext:(id)arg3 ;
-(void)_analyzeDupes;
-(short)_analyzeDupesForNormalInsertsForManagedObjectContext:(id)arg1 ;
-(void)_continueAnalysis;
-(short)_analyzeDupesForCloudInsertsForManagedObjectContext:(id)arg1 ;
-(void)_resetSoftPauseReasons;
@end


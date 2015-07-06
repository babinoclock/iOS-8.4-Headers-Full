/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:02 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@class AssetCollectionInfo, NSString, MSASAssetCollection, NSArray, NSDictionary;

@interface PLCloudSharedAssetSaveJob : PLCloudSharingJob {

	char _replacingOriginalWithDerivative;
	AssetCollectionInfo* _currentAssetCollectionInfo;
	char _isVideo;
	NSString* _currentFilePath;
	NSString* _currentCloudAssetGUID;
	unsigned _currentCloudAssetMediaAssetType;
	NSString* _cloudAlbumGUID;
	NSString* _cloudPersonID;
	MSASAssetCollection* _currentCloudAssetCollection;
	NSArray* _assetCollectionInfos;
	NSArray* _cloudAssetGUIDsToDelete;
	NSDictionary* _mstreamdInfoDictionary;
	long long _jobType;

}

@property (nonatomic,retain) NSString * currentFilePath;                                     //@synthesize currentFilePath=_currentFilePath - In the implementation block
@property (nonatomic,retain) NSString * currentCloudAssetGUID;                               //@synthesize currentCloudAssetGUID=_currentCloudAssetGUID - In the implementation block
@property (assign,nonatomic) unsigned currentCloudAssetMediaAssetType;                       //@synthesize currentCloudAssetMediaAssetType=_currentCloudAssetMediaAssetType - In the implementation block
@property (nonatomic,retain) NSString * cloudAlbumGUID;                                      //@synthesize cloudAlbumGUID=_cloudAlbumGUID - In the implementation block
@property (nonatomic,retain) NSString * cloudPersonID;                                       //@synthesize cloudPersonID=_cloudPersonID - In the implementation block
@property (nonatomic,retain) MSASAssetCollection * currentCloudAssetCollection;              //@synthesize currentCloudAssetCollection=_currentCloudAssetCollection - In the implementation block
@property (nonatomic,retain) NSArray * assetCollectionInfos;                                 //@synthesize assetCollectionInfos=_assetCollectionInfos - In the implementation block
@property (assign,nonatomic) char isVideo;                                                   //@synthesize isVideo=_isVideo - In the implementation block
@property (nonatomic,retain) NSArray * cloudAssetGUIDsToDelete;                              //@synthesize cloudAssetGUIDsToDelete=_cloudAssetGUIDsToDelete - In the implementation block
@property (assign,nonatomic) long long jobType;                                              //@synthesize jobType=_jobType - In the implementation block
@property (nonatomic,retain) NSDictionary * mstreamdInfoDictionary;                          //@synthesize mstreamdInfoDictionary=_mstreamdInfoDictionary - In the implementation block
+(id)nextDCIMSaveFileURLForCloudPersonID:(id)arg1 cloudAlbumGUID:(id)arg2 fileExtension:(id)arg3 ;
+(void)processMetadataForAssetCollections:(id)arg1 inAlbum:(id)arg2 personID:(id)arg3 info:(id)arg4 ;
+(id)_lightweightReimportPhotoCloudSharingAlbumInfoForAlbumWithCloudGUID:(id)arg1 cloudPersonID:(id)arg2 ;
+(char)_lightweightReimportCacheDirectoryExists;
+(id)pathForInFlightAssetCollectionWithGUID:(id)arg1 mediaAssetType:(unsigned)arg2 ;
+(id)_dcimDirectoryForFileURL:(id)arg1 ;
+(void)downloadPendingAssetsForPersonID:(id)arg1 info:(id)arg2 ;
+(void)saveCloudSharedAssetAtPath:(id)arg1 forAssetCollectionWithGUID:(id)arg2 mediaAssetType:(unsigned)arg3 albumGUID:(id)arg4 personID:(id)arg5 info:(id)arg6 shouldPrioritize:(char)arg7 ;
+(void)deleteCloudSharedAssetsWithCloudGUIDs:(id)arg1 info:(id)arg2 ;
+(void)replaceRecentlyUploadedOriginalWithDerivativeForCollection:(id)arg1 inAlbum:(id)arg2 personID:(id)arg3 ;
+(id)placeholderImageProperties;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)run;
-(char)isVideo;
-(NSString *)cloudPersonID;
-(void)setCloudPersonID:(NSString *)arg1 ;
-(void)setIsVideo:(char)arg1 ;
-(void)encodeToXPCObject:(id)arg1 ;
-(id)initFromXPCObject:(id)arg1 connection:(id)arg2 ;
-(void)runDaemonSide;
-(long long)daemonOperation;
-(NSString *)currentFilePath;
-(NSString *)cloudAlbumGUID;
-(NSString *)currentCloudAssetGUID;
-(unsigned)currentCloudAssetMediaAssetType;
-(NSArray *)cloudAssetGUIDsToDelete;
-(NSArray *)assetCollectionInfos;
-(NSDictionary *)mstreamdInfoDictionary;
-(long long)jobType;
-(void)setCurrentFilePath:(NSString *)arg1 ;
-(void)setCurrentCloudAssetMediaAssetType:(unsigned)arg1 ;
-(void)setCurrentCloudAssetGUID:(NSString *)arg1 ;
-(void)setCloudAlbumGUID:(NSString *)arg1 ;
-(void)setCloudAssetGUIDsToDelete:(NSArray *)arg1 ;
-(void)setAssetCollectionInfos:(NSArray *)arg1 ;
-(void)setMstreamdInfoDictionary:(NSDictionary *)arg1 ;
-(void)setJobType:(long long)arg1 ;
-(char)isProcessingThumbnail;
-(void)executeDaemonOperationSaveAssetMetadataForCollectionsJobType;
-(void)executeDaemonOperationSaveAssetJobType;
-(void)executeDaemonOperationDeleteAssetJobType;
-(void)executeDaemonOperationReplaceRecentlyUploadedOriginalJobType;
-(void)executeDaemonOperationDownloadPendingAssetsJobType;
-(short)placeHolderKindFromAssetMetadataType:(unsigned)arg1 ;
-(void)saveJobAssetWithPlaceholderKind:(short)arg1 ;
-(char)_parseISO6709String:(id)arg1 outLatitude:(double*)arg2 outLongitude:(double*)arg3 ;
-(unsigned)_insertionIndexForAsset:(id)arg1 inAlbum:(id)arg2 ;
-(void)_processInFlightCommentsForAsset:(id)arg1 inAlbum:(id)arg2 inPhotoLibrary:(id)arg3 ;
-(char)_processSaveAssetWithPlaceholderKind:(short)arg1 withAssetDataFilePath:(id)arg2 ;
-(char)_createPlaceHolderInSharedAlbum:(id)arg1 ;
-(short)attemptLightweightReimportAssetData;
-(MSASAssetCollection *)currentCloudAssetCollection;
-(void)setCurrentCloudAssetCollection:(MSASAssetCollection *)arg1 ;
@end


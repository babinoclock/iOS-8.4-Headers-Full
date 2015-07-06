/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:52 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Photos/PHInsertChangeRequest.h>
#import <Photos/PHUpdateChangeRequest.h>

@class PHAssetCollection, NSString, PHChangeRequestHelper, PHCollectionChangeRequestHelper, PHObjectPlaceholder, NSManagedObjectID;

@interface PHAssetCollectionChangeRequest : NSObject <PHInsertChangeRequest, PHUpdateChangeRequest> {

	PHAssetCollection* _originalAssetCollection;
	char _entitled;
	NSString* _clientName;
	int _clientProcessID;
	PHChangeRequestHelper* _helper;
	PHCollectionChangeRequestHelper* _assetsHelper;

}

@property (nonatomic,readonly) PHObjectPlaceholder * placeholderForCreatedAssetCollection; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) PHAssetCollection * originalAssetCollection;                               //@synthesize originalAssetCollection=_originalAssetCollection - In the implementation block
@property (nonatomic,readonly) PHChangeRequestHelper * helper;                                          //@synthesize helper=_helper - In the implementation block
@property (nonatomic,readonly) PHCollectionChangeRequestHelper * assetsHelper;                          //@synthesize assetsHelper=_assetsHelper - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * managedEntityName; 
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (getter=isEntitled,nonatomic,readonly) char entitled;                                         //@synthesize entitled=_entitled - In the implementation block
@property (nonatomic,readonly) NSString * clientName;                                                   //@synthesize clientName=_clientName - In the implementation block
@property (nonatomic,readonly) int clientProcessID;                                                     //@synthesize clientProcessID=_clientProcessID - In the implementation block
@property (getter=isNew,readonly) char new; 
@property (getter=isMutated,readonly) char mutated; 
+(id)changeRequestForAssetCollection:(id)arg1 assets:(id)arg2 ;
+(id)creationRequestForAssetCollectionWithTitle:(id)arg1 ;
+(void)deleteAssetCollections:(id)arg1 ;
+(id)changeRequestForAssetCollection:(id)arg1 ;
-(PHChangeRequestHelper *)helper;
-(char)isNew;
-(NSString *)managedEntityName;
-(char)isEntitled;
-(int)clientProcessID;
-(char)validateInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(char)validateMutationsToManagedObject:(id)arg1 error:(id*)arg2 ;
-(id)initWithUUID:(id)arg1 objectID:(id)arg2 ;
-(id)initWithXPCDict:(id)arg1 entitled:(char)arg2 clientName:(id)arg3 clientBundleID:(id)arg4 clientProcessID:(int)arg5 ;
-(void)encodeToXPCDict:(id)arg1 ;
-(id)initForNewObject;
-(char)canGenerateUUIDLocally;
-(char)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id*)arg3 ;
-(id)mutations;
-(void)didMutate;
-(char)isMutated;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(char)applyMutationsToManagedObject:(id)arg1 error:(id*)arg2 ;
-(id)_mutableObjectIDsAndUUIDs;
-(void)_prepareWithFetchResult:(id)arg1 ;
-(void)_prepareAssetIDsIfNeeded;
-(void)_setOriginalAssetCollection:(id)arg1 ;
-(PHCollectionChangeRequestHelper *)assetsHelper;
-(void)insertAsset:(id)arg1 inAssetsAtIndex:(unsigned)arg2 ;
-(void)removeAssetFromAssetsAtIndex:(unsigned)arg1 ;
-(void)replaceAssetInAssetsAtIndex:(unsigned)arg1 withAsset:(id)arg2 ;
-(void)moveAssetsAtIndexes:(id)arg1 toIndex:(unsigned)arg2 ;
-(PHAssetCollection *)originalAssetCollection;
-(void)setOriginalAssetCollection:(PHAssetCollection *)arg1 ;
-(void)addAsset:(id)arg1 ;
-(void)removeAsset:(id)arg1 ;
-(PHObjectPlaceholder *)placeholderForCreatedAssetCollection;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)description;
-(NSString *)title;
-(NSString *)uuid;
-(NSString *)clientName;
-(NSManagedObjectID *)objectID;
-(void)insertAssets:(id)arg1 atIndexes:(id)arg2 ;
-(void)removeAssetsAtIndexes:(id)arg1 ;
-(void)replaceAssetsAtIndexes:(id)arg1 withAssets:(id)arg2 ;
-(void)addAssets:(id)arg1 ;
-(void)removeAssets:(id)arg1 ;
@end


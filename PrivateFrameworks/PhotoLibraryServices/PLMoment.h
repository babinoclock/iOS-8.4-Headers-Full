/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:03 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLManagedObject.h>
#import <PhotoLibraryServices/PLAssetContainer.h>
#import <PhotoLibraryServices/PLMomentData_Private.h>

@class PLMomentNameInfo, NSString, NSDate, NSOrderedSet, PLMomentList, PLMomentLibrary, NSData, PLManagedAsset, NSArray, CLLocation;

@interface PLMoment : PLManagedObject <PLAssetContainer, PLMomentData_Private> {

	PLMomentNameInfo* _cachedNameInfo;
	char _loadedNameInfo;
	char isRegisteredForChanges;
	char didRegisteredWithUserInterfaceContext;

}

@property (nonatomic,retain) NSString * uuid; 
@property (nonatomic,retain) NSDate * endDate; 
@property (nonatomic,retain) NSDate * representativeDate; 
@property (nonatomic,retain) NSDate * startDate; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * title2; 
@property (nonatomic,retain) NSString * title3; 
@property (assign,nonatomic) int cachedCount; 
@property (assign,nonatomic) int cachedPhotosCount; 
@property (assign,nonatomic) int cachedVideosCount; 
@property (nonatomic,retain) NSOrderedSet * assets; 
@property (nonatomic,retain) PLMomentList * yearMomentList; 
@property (nonatomic,retain) PLMomentList * megaMomentList; 
@property (nonatomic,retain) PLMomentLibrary * momentLibrary; 
@property (nonatomic,retain) NSData * approximateLocationData; 
@property (nonatomic,retain) NSData * reverseLocationData; 
@property (assign,nonatomic) char reverseLocationDataIsValid; 
@property (assign,nonatomic) short generationType; 
@property (assign,nonatomic) char isRegisteredForChanges; 
@property (assign,nonatomic) char didRegisteredWithUserInterfaceContext; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * localizedTitle; 
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
@property (nonatomic,retain,readonly) NSObject*<NSCopying> uniqueObjectID; 
@property (nonatomic,retain) CLLocation * approximateLocation; 
@property (nonatomic,retain) NSArray * userTitles; 
+(id)entityName;
+(id)entityInManagedObjectContext:(id)arg1 ;
+(id)allMomentsRequiringAnalysisInManagedObjectContext:(id)arg1 error:(id*)arg2 ;
+(id)allMomentsInManagedObjectContext:(id)arg1 error:(id*)arg2 ;
+(id)allAssetsIncludedInMomentsInManagedObjectContext:(id)arg1 IDsOnly:(char)arg2 error:(id*)arg3 ;
+(id)allMomentsInLibrary:(id)arg1 ;
+(id)allAssetsIncludedInMomentsInLibrary:(id)arg1 ;
+(id)insertNewMomentInManagedObjectContext:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(char)isEmpty;
-(NSString *)localizedTitle;
-(char)isCloudSharedAlbum;
-(id)mutableAssets;
-(CGImageRef)posterImage;
-(id)groupURL;
-(char)canPerformEditOperation:(unsigned)arg1 ;
-(unsigned)approximateCount;
-(unsigned)assetsCount;
-(unsigned)photosCount;
-(unsigned)videosCount;
-(PLManagedAsset *)keyAsset;
-(void)setKeyAsset:(PLManagedAsset *)arg1 ;
-(PLManagedAsset *)secondaryKeyAsset;
-(void)setSecondaryKeyAsset:(PLManagedAsset *)arg1 ;
-(PLManagedAsset *)tertiaryKeyAsset;
-(void)setTertiaryKeyAsset:(PLManagedAsset *)arg1 ;
-(char)canShowComments;
-(char)canShowAvalancheStacks;
-(NSArray *)localizedLocationNames;
-(char)supportsDiagnosticInformation;
-(id)diagnosticInformation;
-(void)delete;
-(void)awakeFromInsert;
-(void)willSave;
-(char)isRegisteredForChanges;
-(void)setDidRegisteredWithUserInterfaceContext:(char)arg1 ;
-(void)registerForChanges;
-(char)didRegisteredWithUserInterfaceContext;
-(void)unregisterForChanges;
-(void)insertAssets:(id)arg1 atIndexes:(id)arg2 ;
-(void)removeAssetsAtIndexes:(id)arg1 ;
-(void)replaceAssetsAtIndexes:(id)arg1 withAssets:(id)arg2 ;
-(void)awakeFromFetch;
-(void)willTurnIntoFault;
-(void)didTurnIntoFault;
-(char)validateForInsert:(id*)arg1 ;
-(char)validateForUpdate:(id*)arg1 ;
-(NSObject*<NSCopying>)uniqueObjectID;
-(unsigned)countForAssetsOfKind:(short)arg1 ;
-(void)setIsRegisteredForChanges:(char)arg1 ;
-(CLLocation *)approximateLocation;
-(void)setUserTitles:(NSArray *)arg1 ;
-(NSArray *)userTitles;
-(void)_updateCachedNameInfoIfNeeded;
-(char)_validateForInsertOrUpdate:(id*)arg1 ;
-(void)replaceObjectInAssetsAtIndex:(unsigned)arg1 withObject:(id)arg2 ;
-(void)removeAssetsObject:(id)arg1 ;
-(void)invalidateNameInfo;
-(void)replaceAssetDataAtIndex:(unsigned)arg1 withAssetData:(id)arg2 ;
-(void)removeAssetData:(id)arg1 ;
-(void)setApproximateLocation:(CLLocation *)arg1 ;
-(void)insertObject:(id)arg1 inAssetsAtIndex:(unsigned)arg2 ;
-(void)removeObjectFromAssetsAtIndex:(unsigned)arg1 ;
-(void)addAssetsObject:(id)arg1 ;
-(void)addAssets:(id)arg1 ;
-(void)removeAssets:(id)arg1 ;
@end


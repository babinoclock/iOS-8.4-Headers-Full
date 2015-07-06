/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:35 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSCopying.h>

@class NSString, NSArray;

@interface PFUbiquityLocation : NSObject <NSCopying> {

	PFUbiquityLocation* _ubiquityRootLocation;
	NSString* _ubiquityRootLocationPath;
	int _ubiquityLocationType;
	NSString* _exportingPeerID;
	NSString* _storeName;
	NSString* _modelVersionHash;
	NSString* _filename;
	NSArray* _otherPathComponents;
	char _isDirectory;
	unsigned _hash;
	char _isRootUbiquitous;

}

@property (nonatomic,readonly) PFUbiquityLocation * ubiquityRootLocation; 
@property (nonatomic,readonly) NSString * ubiquityRootLocationPath;                                        //@synthesize ubiquityRootLocationPath=_ubiquityRootLocationPath - In the implementation block
@property (nonatomic,readonly) char isRootUbiquitous;                                                      //@synthesize isRootUbiquitous=_isRootUbiquitous - In the implementation block
@property (nonatomic,readonly) int ubiquityLocationType;                                                   //@synthesize ubiquityLocationType=_ubiquityLocationType - In the implementation block
@property (nonatomic,readonly) NSString * exportingPeerID;                                                 //@synthesize exportingPeerID=_exportingPeerID - In the implementation block
@property (nonatomic,readonly) NSString * storeName;                                                       //@synthesize storeName=_storeName - In the implementation block
@property (nonatomic,readonly) NSString * modelVersionHash;                                                //@synthesize modelVersionHash=_modelVersionHash - In the implementation block
@property (nonatomic,readonly) NSString * filename;                                                        //@synthesize filename=_filename - In the implementation block
@property (nonatomic,readonly) char usesStagingLogDirectory; 
@property (nonatomic,readonly) char usesTemporaryLogDirectory; 
@property (nonatomic,readonly) char usesCurrentBaselineDirectory; 
@property (nonatomic,readonly) char usesBaselineStagingDirectory; 
@property (nonatomic,readonly) char usesBaselineDirectory; 
@property (nonatomic,readonly) char usesNosyncDirectory; 
@property (nonatomic,readonly) unsigned hash;                                                              //@synthesize hash=_hash - In the implementation block
@property (nonatomic,readonly) NSArray * otherPathComponents;                                              //@synthesize otherPathComponents=_otherPathComponents - In the implementation block
@property (getter=isTransactionLogLocation,nonatomic,readonly) char isTransactionLogLocation; 
@property (nonatomic,readonly) char isDirectory;                                                           //@synthesize isDirectory=_isDirectory - In the implementation block
+(id)pathByTruncatingBeforeLibraryMobileDocuments:(id)arg1 ;
+(id)createPeerRootLocationForPeerID:(id)arg1 withUbiquityRootLocation:(id)arg2 ;
+(id)createVersionHashStringForModel:(id)arg1 ;
+(id)createArrayOfSubLocationsAtLocation:(id)arg1 error:(id*)arg2 ;
+(id)createUbiquityLocationForRootURL:(id)arg1 ;
+(id)createTransactionLogLocationForPeerID:(id)arg1 storeName:(id)arg2 modelVersionHash:(id)arg3 logFilename:(id)arg4 andUbiquityRootLocation:(id)arg5 ;
+(id)createUbiquityLocationForURL:(id)arg1 withUbiquityRootLocation:(id)arg2 ;
+(id)createBaselineLocation:(int)arg1 forStoreName:(id)arg2 andModelVersionHash:(id)arg3 withUbiquityRootLocation:(id)arg4 ;
+(id)createTemporaryTransactionLogLocationFromTransactionLogLocation:(id)arg1 ;
+(id)createStagingTransactionLogLocationFromTransactionLogLocation:(id)arg1 ;
+(id)createUbiquityExternalDataReferenceFileLocationForUUID:(id)arg1 andStore:(id)arg2 withUbiquityRootLocation:(id)arg3 ;
+(id)createPeerBaselineFileSafeSaveLocationForLocalPeerID:(id)arg1 andBaselineFileLocation:(id)arg2 ;
+(id)createBaselineStagingLocation:(int)arg1 forStoreName:(id)arg2 modelVersionHash:(id)arg3 andFilename:(id)arg4 withUbiquityRootLocation:(id)arg5 ;
+(id)createPeerStoreVersionLocationForPeerID:(id)arg1 storeName:(id)arg2 andModelVersionHash:(id)arg3 withUbiquityRootLocation:(id)arg4 ;
+(id)createCurrentBaselineLocation:(int)arg1 forStoreName:(id)arg2 peerID:(id)arg3 andModelVersionHash:(id)arg4 forFileNamed:(id)arg5 withUbiquityRootLocation:(id)arg6 ;
+(id)createUbiquityExternalDataReferenceStoreLocationForStoreName:(id)arg1 withUbiquityRootLocation:(id)arg2 ;
+(id)locationSentinel;
+(void)setLocationSentinel:(id)arg1 ;
+(id)createUbiquityLocationForRootPath:(id)arg1 ;
+(id)createUbiquityLocationForPath:(id)arg1 withUbiquityRootLocation:(id)arg2 ;
+(id)createTransactionLogLocationFromTemporaryOrStagingLogLocation:(id)arg1 ;
+(id)createUbiquityExternalDataReferenceFileLocationForUUID:(id)arg1 andLog:(id)arg2 ;
+(id)createPeerStoreLocationForPeerID:(id)arg1 andStoreName:(id)arg2 withUbiquityRootLocation:(id)arg3 ;
+(id)createStringByAppendingSubpath:(id)arg1 toPath:(id)arg2 ;
+(id)createUbiquityLocationForRootPath:(id)arg1 checkIsUbiquitous:(char)arg2 ;
+(id)createUbiquityLocationForPath:(id)arg1 withUbiquityRootPath:(id)arg2 ;
+(char)isUbiquityLocationPath:(id)arg1 equalToPath:(id)arg2 ;
+(id)createUbiquityExternalDataReferenceFileLocationForUUID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3 ;
+(id)localLocationSentinel;
+(id)createLocalBasePathWithLocalPeerID:(id)arg1 containerID:(id)arg2 storeName:(id)arg3 andStoreURL:(id)arg4 ;
+(id)createUbiquityLocationForURL:(id)arg1 withUbiquityRootURL:(id)arg2 ;
+(id)createUbiquityLocationForSubpath:(id)arg1 ofUbiquityRootPath:(id)arg2 ;
+(id)createMetadataRootLocationForUbiquityRootLocation:(id)arg1 ;
+(id)createMetadataStoreFileLocationForLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3 ;
+(id)createMetadataPeerLocationForLocalPeerID:(id)arg1 andUbiquityRootLocation:(id)arg2 ;
+(id)createMetadataPeerStoreLocationForLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3 ;
+(id)createMetadataUUIDLocationForLocalPeerID:(id)arg1 storeName:(id)arg2 UUID:(id)arg3 andUbiquityRootLocation:(id)arg4 ;
+(id)createPeerBaselineFileLocationForLocalPeerID:(id)arg1 andBaselineFileLocation:(id)arg2 ;
+(id)createStagingPeerStoreVersionLocationForExportingPeerID:(id)arg1 storeName:(id)arg2 andModelVersionHash:(id)arg3 withUbiquityRootLocation:(id)arg4 ;
+(id)createUbiquityPeerReceiptFileLocationForPeerWithID:(id)arg1 storeName:(id)arg2 andModelVersionHash:(id)arg3 withUbiquityRootLocation:(id)arg4 ;
+(id)createUbiquityPeerReceiptSafeSaveLocationFromReceiptFileLocation:(id)arg1 ;
+(id)createMapOfLocationsForOldManagedObjectModel:(id)arg1 andNewManagedObjectModel:(id)arg2 inUbiquityPeerStoreLocation:(id)arg3 ;
+(id)createLocalStoresPathWithLocalPeerID:(id)arg1 containerID:(id)arg2 storeName:(id)arg3 andStoreURL:(id)arg4 ;
+(id)createLocalContainerRootLocationWithLocalPeerID:(id)arg1 containerID:(id)arg2 storeName:(id)arg3 andStoreURL:(id)arg4 ;
+(void)initialize;
-(int)ubiquityLocationType;
-(NSString *)modelVersionHash;
-(char)fileExistsAtLocation;
-(NSString *)storeName;
-(PFUbiquityLocation *)ubiquityRootLocation;
-(NSString *)ubiquityRootLocationPath;
-(id)createRelativePath;
-(char)isRootUbiquitous;
-(id)createFullURL;
-(NSString *)exportingPeerID;
-(void)setExportingPeerID:(NSString *)arg1 ;
-(void)setStoreName:(NSString *)arg1 ;
-(void)setUbiquityRootLocation:(PFUbiquityLocation *)arg1 ;
-(id)createFullPath;
-(char)usesNosyncDirectory;
-(char)removeFileAtLocation:(id)arg1 error:(id*)arg2 ;
-(char)usesCurrentBaselineDirectory;
-(void)updateHash;
-(id)initWithUbiquityRootPath:(id)arg1 ;
-(void)setUbiquityRootLocationPath:(NSString *)arg1 ;
-(void)setModelVersionHash:(NSString *)arg1 ;
-(NSArray *)otherPathComponents;
-(void)setOtherPathComponents:(NSArray *)arg1 ;
-(void)setUbiquityLocationType:(int)arg1 ;
-(void)setHash:(unsigned)arg1 ;
-(void)setIsRootUbiquitous:(char)arg1 ;
-(char)usesBaselineStagingDirectory;
-(char)fileExistsAtLocationWithLocalPeerID:(id)arg1 error:(id*)arg2 ;
-(char)__isDirectory;
-(id)initWithUbiquityRootURL:(id)arg1 ;
-(char)usesStagingLogDirectory;
-(char)usesTemporaryLogDirectory;
-(char)usesBaselineDirectory;
-(char)isTransactionLogLocation;
-(char)fileAtLocationIsUploaded:(id*)arg1 ;
-(char)fileAtLocationIsDownloaded:(id*)arg1 ;
-(char)isEqualToURL:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)filename;
-(char)isDirectory;
-(void)setFilename:(NSString *)arg1 ;
@end


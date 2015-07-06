/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:22 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@class NSURL, NSString, NSDate;

@interface NSFileVersion : NSObject {

	NSURL* _fileURL;
	id _addition;
	id _deadVersionIdentifier;
	id _nonLocalVersion;
	NSURL* _contentsURL;
	char _isBackup;
	NSString* _localizedName;
	NSString* _localizedComputerName;
	NSDate* _modificationDate;
	char _isResolved;
	char _contentsURLIsAccessed;
	NSString* _clientID;
	NSString* _name;
	char _discardable;

}

@property (copy,readonly) NSString * originatorName; 
@property (readonly) unsigned long long size; 
@property (getter=isUbiquitous,readonly) char ubiquitous; 
@property (copy,readonly) NSString * originalPOSIXName; 
@property (copy,readonly) NSString * etag; 
@property (getter=_isBackup,readonly) char _isBackup; 
@property (copy,readonly) NSURL * URL; 
@property (copy,readonly) NSString * localizedName; 
@property (copy,readonly) NSString * localizedNameOfSavingComputer; 
@property (copy,readonly) NSDate * modificationDate; 
@property (retain,readonly) id<NSCoding> persistentIdentifier; 
@property (getter=isConflict,readonly) char conflict; 
@property (getter=isResolved) char resolved; 
@property (getter=isDiscardable) char discardable;                               //@synthesize discardable=_discardable - In the implementation block
@property (readonly) char hasLocalContents; 
@property (readonly) char hasThumbnail; 
+(char)removeOtherVersionsOfItemAtURL:(id)arg1 error:(id*)arg2 ;
+(id)_versionOfItemAtURL:(id)arg1 forClientID:(id)arg2 name:(id)arg3 temporaryStorageIdentifier:(id)arg4 evenIfDeleted:(char)arg5 ;
+(id)_ubiquityOnlyVersionsOfItemAtURL:(id)arg1 includeSaved:(char)arg2 ;
+(id)_otherVersionsOfItemAtURL:(id)arg1 temporaryStorageIdentifier:(id)arg2 ;
+(void)getNonlocalVersionsOfItemAtURL:(id)arg1 options:(unsigned)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)_versionOfItemAtURL:(id)arg1 forPersistentIdentifier:(id)arg2 temporaryStorageIdentifier:(id)arg3 ;
+(id)versionOfItemAtURL:(id)arg1 forPersistentIdentifier:(id)arg2 ;
+(char)_removeOtherVersionsOfItemAtURL:(id)arg1 temporaryStorageIdentifier:(id)arg2 error:(id*)arg3 ;
+(id)currentVersionOfItemAtURL:(id)arg1 ;
+(id)otherVersionsOfItemAtURL:(id)arg1 ;
+(void)getNonlocalVersionsOfItemAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)addVersionOfItemAtURL:(id)arg1 withContentsOfURL:(id)arg2 options:(unsigned)arg3 error:(id*)arg4 ;
+(id)temporaryDirectoryURLForNewVersionOfItemAtURL:(id)arg1 ;
+(id)_autosaveDirectoryURLCreateIfNecessary:(char)arg1 ;
+(char)_isTemporaryStorageRequiredForGSError:(id)arg1 andURL:(id)arg2 ;
+(id)_makeTemporaryStorageIdentifier;
+(id)_temporaryStorageLocationForIdentifier:(id)arg1 ;
+(id)_makePermanentStorageLibraryForURL:(id)arg1 temporaryStorageRequired:(char*)arg2 error:(id*)arg3 ;
+(NSObject*)_existingLibraryForURL:(id)arg1 temporaryStorageIdentifier:(id)arg2 ;
+(id)_otherVersionsOfItemAtURL:(id)arg1 temporaryStorageIdentifier:(id)arg2 withoutOptions:(unsigned long long)arg3 ;
+(NSObject*)_libraryForURL:(id)arg1 temporaryStorageIdentifier:(id*)arg2 ;
+(id)_addVersionOfItemAtURL:(id)arg1 withContentsOfURL:(id)arg2 options:(unsigned)arg3 userInfo:(id)arg4 temporaryStorageIdentifier:(id*)arg5 error:(id*)arg6 ;
+(void)discoverUbiquitousVersionsOfItemAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)_supportedGenerationalStorageClientIDs;
+(char)_permanentVersionStorageSupportedForURL:(id)arg1 temporaryStorageIdentifier:(id*)arg2 error:(id*)arg3 ;
+(id)_otherNonpurgeableVersionsOfItemAtURL:(id)arg1 temporaryStorageIdentifier:(id)arg2 ;
+(id)_addVersionOfItemAtURL:(id)arg1 withContentsOfURL:(id)arg2 options:(unsigned)arg3 temporaryStorageIdentifier:(id*)arg4 error:(id*)arg5 ;
+(id)_temporaryDirectoryURLForNewVersionOfItemAtURL:(id)arg1 temporaryStorageIdentifier:(id)arg2 ;
+(char)unresolvedConflictsExistForItemAtURL:(id)arg1 ;
+(id)versionsOfItemAtURL:(id)arg1 ;
+(char)_conflictsExistForItemAtURL:(id)arg1 ;
+(void)_markConflicts:(id)arg1 asHandledForItemAtURL:(id)arg2 ;
+(void*)_addConflictObserverForItemAtURL:(id)arg1 statusChangedHandler:(/*^block*/id)arg2 ;
+(void)_removeConflictObserver:(void*)arg1 ;
+(id)unresolvedConflictVersionsOfItemAtURL:(id)arg1 ;
+(void)_removeTemporaryDirectoryAtURL:(id)arg1 ;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(id)replaceItemAtURL:(id)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(void)setResolved:(char)arg1 ;
-(char)removeAndReturnError:(id*)arg1 ;
-(char)isDiscardable;
-(void)setDiscardable:(char)arg1 ;
-(id)_initWithFileURL:(id)arg1 library:(id)arg2 clientID:(id)arg3 name:(id)arg4 contentsURL:(id)arg5 isBackup:(char)arg6 revision:(id)arg7 ;
-(id)_initWithAddition:(id)arg1 ;
-(char)isConflict;
-(char)hasLocalContents;
-(id)_oldReplaceItemAtURL:(id)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(NSString *)localizedNameOfSavingComputer;
-(NSString *)originatorName;
-(char)_isBackup;
-(id)_documentInfo;
-(id)_initWithFileURL:(id)arg1 nonLocalVersion:(id)arg2 ;
-(char)_setDocumentInfo:(id)arg1 ;
-(void)_overrideModificationDateWithDate:(id)arg1 ;
-(char)_preserveConflictVersionLocally;
-(id)restoreOverItemAtURL:(id)arg1 error:(id*)arg2 ;
-(id<NSCoding>)persistentIdentifier;
-(void)dealloc;
-(unsigned long long)size;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSDate *)modificationDate;
-(NSString *)localizedName;
-(NSURL *)URL;
-(char)isUbiquitous;
-(NSString *)etag;
-(char)hasThumbnail;
-(NSString *)originalPOSIXName;
-(char)isResolved;
@end


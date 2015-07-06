/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:03 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLAbstractObject.h>

@protocol OS_dispatch_queue, CPLLibraryManagerDelegate, CPLResourceProgressDelegate;
@class CPLChangeSession, NSObject, CPLConfiguration, CPLStatus, CPLPlatformObject, NSURL, NSString, NSError;

@interface CPLLibraryManager : NSObject <CPLAbstractObject> {

	CPLChangeSession* _currentSession;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _sessionLock;
	char _sizeOfResourcesToUploadIsSet;
	long _configurationOnce;
	long _statusOnce;
	CPLConfiguration* _configuration;
	CPLStatus* _syncStatus;
	CPLPlatformObject* _platformObject;
	NSURL* _clientLibraryBaseURL;
	NSURL* _cloudLibraryStateStorageURL;
	NSURL* _cloudLibraryResourceStorageURL;
	NSString* _libraryIdentifier;
	NSString* _libraryVersion;
	unsigned _numberOfImagesToUpload;
	unsigned _numberOfVideosToUpload;
	unsigned _numberOfOtherItemsToUpload;
	id<CPLLibraryManagerDelegate> _delegate;
	id<CPLResourceProgressDelegate> _resourceProgressDelegate;
	unsigned _status;
	NSError* _statusError;
	unsigned _state;
	NSString* _userOverride;
	NSString* _effectiveClientBundleIdentifier;
	unsigned long long _sizeOfResourcesToUpload;

}

@property (nonatomic,copy,readonly) NSURL * clientLibraryBaseURL;                                          //@synthesize clientLibraryBaseURL=_clientLibraryBaseURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * cloudLibraryStateStorageURL;                                   //@synthesize cloudLibraryStateStorageURL=_cloudLibraryStateStorageURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * cloudLibraryResourceStorageURL;                                //@synthesize cloudLibraryResourceStorageURL=_cloudLibraryResourceStorageURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * libraryIdentifier;                                          //@synthesize libraryIdentifier=_libraryIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * libraryVersion;                                             //@synthesize libraryVersion=_libraryVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long sizeOfResourcesToUpload;                                 //@synthesize sizeOfResourcesToUpload=_sizeOfResourcesToUpload - In the implementation block
@property (nonatomic,readonly) unsigned numberOfImagesToUpload;                                            //@synthesize numberOfImagesToUpload=_numberOfImagesToUpload - In the implementation block
@property (nonatomic,readonly) unsigned numberOfVideosToUpload;                                            //@synthesize numberOfVideosToUpload=_numberOfVideosToUpload - In the implementation block
@property (nonatomic,readonly) unsigned numberOfOtherItemsToUpload;                                        //@synthesize numberOfOtherItemsToUpload=_numberOfOtherItemsToUpload - In the implementation block
@property (assign,nonatomic,__weak) id<CPLLibraryManagerDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<CPLResourceProgressDelegate> resourceProgressDelegate;              //@synthesize resourceProgressDelegate=_resourceProgressDelegate - In the implementation block
@property (nonatomic,readonly) CPLConfiguration * configuration; 
@property (nonatomic,readonly) CPLStatus * syncStatus; 
@property (assign,nonatomic) char diagnosticsEnabled; 
@property (nonatomic,readonly) unsigned status;                                                            //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) NSError * statusError;                                                      //@synthesize statusError=_statusError - In the implementation block
@property (assign,nonatomic) unsigned state;                                                               //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSString * userOverride;                                                        //@synthesize userOverride=_userOverride - In the implementation block
@property (nonatomic,copy) NSString * effectiveClientBundleIdentifier;                                     //@synthesize effectiveClientBundleIdentifier=_effectiveClientBundleIdentifier - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject;                                         //@synthesize platformObject=_platformObject - In the implementation block
+(id)platformImplementationProtocol;
+(id)stateDescriptionForState:(unsigned)arg1 ;
+(void)useCloudPhotoDaemonImplementation;
-(void)_configurationDidChange;
-(void)dealloc;
-(void)setDelegate:(id<CPLLibraryManagerDelegate>)arg1 ;
-(NSString *)description;
-(id<CPLLibraryManagerDelegate>)delegate;
-(unsigned)state;
-(void)setState:(unsigned)arg1 ;
-(void)openWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)closeWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned)status;
-(CPLConfiguration *)configuration;
-(NSURL *)cloudLibraryResourceStorageURL;
-(CPLPlatformObject *)platformObject;
-(NSURL *)clientLibraryBaseURL;
-(NSString *)libraryVersion;
-(NSString *)libraryIdentifier;
-(void)_statusDidChange;
-(void)disableSynchronizationWithReason:(id)arg1 ;
-(void)enableSynchronizationWithReason:(id)arg1 ;
-(void)disableMingling;
-(void)enableMingling;
-(void)_setLibraryVersion:(id)arg1 ;
-(void)barrier;
-(void)_closeDeactivating:(char)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)currentSession;
-(void)_setCurrentSession:(id)arg1 ;
-(void)discardCurrentSession;
-(void)_getMappedIdentifiersForIdentifiers:(id)arg1 inAreLocalIdentifiers:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)resetStatus;
-(void)noteClientReceivedNotificationOfServerChanges;
-(char)diagnosticsEnabled;
-(void)setDiagnosticsEnabled:(char)arg1 ;
-(void)getResourcesForItemWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)compactFileCacheWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)downloadOriginalsOfType:(id)arg1 localIdentifiers:(id)arg2 destinationURL:(id)arg3 progressIdentifier:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)initForManagement;
-(void)beginDownloadForResource:(id)arg1 highPriority:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getCloudIdentifiersForLocalIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getLocalIdentifiersForCloudIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)_setStatus:(unsigned)arg1 andError:(id)arg2 ;
-(void)_setSizeOfResourcesToUpload:(unsigned long long)arg1 numberOfImages:(unsigned)arg2 numberOfVideos:(unsigned)arg3 numberOfOtherItems:(unsigned)arg4 ;
-(id)addSubscriberUsingPublishingHandler:(/*^block*/id)arg1 ;
-(NSURL *)cloudLibraryStateStorageURL;
-(id<CPLResourceProgressDelegate>)resourceProgressDelegate;
-(NSError *)statusError;
-(NSString *)userOverride;
-(void)setUserOverride:(NSString *)arg1 ;
-(NSString *)effectiveClientBundleIdentifier;
-(void)setEffectiveClientBundleIdentifier:(NSString *)arg1 ;
-(void)getListOfComponentsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getStatusArrayForComponents:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cloudCacheGetDescriptionForRecordWithIdentifier:(id)arg1 related:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)cloudCacheGetDescriptionForRecordWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteResourcesIfSafe:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithClientLibraryBaseURL:(id)arg1 cloudLibraryStateStorageURL:(id)arg2 cloudLibraryResourceStorageURL:(id)arg3 libraryIdentifier:(id)arg4 ;
-(void)setResourceProgressDelegate:(id<CPLResourceProgressDelegate>)arg1 ;
-(void)deactivateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)resetCacheWithOption:(unsigned)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)startSyncSession;
-(void)getCloudCacheForRecordWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)publishResource:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)beginDownloadForResource:(id)arg1 clientBundleID:(id)arg2 highPriority:(char)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)addInfoToLog:(id)arg1 ;
-(void)getStatusForComponents:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)sizeOfResourcesToUpload;
-(unsigned)numberOfImagesToUpload;
-(unsigned)numberOfVideosToUpload;
-(void)beginPushChangeSessionWithKnownLibraryVersion:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)beginPullChangeSessionWithKnownLibraryVersion:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)takeStatisticsSnapshotSinceDate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)noteClientIsInForeground;
-(void)noteClientIsInBackground;
-(unsigned)numberOfOtherItemsToUpload;
-(CPLStatus *)syncStatus;
-(void)removeCloudLibraryWithCompletionHandler:(/*^block*/id)arg1 ;
@end


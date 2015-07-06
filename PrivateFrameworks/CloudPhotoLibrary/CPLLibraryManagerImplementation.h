/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:04 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CPLLibraryManagerImplementation <CPLPlatformImplementation>
@optional
-(void)barrier;
-(void)getResourcesForItemWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)compactFileCacheWithCompletionHandler:(/*^block*/id)arg1;
-(void)downloadOriginalsOfType:(id)arg1 localIdentifiers:(id)arg2 destinationURL:(id)arg3 progressIdentifier:(id)arg4 completionHandler:(/*^block*/id)arg5;
-(void)getListOfComponentsWithCompletionHandler:(/*^block*/id)arg1;
-(void)getStatusArrayForComponents:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)cloudCacheGetDescriptionForRecordWithIdentifier:(id)arg1 related:(char)arg2 completionHandler:(/*^block*/id)arg3;
-(void)deleteResourcesIfSafe:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)resetCacheWithOption:(unsigned)arg1 completionHandler:(/*^block*/id)arg2;
-(void)getCloudCacheForRecordWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)addInfoToLog:(id)arg1;
-(void)getStatusForComponents:(id)arg1 completionHandler:(/*^block*/id)arg2;

@required
-(void)openWithCompletionHandler:(/*^block*/id)arg1;
-(void)closeWithCompletionHandler:(/*^block*/id)arg1;
-(void)disableSynchronizationWithReason:(id)arg1;
-(void)enableSynchronizationWithReason:(id)arg1;
-(void)getMappedIdentifiersForIdentifiers:(id)arg1 inAreLocalIdentifiers:(char)arg2 completionHandler:(/*^block*/id)arg3;
-(void)resetStatus;
-(void)noteClientReceivedNotificationOfServerChanges;
-(char)diagnosticsEnabled;
-(void)setDiagnosticsEnabled:(char)arg1;
-(void)deactivateWithCompletionHandler:(/*^block*/id)arg1;
-(void)startSyncSession;
-(void)publishResource:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)beginDownloadForResource:(id)arg1 clientBundleID:(id)arg2 highPriority:(char)arg3 completionHandler:(/*^block*/id)arg4;
-(void)takeStatisticsSnapshotSinceDate:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)noteClientIsInForeground;
-(void)noteClientIsInBackground;
-(void)removeCloudLibraryWithCompletionHandler:(/*^block*/id)arg1;

@end


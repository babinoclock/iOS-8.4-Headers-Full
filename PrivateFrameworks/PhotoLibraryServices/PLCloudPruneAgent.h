/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:03 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLCloudScenarioProducer.h>

@protocol OS_dispatch_queue;
@class NSObject, PLPhotoLibrary, PLCloudPhotoLibraryManager;

@interface PLCloudPruneAgent : PLCloudScenarioProducer {

	long _lastPruneRequest;
	NSObject*<OS_dispatch_queue> _agentQueue;
	SCD_Struct_PL14 _walkStatus[5];
	PLPhotoLibrary* _localLibrary;
	PLCloudPhotoLibraryManager* _remoteLibrary;

}

@property (retain) PLPhotoLibrary * localLibrary;                           //@synthesize localLibrary=_localLibrary - In the implementation block
@property (retain) PLCloudPhotoLibraryManager * remoteLibrary;              //@synthesize remoteLibrary=_remoteLibrary - In the implementation block
-(void)dealloc;
-(id)init;
-(void)activate;
-(unsigned)batchSize;
-(PLCloudPhotoLibraryManager *)remoteLibrary;
-(PLPhotoLibrary *)localLibrary;
-(int)typeToIndex:(unsigned)arg1 ;
-(void)cplResourcesForFetchRequest:(id)arg1 ofType:(unsigned)arg2 startingAtOffset:(unsigned)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)systemStarted:(id)arg1 ;
-(void)appInForeground:(id)arg1 ;
-(void)setLocalLibrary:(PLPhotoLibrary *)arg1 ;
-(void)setRemoteLibrary:(PLCloudPhotoLibraryManager *)arg1 ;
-(void)resetWalkStatus;
-(char)spaceAvailable:(long long*)arg1 totalSpace:(long long*)arg2 ;
-(char)pruningEnabled;
-(void)_beginPruningResourcesOfType:(unsigned)arg1 withFetchRequest:(id)arg2 startingAtOffset:(unsigned)arg3 then:(/*^block*/id)arg4 ;
-(void)pruneResources:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)beginPruningResourcesOfType:(unsigned)arg1 withFetchRequest:(id)arg2 then:(/*^block*/id)arg3 ;
-(void)pruneOlderMediums;
-(void)pruneResourcesOfType:(unsigned)arg1 createdBeforeDate:(id)arg2 then:(/*^block*/id)arg3 ;
-(void)pruneOlderOriginals;
-(void)pruneResourcesOfType:(unsigned)arg1 then:(/*^block*/id)arg2 ;
-(void)standardPruningKick:(id)arg1 ;
-(void)settingsChanged:(id)arg1 ;
-(void)cacheDeleteRequestReceived:(id)arg1 ;
-(void)pruneResources;
-(void)emergencyPrune;
@end


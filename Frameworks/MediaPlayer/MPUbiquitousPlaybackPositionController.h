/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:38 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, SBCPlaybackPositionSyncService, SBCPlaybackPositionDomain;

@interface MPUbiquitousPlaybackPositionController : NSObject {

	char _databaseHasBookmarkableContents;
	char _isServiceActive;
	char _externallyActive;
	char _beganUsingPlaybackPositionMetadata;
	char _applicationBecomingActive;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _serviceQueue;
	SBCPlaybackPositionSyncService* _uppServiceProxy;
	SBCPlaybackPositionDomain* _uppDomain;

}

@property (assign,nonatomic) char externallyActive;                                                       //@synthesize externallyActive=_externallyActive - In the implementation block
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> queue;                                 //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> serviceQueue;                          //@synthesize serviceQueue=_serviceQueue - In the implementation block
@property (nonatomic,retain) SBCPlaybackPositionSyncService * uppServiceProxy;                            //@synthesize uppServiceProxy=_uppServiceProxy - In the implementation block
@property (nonatomic,retain) SBCPlaybackPositionDomain * uppDomain;                                       //@synthesize uppDomain=_uppDomain - In the implementation block
@property (assign,getter=isServiceActive,nonatomic) char serviceActive;                                   //@synthesize isServiceActive=_isServiceActive - In the implementation block
@property (assign,getter=isServiceActive,nonatomic) char beganUsingPlaybackPositionMetadata;              //@synthesize beganUsingPlaybackPositionMetadata=_beganUsingPlaybackPositionMetadata - In the implementation block
@property (assign,nonatomic) char databaseHasBookmarkableContents;                                        //@synthesize databaseHasBookmarkableContents=_databaseHasBookmarkableContents - In the implementation block
@property (nonatomic,readonly) char applicationBecomingActive;                                            //@synthesize applicationBecomingActive=_applicationBecomingActive - In the implementation block
+(id)sharedUbiquitousPlaybackPositionController;
-(void)_applicationDidEnterBackgroundNotification:(id)arg1 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(void)_mediaLibraryDidChangeNotification:(id)arg1 ;
-(void)noteChangedPlaybackPositionMetadataForTrackPersistentID:(long long)arg1 isCheckpoint:(char)arg2 ;
-(void)_defaultMediaLibraryDidChangeNotification:(id)arg1 ;
-(void)_applicationDidEnterForegroundNotification:(id)arg1 ;
-(void)_onServiceQueue_updateBoomkarkabilityState;
-(id)_onServiceQueue_connectedUPPServiceProxy;
-(void)_onServiceQueue_resignActiveService;
-(void)_onServiceQueue_updateActiveServiceIfNeeded;
-(char)_onQueue_shouldBeActive;
-(void)_onServiceQueue_becomeActiveService;
-(char)_onQueue_isEnabled;
-(id)_playbackPositionEntityWithValuesFromMusicLibraryTrackPersistentID:(long long)arg1 ;
-(void)_onServiceQueue_setDatabaseHasBookmarkableContents:(char)arg1 ;
-(SBCPlaybackPositionSyncService *)uppServiceProxy;
-(void)setDatabaseHasBookmarkableContents:(char)arg1 ;
-(void)beginUsingPlaybackPositionMetadata;
-(void)setExternallyActive:(char)arg1 ;
-(char)externallyActive;
-(char)databaseHasBookmarkableContents;
-(char)isServiceActive;
-(char)isServiceActive;
-(void)setServiceActive:(char)arg1 ;
-(NSObject*<OS_dispatch_queue>)serviceQueue;
-(void)setUppServiceProxy:(SBCPlaybackPositionSyncService *)arg1 ;
-(SBCPlaybackPositionDomain *)uppDomain;
-(void)setUppDomain:(SBCPlaybackPositionDomain *)arg1 ;
-(void)setBeganUsingPlaybackPositionMetadata:(char)arg1 ;
-(char)applicationBecomingActive;
-(void)dealloc;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
@end


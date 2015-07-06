/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:38 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPAVRoutingControllerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, MPAVRoutingController, AVPlayerItem, MPAVRoute, AVQueuePlayer, NSMutableArray, NSError, NSArray, AVPlayer, NSString;

@interface MPQueuePlayer : NSObject <MPAVRoutingControllerDelegate> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	MPAVRoutingController* _routingController;
	AVPlayerItem* _currentItem;
	SCD_Struct_MP9 _currentTime;
	char _isExternalPlaybackActive;
	char _pausedForPlaybackQueueTransaction;
	MPAVRoute* _lastPickedRoute;
	/*^block*/id _playbackQueueCommitHandler;
	int _playbackQueueTransactionCount;
	AVQueuePlayer* _player;
	NSMutableArray* _queuedOperations;
	float _rate;
	float _rateBeforePlaybackQueueTransaction;
	char _routeDidChangeDuringPlaybackQueueTransaction;
	int _status;
	int _defaultItemEQPresetType;
	char _outputObscuredDueToInsufficientExternalProtection;

}

@property (nonatomic,readonly) int status; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) float playerRate; 
@property (assign,nonatomic) float rate; 
@property (assign,nonatomic) int actionAtItemEnd; 
@property (assign,getter=isClosedCaptionDisplayEnabled,nonatomic) char closedCaptionDisplayEnabled; 
@property (assign,nonatomic) char allowsExternalPlayback; 
@property (getter=isExternalPlaybackActive,nonatomic,readonly) char externalPlaybackActive; 
@property (assign,nonatomic) char usesExternalPlaybackWhileExternalScreenIsActive; 
@property (assign,nonatomic) char usesAudioOnlyModeForExternalPlayback; 
@property (nonatomic,readonly) int externalPlaybackType; 
@property (assign,nonatomic) int defaultItemEQPresetType;                                                        //@synthesize defaultItemEQPresetType=_defaultItemEQPresetType - In the implementation block
@property (nonatomic,readonly) char outputObscuredDueToInsufficientExternalProtection; 
@property (nonatomic,readonly) AVPlayerItem * currentItem; 
@property (nonatomic,copy) id playbackQueueCommitHandler;                                                        //@synthesize playbackQueueCommitHandler=_playbackQueueCommitHandler - In the implementation block
@property (nonatomic,readonly) char isPlaybackQueueTransactionActive; 
@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,readonly) AVPlayer * _player; 
@property (nonatomic,readonly) int _externalProtectionStatus; 
@property (nonatomic,copy) NSString * externalPlaybackVideoGravity; 
@property (nonatomic,readonly) id playerAVAudioSession; 
@property (assign,nonatomic) char disallowsAMRAudio; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AVPlayer *)_player;
-(void)play;
-(char)disallowsAMRAudio;
-(void)setDisallowsAMRAudio:(char)arg1 ;
-(void)setActionAtItemEnd:(int)arg1 ;
-(void)_setEQPreset:(int)arg1 ;
-(void)_setStoppingFadeOutDuration:(float)arg1 ;
-(id)addPeriodicTimeObserverForInterval:(SCD_Struct_MP9)arg1 queue:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)addBoundaryTimeObserverForTimes:(id)arg1 queue:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(char)isClosedCaptionDisplayEnabled;
-(float)playerRate;
-(char)usesExternalPlaybackWhileExternalScreenIsActive;
-(float)_userVolume;
-(void)_setUserVolume:(float)arg1 ;
-(void)setUsesAudioOnlyModeForExternalPlayback:(char)arg1 ;
-(NSString *)externalPlaybackVideoGravity;
-(id)playerAVAudioSession;
-(void)setExternalPlaybackVideoGravity:(NSString *)arg1 ;
-(void)seekToTime:(SCD_Struct_MP9)arg1 toleranceBefore:(SCD_Struct_MP9)arg2 toleranceAfter:(SCD_Struct_MP9)arg3 ;
-(char)_CALayerDestinationIsTVOut;
-(void)_setCALayerDestinationIsTVOut:(char)arg1 ;
-(void)_setPreferredLanguageList:(id)arg1 ;
-(void)_setPreparesItemsForPlaybackAsynchronously:(char)arg1 ;
-(int)actionAtItemEnd;
-(char)_resumePlayback:(double)arg1 error:(id*)arg2 ;
-(void)_setExpectedAssetTypes:(id)arg1 ;
-(char)outputObscuredDueToInsufficientExternalProtection;
-(char)usesAudioOnlyModeForExternalPlayback;
-(void)beginPlaybackQueueTransactionAndPause:(char)arg1 ;
-(void)setCurrentPlaybackQueueTransactionDisplayTime:(SCD_Struct_MP9)arg1 ;
-(void)commitPlaybackQueueTransaction;
-(int)defaultItemEQPresetType;
-(void)insertItem:(id)arg1 afterItem:(id)arg2 ;
-(void)removeAllItems;
-(void)_setWantsVolumeChangesWhenPausedOrInactive:(char)arg1 ;
-(void)advanceToNextItem;
-(int)_externalProtectionStatus;
-(void)prepareItem:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setMediaSelectionCriteria:(id)arg1 forMediaCharacteristic:(id)arg2 ;
-(void)setDefaultItemEQPresetType:(int)arg1 ;
-(char)isPlaybackQueueTransactionActive;
-(id)playbackQueueCommitHandler;
-(void)setPlaybackQueueCommitHandler:(id)arg1 ;
-(void)routingControllerAvailableRoutesDidChange:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSArray *)items;
-(AVPlayerItem *)currentItem;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)removeItem:(id)arg1 ;
-(void)pause;
-(int)status;
-(NSError *)error;
-(float)rate;
-(void)setRate:(float)arg1 ;
-(void)_setClientName:(id)arg1 ;
-(void)removeTimeObserver:(id)arg1 ;
-(void)setAllowsExternalPlayback:(char)arg1 ;
-(SCD_Struct_MP9)currentTime;
-(void)setClosedCaptionDisplayEnabled:(char)arg1 ;
-(char)isExternalPlaybackActive;
-(char)allowsExternalPlayback;
-(void)setUsesExternalPlaybackWhileExternalScreenIsActive:(char)arg1 ;
-(void)seekToTime:(SCD_Struct_MP9)arg1 ;
-(int)externalPlaybackType;
@end


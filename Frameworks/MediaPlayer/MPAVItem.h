/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:33 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPAVMetadataItem.h>

@protocol OS_dispatch_queue, MPAVItemPlaylistIdentifier, MPAVItemQueueIdentifier;
@class AVAsset, NSObject, AVPlayerItem, MPQueueFeeder, MPAVController, NSArray, MPAlternateTracks, NSError, NSString, MPMediaItem, MPUContentItemIdentifierCollection, NSData, MPStoreDownload, AVPlayerItemAccessLog, NSURL, MPAlternateTextTrack;

@interface MPAVItem : NSObject <MPAVMetadataItem> {

	AVAsset* _asset;
	NSObject*<OS_dispatch_queue> _assetQueue;
	AVPlayerItem* _avPlayerItem;
	char _isAssetLoaded;
	MPQueueFeeder* _feeder;
	MPAVController* _player;
	float _soundCheckVolumeNormalization;
	NSArray* _chapterTimeMarkers;
	NSArray* _artworkTimeMarkers;
	NSArray* _urlTimeMarkers;
	NSArray* _closedCaptionTimeMarkers;
	MPAlternateTracks* _alternateTracks;
	double _cachedDuration;
	double _cachedPlayableDuration;
	NSArray* _cachedSeekableTimeRanges;
	double _seekableTimeRangesCacheTime;
	unsigned _type;
	float _defaultPlaybackRate;
	unsigned _advancedDuringPlayback : 1;
	unsigned _handledFinishTime : 1;
	unsigned _hasPlayedThisSession : 1;
	unsigned _wasCountedAsSkipped : 1;
	unsigned _isStreamable : 2;
	unsigned _watchingAttributes : 1;
	unsigned _userChangedItemsDuringPlayback : 1;
	unsigned _lyricsAvailable : 1;
	unsigned _timeMarkersNeedLoading : 1;
	NSObject*<OS_dispatch_queue> _accessQueue;
	char _hasPostedNaturalSizeChange;
	char _hasRegisteredForCaptionsAppearanceChanged;
	char _hasValidPlayerItemDuration;
	int _likedState;
	char _limitReadAhead;
	SCD_Struct_MP9 _playerItemDuration;
	char _didAttemptToLoadAsset;
	char _canReusePlayerItem;
	char _likedStateEnabled;
	char _supportsLikedState;
	char _allowsAirPlayFromCloud;
	char _allowsExternalPlayback;
	float _currentPlaybackRate;
	NSError* _assetError;
	id<MPAVItemPlaylistIdentifier> _playlistIdentifier;
	id<MPAVItemQueueIdentifier> _queueIdentifier;
	unsigned _indexInQueueFeeder;
	NSArray* _buyOffers;
	NSString* _copyrightText;
	MPMediaItem* _mediaItem;
	float _loudnessInfoVolumeNormalization;
	long long _albumStoreID;
	long long _storeItemInt64ID;
	long long _storeSubscriptionAdamID;

}

@property (nonatomic,readonly) MPUContentItemIdentifierCollection * MPU_contentItemIdentifierCollection; 
@property (nonatomic,copy,readonly) NSString * mpuReporting_externalID; 
@property (nonatomic,readonly) char mpuReporting_isValidReportingItem; 
@property (nonatomic,readonly) unsigned mpuReporting_itemType; 
@property (nonatomic,copy,readonly) NSData * mpuReporting_jingleTimedMetadata; 
@property (nonatomic,readonly) char mpuReporting_shouldReportPlayEventsToStore; 
@property (nonatomic,readonly) char mpuReporting_shouldUseRelativeTimePositions; 
@property (nonatomic,copy,readonly) NSString * mpuReporting_storeItemID; 
@property (nonatomic,copy,readonly) NSData * mpuReporting_trackInfo; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<MPAVItemPlaylistIdentifier> playlistIdentifier; 
@property (nonatomic,readonly) char isStreamingLowQualityAsset; 
@property (nonatomic,readonly) char usesSubscriptionLease; 
@property (nonatomic,readonly) MPStoreDownload * storeDownload; 
@property (nonatomic,readonly) AVAsset * asset; 
@property (nonatomic,retain) AVPlayerItem * playerItem; 
@property (nonatomic,retain) NSError * assetError;                                                                                //@synthesize assetError=_assetError - In the implementation block
@property (nonatomic,retain) id<MPAVItemPlaylistIdentifier> playlistIdentifier;                                                   //@synthesize playlistIdentifier=_playlistIdentifier - In the implementation block
@property (nonatomic,retain) id<MPAVItemQueueIdentifier> queueIdentifier;                                                         //@synthesize queueIdentifier=_queueIdentifier - In the implementation block
@property (nonatomic,readonly) char didAttemptToLoadAsset;                                                                        //@synthesize didAttemptToLoadAsset=_didAttemptToLoadAsset - In the implementation block
@property (assign) char isAssetLoaded;                                                                                            //@synthesize isAssetLoaded=_isAssetLoaded - In the implementation block
@property (nonatomic,readonly) char canReusePlayerItem;                                                                           //@synthesize canReusePlayerItem=_canReusePlayerItem - In the implementation block
@property (nonatomic,readonly) int status; 
@property (nonatomic,readonly) char isAlwaysLive; 
@property (assign,nonatomic) double playbackCheckpointCurrentTime; 
@property (assign,nonatomic) char userAdvancedDuringPlayback; 
@property (assign,nonatomic) char userChangedItemsDuringPlayback; 
@property (assign,nonatomic) char userSkippedPlayback; 
@property (assign,nonatomic,__weak) MPQueueFeeder * feeder;                                                                       //@synthesize feeder=_feeder - In the implementation block
@property (assign,nonatomic) unsigned indexInQueueFeeder;                                                                         //@synthesize indexInQueueFeeder=_indexInQueueFeeder - In the implementation block
@property (assign,nonatomic,__weak) MPAVController * player;                                                                      //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) char hasPlayedThisSession; 
@property (nonatomic,readonly) AVPlayerItemAccessLog * accessLog; 
@property (nonatomic,readonly) double currentTimeDisplayOverride; 
@property (assign,nonatomic) float defaultPlaybackRate;                                                                           //@synthesize defaultPlaybackRate=_defaultPlaybackRate - In the implementation block
@property (nonatomic,retain) NSArray * chapterTimeMarkers;                                                                        //@synthesize chapterTimeMarkers=_chapterTimeMarkers - In the implementation block
@property (nonatomic,retain) NSArray * artworkTimeMarkers;                                                                        //@synthesize artworkTimeMarkers=_artworkTimeMarkers - In the implementation block
@property (nonatomic,retain) NSArray * urlTimeMarkers;                                                                            //@synthesize urlTimeMarkers=_urlTimeMarkers - In the implementation block
@property (nonatomic,retain) NSArray * closedCaptionTimeMarkers; 
@property (nonatomic,readonly) char useEmbeddedChapterData; 
@property (nonatomic,readonly) unsigned type; 
@property (nonatomic,readonly) int customAVEQPreset; 
@property (nonatomic,readonly) char allowsEQ; 
@property (nonatomic,readonly) MPAlternateTracks * alternateTracks;                                                               //@synthesize alternateTracks=_alternateTracks - In the implementation block
@property (nonatomic,readonly) NSString * displayableText; 
@property (nonatomic,readonly) char displayableTextLoaded; 
@property (nonatomic,readonly) char hasDisplayableText; 
@property (nonatomic,readonly) NSString * album; 
@property (nonatomic,readonly) long long albumStoreID;                                                                            //@synthesize albumStoreID=_albumStoreID - In the implementation block
@property (nonatomic,readonly) NSString * artist; 
@property (nonatomic,readonly) NSString * albumArtist; 
@property (nonatomic,readonly) unsigned albumTrackNumber; 
@property (nonatomic,readonly) unsigned albumTrackCount; 
@property (nonatomic,copy,readonly) NSArray * buyOffers;                                                                          //@synthesize buyOffers=_buyOffers - In the implementation block
@property (nonatomic,readonly) char canSeedGenius; 
@property (nonatomic,readonly) NSString * composer; 
@property (nonatomic,copy,readonly) NSString * copyrightText;                                                                     //@synthesize copyrightText=_copyrightText - In the implementation block
@property (nonatomic,readonly) unsigned discNumber; 
@property (nonatomic,readonly) unsigned discCount; 
@property (getter=isExplicitTrack,nonatomic,readonly) char explicitTrack; 
@property (nonatomic,readonly) NSString * genre; 
@property (nonatomic,readonly) char isCloudItem; 
@property (assign,nonatomic) int likedState; 
@property (getter=isLikedStateEnabled,nonatomic,readonly) char likedStateEnabled;                                                 //@synthesize likedStateEnabled=_likedStateEnabled - In the implementation block
@property (nonatomic,readonly) char supportsLikedState;                                                                           //@synthesize supportsLikedState=_supportsLikedState - In the implementation block
@property (nonatomic,readonly) NSString * lyrics; 
@property (nonatomic,readonly) NSString * mainTitle; 
@property (nonatomic,readonly) NSURL * podcastURL; 
@property (getter=isStreamable,nonatomic,readonly) char streamable; 
@property (nonatomic,readonly) unsigned long long persistentID; 
@property (nonatomic,readonly) NSString * storeItemID; 
@property (nonatomic,readonly) long long storeItemInt64ID;                                                                        //@synthesize storeItemInt64ID=_storeItemInt64ID - In the implementation block
@property (nonatomic,readonly) long long storeSubscriptionAdamID;                                                                 //@synthesize storeSubscriptionAdamID=_storeSubscriptionAdamID - In the implementation block
@property (nonatomic,readonly) float userRating; 
@property (nonatomic,readonly) char supportsRewindAndFastForward15Seconds; 
@property (nonatomic,readonly) char supportsSettingCurrentTime; 
@property (nonatomic,readonly) char durationIsValid; 
@property (nonatomic,readonly) double durationIfAvailable; 
@property (nonatomic,readonly) double durationFromExternalMetadata; 
@property (nonatomic,readonly) double playableDuration; 
@property (nonatomic,readonly) double playableDurationIfAvailable; 
@property (nonatomic,readonly) double timeOfSeekableStart; 
@property (nonatomic,readonly) double timeOfSeekableEnd; 
@property (nonatomic,readonly) CGSize naturalSize; 
@property (nonatomic,readonly) NSArray * timedMetadataIfAvailable; 
@property (nonatomic,retain,readonly) MPMediaItem * mediaItem;                                                                    //@synthesize mediaItem=_mediaItem - In the implementation block
@property (assign,nonatomic) float loudnessInfoVolumeNormalization;                                                               //@synthesize loudnessInfoVolumeNormalization=_loudnessInfoVolumeNormalization - In the implementation block
@property (assign,nonatomic) float soundCheckVolumeNormalization;                                                                 //@synthesize soundCheckVolumeNormalization=_soundCheckVolumeNormalization - In the implementation block
@property (nonatomic,readonly) char supportsSkip; 
@property (nonatomic,readonly) NSString * localizedPositionInPlaylistString; 
@property (nonatomic,readonly) char isAd; 
@property (nonatomic,readonly) SCD_Struct_MP9 duration; 
@property (assign,nonatomic) SCD_Struct_MP9 forwardPlaybackEndTime; 
@property (nonatomic,readonly) CGSize presentationSize; 
@property (nonatomic,retain) MPAlternateTextTrack * selectedAlternateTextTrack; 
@property (nonatomic,readonly) char allowsAirPlayFromCloud;                                                                       //@synthesize allowsAirPlayFromCloud=_allowsAirPlayFromCloud - In the implementation block
@property (nonatomic,readonly) char allowsExternalPlayback;                                                                       //@synthesize allowsExternalPlayback=_allowsExternalPlayback - In the implementation block
@property (nonatomic,copy,readonly) NSString * aggregateDictionaryItemIdentifier; 
@property (assign,setter=_setCurrentPlaybackRate:,getter=_currentPlaybackRate,nonatomic) float _currentPlaybackRate;              //@synthesize currentPlaybackRate=_currentPlaybackRate - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MP9 _playerItemDurationIfAvailable; 
@property (assign,nonatomic) char limitReadAhead; 
+(unsigned)defaultScaleMode;
+(void)setDefaultScaleMode:(unsigned)arg1 ;
+(id)URLFromPath:(id)arg1 ;
+(void)applyVolumeNormalizationForQueuedItems:(id)arg1 ;
-(MPUContentItemIdentifierCollection *)MPU_contentItemIdentifierCollection;
-(char)mpuReporting_isValidReportingItem;
-(unsigned)mpuReporting_itemType;
-(char)mpuReporting_shouldReportPlayEventsToStore;
-(NSData *)mpuReporting_trackInfo;
-(NSData *)mpuReporting_jingleTimedMetadata;
-(char)mpuReporting_shouldUseRelativeTimePositions;
-(NSString *)mpuReporting_storeItemID;
-(NSString *)mpuReporting_externalID;
-(void)setPlayerItem:(AVPlayerItem *)arg1 ;
-(double)playableDuration;
-(id)initWithPlayerItem:(id)arg1 ;
-(AVPlayerItem *)playerItem;
-(void)setDefaultPlaybackRate:(float)arg1 ;
-(MPQueueFeeder *)feeder;
-(id<MPAVItemQueueIdentifier>)queueIdentifier;
-(double)timeOfSeekableEnd;
-(double)timeOfSeekableStart;
-(float)_currentPlaybackRate;
-(MPAlternateTracks *)alternateTracks;
-(char)limitReadAhead;
-(void)setLimitReadAhead:(char)arg1 ;
-(char)isAssetLoaded;
-(void)setAlternateAudioTrackID:(int)arg1 ;
-(MPAlternateTextTrack *)selectedAlternateTextTrack;
-(void)setSelectedAlternateTextTrack:(MPAlternateTextTrack *)arg1 ;
-(void)setOverrideDuration:(double)arg1 ;
-(void)_loadAssetProperties;
-(void)setupPlaybackInfo;
-(void)_internalLikedStateDidChangeNotification:(id)arg1 ;
-(void)_setListeningForCaptionsAppearanceSettingsChanged:(char)arg1 ;
-(void)loadAssetAndPlayerItem;
-(void)setIsAssetLoaded:(char)arg1 ;
-(void)_updateSoundCheckVolumeNormalizationForPlayerItem;
-(void)_loadAssetAndPlayerItem;
-(void)_playerItemNewAccessLogEntryNotification:(id)arg1 ;
-(void)_checkAllowsBlockingDurationCall;
-(double)_durationInSeconds;
-(NSString *)displayableText;
-(int)_persistedLikedState;
-(float)defaultPlaybackRate;
-(SCD_Struct_MP9)forwardPlaybackEndTime;
-(void)setForwardPlaybackEndTime:(SCD_Struct_MP9)arg1 ;
-(void)_likedStateDidChange;
-(void)_handleUpdatedLikedState:(int)arg1 completion:(/*^block*/id)arg2 ;
-(long long)storeItemInt64ID;
-(char)useEmbeddedChapterData;
-(void)_releaseAllTimeMarkers;
-(void)setChapterTimeMarkers:(NSArray *)arg1 ;
-(void)setArtworkTimeMarkers:(NSArray *)arg1 ;
-(void)setUrlTimeMarkers:(NSArray *)arg1 ;
-(void)_loadTimeMarkersBlocking;
-(void)_loadTimeMarkersAsync;
-(NSArray *)chapterTimeMarkers;
-(id)_timeMarkerFromMarkers:(id)arg1 forTime:(double)arg2 ;
-(NSArray *)artworkTimeMarkers;
-(NSArray *)urlTimeMarkers;
-(NSArray *)closedCaptionTimeMarkers;
-(double)durationFromExternalMetadata;
-(id)_seekableTimeRanges;
-(double)_durationFromExternalMetadataIfAvailable;
-(double)_playableDurationForLoadedTimeRanges:(id)arg1 ;
-(char)hasDisplayableText;
-(void)setSoundCheckVolumeNormalization:(float)arg1 ;
-(int)customAVEQPreset;
-(char)allowsEQ;
-(void)_itemAttributeAvailableKey:(id)arg1 ;
-(void)_currentPlaybackRateDidChange:(float)arg1 ;
-(void)_captionAppearanceSettingsChanged;
-(id)_imageChapterTrackIDsForAsset:(id)arg1 ;
-(char)isSupportedDefaultPlaybackSpeed:(unsigned)arg1 ;
-(void)flushNowPlayingCaches;
-(void)resetBookkeeping;
-(void)setPlaybackStoppedTime:(double)arg1 ;
-(void)notePlaybackFinishedByHittingEnd;
-(double)playbackCheckpointCurrentTime;
-(void)setPlaybackCheckpointCurrentTime:(double)arg1 ;
-(void)setPlaybackFinishedTime:(double)arg1 ;
-(int)subtitleTrackID;
-(void)setSubtitleTrackID:(int)arg1 ;
-(void)setUserAdvancedDuringPlayback:(char)arg1 ;
-(void)setUserChangedItemsDuringPlayback:(char)arg1 ;
-(void)setUserSkippedPlayback:(char)arg1 ;
-(char)userAdvancedDuringPlayback;
-(char)userSkippedPlayback;
-(char)userChangedItemsDuringPlayback;
-(double)durationInSeconds;
-(NSString *)albumArtist;
-(unsigned)albumTrackNumber;
-(unsigned)albumTrackCount;
-(void)applyVolumeNormalizationWithSoundCheckEnabled:(char)arg1 ;
-(char)canSeedGenius;
-(unsigned)discCount;
-(char)isCloudItem;
-(char)isValidPlayerSubstituteForItem:(id)arg1 ;
-(char)isAssetURLValid;
-(char)isExplicitTrack;
-(double)currentTimeDisplayOverride;
-(char)displayableTextLoaded;
-(char)hasAlternatesForTypes:(unsigned)arg1 ;
-(unsigned)alternatesCountForTypes:(unsigned)arg1 ;
-(char)hasDataForItemArtwork;
-(char)hasPlayedThisSession;
-(id)inBandAlternateTextTracks;
-(char)isAd;
-(char)isAlwaysLive;
-(char)isStreamable;
-(NSString *)mainTitle;
-(NSURL *)podcastURL;
-(float)playbackRateForLevel:(unsigned)arg1 direction:(int)arg2 paused:(char)arg3 ;
-(void)prepareForRate:(float)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)replaceOutOfBandAlternateTextTracksWithArray:(id)arg1 ;
-(void)setFeeder:(MPQueueFeeder *)arg1 ;
-(float)scanIntervalForLevel:(unsigned)arg1 paused:(char)arg2 ;
-(void)setHasPlayedThisSession:(char)arg1 ;
-(NSString *)storeItemID;
-(char)supportsRewindAndFastForward15Seconds;
-(char)supportsSkip;
-(char)supportsSettingCurrentTime;
-(void)_realoadEmbeddedTimeMarkers;
-(NSArray *)timedMetadataIfAvailable;
-(id)titlesForTime:(double)arg1 ;
-(void)setClosedCaptionTimeMarkers:(NSArray *)arg1 ;
-(id)chapterTimeMarkerForTime:(double)arg1 ;
-(id)artworkTimeMarkerForTime:(double)arg1 ;
-(id)urlTimeMarkerForTime:(double)arg1 ;
-(id)closedCaptionTimeMarkerForTime:(double)arg1 ;
-(id)localizedAttributedPositionInPlaylistStringWithRegularTextAttributes:(id)arg1 emphasizedTextAttributes:(id)arg2 ;
-(NSString *)localizedPositionInPlaylistString;
-(char)durationIsValid;
-(double)durationIfAvailable;
-(double)playableDurationIfAvailable;
-(SCD_Struct_MP9)_playerItemDurationIfAvailable;
-(/*^block*/id)blockForDirectAVControllerNotificationReferencingItem:(id)arg1 ;
-(void)_clearAsset;
-(NSString *)aggregateDictionaryItemIdentifier;
-(void)setupEQPresetWithDefaultPreset:(int)arg1 ;
-(void)_loadMediaItemWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_setCurrentPlaybackRate:(float)arg1 ;
-(void)_setNeedsPersistedLikedStateUpdate;
-(id)localeForAssetTrack:(id)arg1 ;
-(void)reevaluateType;
-(void)replacePlayerItemWithPlayerItem:(id)arg1 ;
-(void)_willBecomeActivePlayerItem;
-(void)_willResignActivePlayerItem;
-(float)soundCheckVolumeNormalization;
-(NSError *)assetError;
-(void)setAssetError:(NSError *)arg1 ;
-(id<MPAVItemPlaylistIdentifier>)playlistIdentifier;
-(void)setPlaylistIdentifier:(id<MPAVItemPlaylistIdentifier>)arg1 ;
-(void)setQueueIdentifier:(id<MPAVItemQueueIdentifier>)arg1 ;
-(char)didAttemptToLoadAsset;
-(char)canReusePlayerItem;
-(unsigned)indexInQueueFeeder;
-(void)setIndexInQueueFeeder:(unsigned)arg1 ;
-(long long)albumStoreID;
-(NSArray *)buyOffers;
-(NSString *)copyrightText;
-(char)isLikedStateEnabled;
-(char)supportsLikedState;
-(long long)storeSubscriptionAdamID;
-(float)loudnessInfoVolumeNormalization;
-(void)setLoudnessInfoVolumeNormalization:(float)arg1 ;
-(char)allowsAirPlayFromCloud;
-(id)artworkCatalogForPlaybackTime:(double)arg1 ;
-(char)usesSubscriptionLease;
-(char)isStreamingLowQualityAsset;
-(MPStoreDownload *)storeDownload;
-(void)dealloc;
-(id)init;
-(SCD_Struct_MP9)duration;
-(id)url;
-(unsigned)type;
-(id)path;
-(id)initWithURL:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithAsset:(id)arg1 ;
-(AVAsset *)asset;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(CGSize)naturalSize;
-(int)status;
-(CGSize)presentationSize;
-(void)setRating:(float)arg1 ;
-(unsigned long long)persistentID;
-(NSString *)artist;
-(NSString *)composer;
-(NSString *)genre;
-(unsigned)discNumber;
-(float)userRating;
-(NSString *)lyrics;
-(MPMediaItem *)mediaItem;
-(void)setLikedState:(int)arg1 ;
-(int)likedState;
-(NSString *)album;
-(void)setPlayer:(MPAVController *)arg1 ;
-(id)initWithURL:(id)arg1 options:(id)arg2 ;
-(AVPlayerItemAccessLog *)accessLog;
-(char)allowsExternalPlayback;
-(MPAVController *)player;
@end


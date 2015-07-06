/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:16 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSData, MPAVItem, NSString, MPAVController, MPUReportingController;

@interface MPUReportingPlaybackObserver : NSObject {

	NSData* _currentJingleReportingTimedMetadata;
	char _isReloadingWithPlaybackContext;
	char _isScrubbing;
	MPAVItem* _itemForCurrentTimeChange;
	double _lastPlayEventEndTimeForCurrentItem;
	double _lastPlayEventTimeIntervalSinceReferenceDate;
	NSString* _playbackSessionID;
	double _startTimeForCurrentTimeChange;
	char _offline;
	char _SBEnabled;
	MPAVController* _player;
	MPUReportingController* _reportingController;
	unsigned long long _storeAccountID;

}

@property (nonatomic,readonly) MPAVController * player;                                      //@synthesize player=_player - In the implementation block
@property (assign,getter=isOffline,nonatomic) char offline;                                  //@synthesize offline=_offline - In the implementation block
@property (nonatomic,readonly) MPUReportingController * reportingController;                 //@synthesize reportingController=_reportingController - In the implementation block
@property (assign,setter=BEnabled,getter=isSBEnabled,nonatomic) char SBEnabled;              //@synthesize SBEnabled=_SBEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long storeAccountID;                              //@synthesize storeAccountID=_storeAccountID - In the implementation block
-(void)_playerItemWillChangeNotification:(id)arg1 ;
-(void)_playerWillReloadWithPlaybackContextNotification:(id)arg1 ;
-(void)dealloc;
-(void)_playerDidReloadWithPlaybackContextNotification:(id)arg1 ;
-(void)_playerPlaybackStateDidChangeNotification:(id)arg1 ;
-(void)_itemNewAccessLogEntryNotification:(id)arg1 ;
-(void)_itemReportingJingleTimedMetadataDidChangeNotification:(id)arg1 ;
-(void)_playerDidSetCurrentTimeNotification:(id)arg1 ;
-(void)_playerWillSetCurrentTimeNotification:(id)arg1 ;
-(void)_reportPlaybackEndedForTimeoutWithItem:(id)arg1 ;
-(void)_updatePlaybackSessionID;
-(id)newPlayActivityEventForMPAVItem:(id)arg1 ;
-(double)_itemStartTimeForItem:(id)arg1 ;
-(double)_itemEndTimeForItem:(id)arg1 withProposedEndTime:(double)arg2 ;
-(id)newReportingPlaybackActivityEventForPlayActivityEvent:(id)arg1 MPAVItem:(id)arg2 ;
-(void)_setLastPlayEventEndTimeForCurrentItem:(double)arg1 ;
-(id)initWithPlayer:(id)arg1 reportingController:(id)arg2 ;
-(unsigned long long)storeAccountID;
-(void)setStoreAccountID:(unsigned long long)arg1 ;
-(MPUReportingController *)reportingController;
-(void)didTransitionItemForBan:(id)arg1 ;
-(void)willTransitionItemForBan:(id)arg1 ;
-(void)willHitPlaybackTimeoutEndingPlayback:(char)arg1 withCurrentItem:(id)arg2 ;
-(void)didHitPlaybackTimeoutEndingPlayback:(char)arg1 withCurrentItem:(id)arg2 ;
-(void)_playerItemDidChangeNotification:(id)arg1 ;
-(char)isOffline;
-(char)isSBEnabled;
-(void)setOffline:(char)arg1 ;
-(void)setSBEnabled:(char)arg1 ;
-(MPAVController *)player;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:36 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKit/UIView.h>
#import <MediaPlayer/MPDetailSliderDelegate.h>

@protocol MPPlaybackControlsDelegate;
@class UIActivityIndicatorView, MPButton, UIView, MPAVItem, MPTimeMarker, MPDetailSlider, CABasicAnimation, MPAVController, UILabel, NSString, UIImage;

@interface MPPlaybackControlsView : UIView <MPDetailSliderDelegate> {

	UIActivityIndicatorView* _activityIndicator;
	id<MPPlaybackControlsDelegate> _delegate;
	MPButton* _fastFowardButton;
	UIView* _fastFowardButtonBezel;
	MPButton* _geniusButton;
	MPAVItem* _item;
	MPTimeMarker* _markerForProgressControlDuration;
	MPButton* _mailButton;
	MPButton* _playbackSpeedButton;
	MPDetailSlider* _progressControl;
	MPButton* _repeatButton;
	MPButton* _rewindButton;
	UIView* _rewindButtonBezel;
	CABasicAnimation* _rewindOpacityAnimation;
	MPAVController* _player;
	double _progressOffset;
	float _seekedToValue;
	MPButton* _shuffleButton;
	double _tickInterval;
	UILabel* _trackInfoLabel;
	unsigned long long _visibleParts;
	unsigned _wantsTick : 1;
	unsigned _geniusButtonDisabled : 1;
	unsigned _fastForwardAndRewindButtonDisabled : 1;
	unsigned _playbackSpeedButtonDisabled : 1;
	unsigned _mailButtonDisabled : 1;
	unsigned _mailButtonHidden : 1;
	unsigned _useMediaDetailSlider : 1;
	unsigned _detailScrubbing : 1;
	unsigned _needsUpdateButtonVisibility : 1;
	unsigned long long _disabledParts;

}

@property (assign,nonatomic,__weak) id<MPPlaybackControlsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long disabledParts;                            //@synthesize disabledParts=_disabledParts - In the implementation block
@property (nonatomic,retain) MPAVItem * item;                                             //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) MPAVController * player;                                     //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) unsigned long long visibleParts;                             //@synthesize visibleParts=_visibleParts - In the implementation block
@property (nonatomic,readonly) char shuffleIsOn; 
@property (nonatomic,readonly) char hideGeniusButton; 
@property (nonatomic,readonly) char isScrubbing; 
@property (nonatomic,readonly) NSString * localizedScrubSpeedText; 
@property (nonatomic,readonly) UIImage * mailButtonImage; 
@property (nonatomic,readonly) char shouldOverrideProgressTimeLabelStyle; 
@property (nonatomic,readonly) UIImage * repeatButtonImage; 
@property (nonatomic,readonly) unsigned repeatType; 
@property (nonatomic,readonly) UIImage * shuffleButtonImage; 
@property (nonatomic,readonly) unsigned shuffleType; 
@property (nonatomic,readonly) char detailScrubbingHidesControls; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)defaultVisibleParts;
-(void)_timeDidJumpNotification:(id)arg1 ;
-(unsigned long long)visibleParts;
-(void)setVisibleParts:(unsigned long long)arg1 ;
-(void)setDisabledParts:(unsigned long long)arg1 ;
-(void)_validityChangedNotification:(id)arg1 ;
-(void)_tickNotification:(id)arg1 ;
-(unsigned)repeatType;
-(unsigned)shuffleType;
-(void)crossedTimeMakerWithEvent:(id)arg1 ;
-(void)_applicationDidEnterBackgroundNotification:(id)arg1 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(void)registerForPlayerNotifications;
-(void)unregisterForPlayerNotifications;
-(unsigned long long)disabledParts;
-(void)stopTicking;
-(void)startTicking;
-(void)_itemDurationDidChangeNotification:(id)arg1 ;
-(Class)buttonClass;
-(id)newButtonForPart:(unsigned long long)arg1 ;
-(NSString *)localizedScrubSpeedText;
-(void)detailSliderTrackingDidBegin:(id)arg1 ;
-(void)detailSliderTrackingDidEnd:(id)arg1 ;
-(void)detailSliderTrackingDidCancel:(id)arg1 ;
-(void)detailSlider:(id)arg1 didChangeValue:(float)arg2 ;
-(void)detailSlider:(id)arg1 didChangeScrubSpeed:(int)arg2 ;
-(unsigned long long)displayablePartsInPartMask:(unsigned long long)arg1 ;
-(void)reloadControls;
-(void)_setVisiblePartsNeedReload;
-(void)_isGeniusEnabledDidChangeNotification:(id)arg1 ;
-(void)_unregisterForAVItemNotifications;
-(void)_updateButtonVisibility;
-(void)_fastForwardButton:(id)arg1 ;
-(void)_rewindButton:(id)arg1 ;
-(void)_geniusButton:(id)arg1 ;
-(id)geniusButtonImageForControlState:(unsigned)arg1 ;
-(void)_mailButton:(id)arg1 ;
-(UIImage *)mailButtonImage;
-(void)_playbackSpeedButton:(id)arg1 ;
-(void)_repeatButton:(id)arg1 ;
-(UIImage *)repeatButtonImage;
-(void)_shuffleButton:(id)arg1 ;
-(UIImage *)shuffleButtonImage;
-(char)progressBarClipsToChapterDuration;
-(double)_currentDisplayTime;
-(double)_updatedDisplayDurationForTime:(double)arg1 preciseChapterMarkers:(char)arg2 ;
-(void)_resetGeniusButtonImages;
-(char)detailScrubbingHidesControls;
-(void)updateForEndOfDetailScrubbing;
-(char)shuffleIsOn;
-(void)_setCurrentTime:(double)arg1 duration:(double)arg2 ;
-(void)_contentsChangedNotification:(id)arg1 ;
-(void)_playbackModeDidChangeNotification:(id)arg1 ;
-(char)shouldOverrideProgressTimeLabelStyle;
-(void)_registerForAVItemNotifications;
-(void)_handleGeniusButtonClick;
-(void)_updateForPlaybackSpeed;
-(void)handleChangeToRepeatType:(unsigned)arg1 ;
-(void)_addOpacityAnimationToBezelView:(id)arg1 reversed:(char)arg2 ;
-(void)handleChangeToShuffleType:(unsigned)arg1 ;
-(void)resetDetailSlider:(id)arg1 ;
-(void)reloadView;
-(id)newButtonBezelViewForPart:(unsigned long long)arg1 ;
-(id)newTrackInfoLabel;
-(id)newProgressIndicator;
-(char)hideGeniusButton;
-(id)playbackSpeedButtonImageForPlaybackSpeed:(unsigned)arg1 ;
-(id)playbackSpeedTitleForPlaybackSpeed:(unsigned)arg1 ;
-(void)reloadButtonVisibility;
-(char)isScrubbing;
-(void)_changeGeniusImageToPressedImage:(id)arg1 ;
-(void)_changeGeniusImageToNormalImage:(id)arg1 ;
-(void)setCurrentTime:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<MPPlaybackControlsDelegate>)arg1 ;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id<MPPlaybackControlsDelegate>)delegate;
-(MPAVItem *)item;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(void)didMoveToSuperview;
-(void)setItem:(MPAVItem *)arg1 ;
-(int)buttonType;
-(void)setPlayer:(MPAVController *)arg1 ;
-(MPAVController *)player;
@end


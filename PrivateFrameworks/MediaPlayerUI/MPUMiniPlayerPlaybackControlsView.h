/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:21 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <MediaPlayer/MPPlaybackControlsView.h>
#import <MediaPlayerUI/MPUMiniPlayerActionsViewControllerDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@class SKUICircleProgressIndicator, UIButton, UIPopoverController, MPUMiniPlayerActionsViewController, UIView, MPUNowPlayingTitlesView, MPUMiniPlayerTransportControls, MPVolumeSlider, MPUProspectivePlaybackInformation, MPUSkipLimitView, NSString;

@interface MPUMiniPlayerPlaybackControlsView : MPPlaybackControlsView <MPUMiniPlayerActionsViewControllerDelegate, UIPopoverControllerDelegate> {

	SKUICircleProgressIndicator* _createActivityIndicatorView;
	UIButton* _createButton;
	UIPopoverController* _createPopoverController;
	MPUMiniPlayerActionsViewController* _createViewController;
	UIView* _hairlineView;
	char _isDetailScrubbing;
	MPUNowPlayingTitlesView* _titlesView;
	MPUMiniPlayerTransportControls* _transportControls;
	MPVolumeSlider* _volumeSlider;
	char _showingCreateLoadingIndicator;
	MPUProspectivePlaybackInformation* _prospectivePlaybackInformation;
	MPUSkipLimitView* _skipLimitView;

}

@property (assign,nonatomic,__weak) id<MPPlaybackControlsDelegate><MPTransportControlsTarget><MPUMiniPlayerActionsViewControllerDelegate> delegate; 
@property (nonatomic,retain) MPUProspectivePlaybackInformation * prospectivePlaybackInformation;                                                                 //@synthesize prospectivePlaybackInformation=_prospectivePlaybackInformation - In the implementation block
@property (assign,getter=isShowingCreateLoadingIndicator,nonatomic) char showingCreateLoadingIndicator;                                                          //@synthesize showingCreateLoadingIndicator=_showingCreateLoadingIndicator - In the implementation block
@property (nonatomic,readonly) float titleMaxX; 
@property (nonatomic,readonly) MPUSkipLimitView * skipLimitView;                                                                                                 //@synthesize skipLimitView=_skipLimitView - In the implementation block
@property (nonatomic,readonly) UIView * _createButton; 
@property (getter=_isDetailScrubbing,nonatomic,readonly) char _detailScrubbing; 
@property (nonatomic,readonly) float _titleBaselineY; 
@property (nonatomic,readonly) MPUMiniPlayerTransportControls * _transportControls; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)defaultVisibleParts;
-(void)_playbackStateDidChangeNotification:(id)arg1 ;
-(void)detailSliderTrackingDidBegin:(id)arg1 ;
-(void)detailSliderTrackingDidEnd:(id)arg1 ;
-(void)detailSliderTrackingDidCancel:(id)arg1 ;
-(void)detailSlider:(id)arg1 didChangeScrubSpeed:(int)arg2 ;
-(id)repeatButtonImage;
-(id)shuffleButtonImage;
-(char)detailScrubbingHidesControls;
-(char)shouldOverrideProgressTimeLabelStyle;
-(id)newProgressIndicator;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<MPPlaybackControlsDelegate><MPTransportControlsTarget><MPUMiniPlayerActionsViewControllerDelegate>)arg1 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)tintColorDidChange;
-(void)setItem:(id)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(int)buttonType;
-(UIView *)_createButton;
-(void)_playerContentsChangedNotification:(id)arg1 ;
-(void)_layoutSkipLimitView;
-(void)_updateTitles;
-(MPUSkipLimitView *)skipLimitView;
-(void)transportControlsDidLayoutSubviews:(id)arg1 ;
-(void)setProspectivePlaybackInformation:(id)arg1 animated:(char)arg2 ;
-(void)setProspectivePlaybackInformation:(MPUProspectivePlaybackInformation *)arg1 ;
-(void)_createButtonAction:(id)arg1 ;
-(void)_updateMarqueeStatusAllowingCurrentMarqueeToFinish:(char)arg1 ;
-(void)_itemIsExplicitDidChangeNotification:(id)arg1 ;
-(void)_itemTitlesDidChangeNotification:(id)arg1 ;
-(void)_updatePlaybackControlsAnimated:(char)arg1 ;
-(void)_updateForChangedShowingCreateLoadingIndicator;
-(float)titleMaxX;
-(float)_titleBaselineY;
-(char)isShowingCreateLoadingIndicator;
-(void)setShowingCreateLoadingIndicator:(char)arg1 ;
-(char)_allowsScrubbingForItem:(id)arg1 ;
-(id)_artistTextForItem:(id)arg1 ;
-(MPUProspectivePlaybackInformation *)prospectivePlaybackInformation;
-(Class)_transportControlsClassForItem:(id)arg1 ;
-(char)_isDetailScrubbing;
-(char)_updateTitlesInView:(id)arg1 forItem:(id)arg2 ;
-(Class)_miniPlayerActionsViewControllerClass;
-(MPUMiniPlayerTransportControls *)_transportControls;
-(void)_updatePlaybackControls;
-(void)_setupVisibleAndDisabledPartsForItem:(id)arg1 ;
-(char)_wantsCreateButtonForItem:(id)arg1 ;
-(void)miniPlayerActionsViewController:(id)arg1 didSelectAction:(int)arg2 ;
-(id)_albumTextForItem:(id)arg1 ;
-(id)_titleTextForItem:(id)arg1 ;
-(void)setPlayer:(id)arg1 ;
@end


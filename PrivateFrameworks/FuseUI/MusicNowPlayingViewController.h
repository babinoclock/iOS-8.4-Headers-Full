/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:37 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <FuseUI/MPURatingControlDelegate.h>
#import <FuseUI/MPUTransportControlMediaRemoteControllerDelegate.h>
#import <FuseUI/MPUTransportControlsViewDataSource.h>
#import <FuseUI/MPUTransportControlsViewDelegate.h>
#import <FuseUI/MPUTransportControlsViewLayoutDelegate.h>
#import <FuseUI/MusicJSNativeViewControllerFactory.h>
#import <FuseUI/MusicJSNowPlayingNativeViewControllerDelegate.h>
#import <FuseUI/MusicNowPlayingItemViewControllerDelegate.h>
#import <FuseUI/MusicNowPlayingVolumeSliderDelegate.h>
#import <FuseUI/MusicPlaybackProgressScrubberDelegate.h>
#import <FuseUI/RUTrackDownloadViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <FuseUI/MusicClientContextConsuming.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@class MPAVItem, MPAudioVideoRoutingPopoverController, NSTimer, UITapGestureRecognizer, UIPanGestureRecognizer, MusicNowPlayingPresentationController, NSArray, MusicClientContext, MPAVController, MusicNowPlayingFloatingButton, MusicNowPlayingItemViewController, MusicPlaybackProgressSliderView, MusicNowPlayingTitlesView, MPUTransportControlsView, MusicNowPlayingVolumeSlider, UIView, UIViewController, MPUBlurEffectView, MPUVibrantContentEffectView, MusicNowPlayingRatingControl, MPUSkipLimitView, CAGradientLayer, MusicPlaybackProgressScrubberController, MPUTransportControlMediaRemoteController, RUTrackDownloadView, NSString, SKUIClientContext;

@interface MusicNowPlayingViewController : UIViewController <MPURatingControlDelegate, MPUTransportControlMediaRemoteControllerDelegate, MPUTransportControlsViewDataSource, MPUTransportControlsViewDelegate, MPUTransportControlsViewLayoutDelegate, MusicJSNativeViewControllerFactory, MusicJSNowPlayingNativeViewControllerDelegate, MusicNowPlayingItemViewControllerDelegate, MusicNowPlayingVolumeSliderDelegate, MusicPlaybackProgressScrubberDelegate, RUTrackDownloadViewDelegate, UIGestureRecognizerDelegate, UIPopoverControllerDelegate, MusicClientContextConsuming, UIViewControllerTransitioningDelegate> {

	MPAVItem* _currentItem;
	char _detailedScrubbing;
	MPAudioVideoRoutingPopoverController* _routingPopoverController;
	NSTimer* _skipInformationRevealTimer;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UIPanGestureRecognizer* _transitionPanGestureRecognizer;
	MusicNowPlayingPresentationController* _transitionPresentationController;
	NSArray* _allowedSecondaryControls;
	MusicClientContext* _clientContext;
	MPAVController* _player;
	MusicNowPlayingFloatingButton* _adInfoButton;
	MusicNowPlayingItemViewController* _currentItemViewController;
	MusicNowPlayingFloatingButton* _dismissButton;
	MusicPlaybackProgressSliderView* _playbackProgressSliderView;
	MusicNowPlayingTitlesView* _titlesView;
	MPUTransportControlsView* _transportControls;
	MusicNowPlayingVolumeSlider* _volumeSlider;
	MPUTransportControlsView* _secondaryTransportControls;
	int _accessoryStyle;
	UIView* _currentItemViewControllerContainerView;
	UIView* _currentItemViewControllerBackgroundView;
	UIViewController* _presentedDetailViewController;
	UIView* _backgroundClippingView;
	MPUBlurEffectView* _backgroundView;
	MPUVibrantContentEffectView* _vibrantEffectView;
	UIView* _detailContainerView;
	MusicNowPlayingRatingControl* _ratingControl;
	MPUSkipLimitView* _skipLimitView;
	CAGradientLayer* _statusBarLegibilityGradient;
	MusicPlaybackProgressScrubberController* _playbackProgressSliderController;
	MPUTransportControlMediaRemoteController* _transportControlMediaRemoteController;
	MPUTransportControlMediaRemoteController* _secondaryTransportControlMediaRemoteController;
	RUTrackDownloadView* _trackDownloadButton;

}

@property (nonatomic,readonly) MPAVController * player;                                                                                //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) MusicNowPlayingFloatingButton * adInfoButton;                                                           //@synthesize adInfoButton=_adInfoButton - In the implementation block
@property (nonatomic,readonly) MusicNowPlayingItemViewController * currentItemViewController;                                          //@synthesize currentItemViewController=_currentItemViewController - In the implementation block
@property (nonatomic,readonly) MusicNowPlayingFloatingButton * dismissButton;                                                          //@synthesize dismissButton=_dismissButton - In the implementation block
@property (nonatomic,readonly) MusicPlaybackProgressSliderView * playbackProgressSliderView;                                           //@synthesize playbackProgressSliderView=_playbackProgressSliderView - In the implementation block
@property (nonatomic,readonly) MusicNowPlayingTitlesView * titlesView;                                                                 //@synthesize titlesView=_titlesView - In the implementation block
@property (nonatomic,readonly) MPUTransportControlsView * transportControls;                                                           //@synthesize transportControls=_transportControls - In the implementation block
@property (nonatomic,readonly) MusicNowPlayingVolumeSlider * volumeSlider;                                                             //@synthesize volumeSlider=_volumeSlider - In the implementation block
@property (nonatomic,readonly) MPUTransportControlsView * secondaryTransportControls;                                                  //@synthesize secondaryTransportControls=_secondaryTransportControls - In the implementation block
@property (nonatomic,readonly) NSArray * persistentAnimationLayers; 
@property (assign,nonatomic) int accessoryStyle;                                                                                       //@synthesize accessoryStyle=_accessoryStyle - In the implementation block
@property (nonatomic,readonly) UIView * currentItemViewControllerContainerView;                                                        //@synthesize currentItemViewControllerContainerView=_currentItemViewControllerContainerView - In the implementation block
@property (nonatomic,readonly) UIView * currentItemViewControllerBackgroundView;                                                       //@synthesize currentItemViewControllerBackgroundView=_currentItemViewControllerBackgroundView - In the implementation block
@property (nonatomic,readonly) UIViewController * presentedDetailViewController;                                                       //@synthesize presentedDetailViewController=_presentedDetailViewController - In the implementation block
@property (nonatomic,retain) UIView * backgroundClippingView;                                                                          //@synthesize backgroundClippingView=_backgroundClippingView - In the implementation block
@property (nonatomic,retain) MPUBlurEffectView * backgroundView;                                                                       //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) MPUVibrantContentEffectView * vibrantEffectView;                                                          //@synthesize vibrantEffectView=_vibrantEffectView - In the implementation block
@property (nonatomic,readonly) UIView * detailContainerView;                                                                           //@synthesize detailContainerView=_detailContainerView - In the implementation block
@property (nonatomic,readonly) MusicNowPlayingRatingControl * ratingControl;                                                           //@synthesize ratingControl=_ratingControl - In the implementation block
@property (nonatomic,readonly) MPUSkipLimitView * skipLimitView;                                                                       //@synthesize skipLimitView=_skipLimitView - In the implementation block
@property (nonatomic,readonly) CAGradientLayer * statusBarLegibilityGradient;                                                          //@synthesize statusBarLegibilityGradient=_statusBarLegibilityGradient - In the implementation block
@property (nonatomic,readonly) MusicPlaybackProgressScrubberController * playbackProgressSliderController;                             //@synthesize playbackProgressSliderController=_playbackProgressSliderController - In the implementation block
@property (nonatomic,readonly) MPUTransportControlMediaRemoteController * transportControlMediaRemoteController;                       //@synthesize transportControlMediaRemoteController=_transportControlMediaRemoteController - In the implementation block
@property (nonatomic,readonly) MPUTransportControlMediaRemoteController * secondaryTransportControlMediaRemoteController;              //@synthesize secondaryTransportControlMediaRemoteController=_secondaryTransportControlMediaRemoteController - In the implementation block
@property (nonatomic,readonly) RUTrackDownloadView * trackDownloadButton;                                                              //@synthesize trackDownloadButton=_trackDownloadButton - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SKUIClientContext * clientContext; 
-(id)initWithPlayer:(id)arg1 ;
-(MusicNowPlayingVolumeSlider *)volumeSlider;
-(void)_pushMediaRemoteCommand:(unsigned)arg1 withOptions:(id)arg2 ;
-(void)dealloc;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(char)prefersStatusBarHidden;
-(char)shouldAutorotate;
-(unsigned)supportedInterfaceOrientations;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)setBackgroundView:(MPUBlurEffectView *)arg1 ;
-(MPUBlurEffectView *)backgroundView;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(int)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(char)shouldAutomaticallyForwardAppearanceMethods;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)interactionControllerForPresentation:(id)arg1 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)interactionControllerForDismissal:(id)arg1 ;
-(void)showDetailViewController:(id)arg1 sender:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)trackDownloadView:(id)arg1 stateDidChangeToState:(int)arg2 ;
-(void)trackDownloadViewWillTransition:(id)arg1 ;
-(UIView *)currentItemViewControllerBackgroundView;
-(UIView *)currentItemViewControllerContainerView;
-(void)setAccessoryStyle:(int)arg1 ;
-(id)loadJSNativeViewControllerWithAppContext:(id)arg1 ;
-(void)_playerContentsDidChangeNotification:(id)arg1 ;
-(void)dismissDetailViewController:(id)arg1 ;
-(void)nowPlayingItemViewControllerWantsToExitFullScreen:(id)arg1 ;
-(void)nowPlayingItemViewControllerArtworkImageDidChange:(id)arg1 ;
-(MusicNowPlayingTitlesView *)titlesView;
-(NSArray *)persistentAnimationLayers;
-(CGRect)contentItemFrameForContentContainerBounds:(CGRect)arg1 ;
-(MusicNowPlayingFloatingButton *)adInfoButton;
-(MusicNowPlayingFloatingButton *)dismissButton;
-(void)volumeSlider:(id)arg1 didSelectRoutesButton:(id)arg2 ;
-(void)_didUpdateSupportedCommandsNotification:(id)arg1 ;
-(void)_updateNowPlayingInfo;
-(void)_updateSupportedCommands;
-(void)_showUpNext:(id)arg1 ;
-(void)_currentItemTitlesDidChangeNotification:(id)arg1 ;
-(void)_playerCurrentItemDidChangeNotification:(id)arg1 ;
-(void)_playerPlaybackStateDidChangeNotification:(id)arg1 ;
-(id)presentingViewControllerForLikeBanActionSheetForTransportControlMediaRemoteController:(id)arg1 ;
-(void)transportControlMediaRemoteController:(id)arg1 requestsPushingMediaRemoteCommand:(unsigned)arg2 withOptions:(id)arg3 shouldLaunchApplication:(char)arg4 ;
-(id)transportControlMediaRemoteController:(id)arg1 alternateKeyForMediaRemoteNowPlayingInfoKey:(id)arg2 ;
-(id)transportControlsView:(id)arg1 buttonForControlType:(int)arg2 ;
-(void)transportControlsView:(id)arg1 tapOnControlType:(int)arg2 ;
-(void)transportControlsView:(id)arg1 longPressBeginOnControlType:(int)arg2 ;
-(void)transportControlsView:(id)arg1 longPressEndOnControlType:(int)arg2 ;
-(CGRect)transportControlsView:(id)arg1 adjustedFrameOfTransportButtonWithControlType:(int)arg2 proposedFrame:(CGRect)arg3 ;
-(float)transportControlsView:(id)arg1 adjustedMaximumLayoutWidthOfTransportButtonWithControlType:(int)arg2 ;
-(CGSize)transportControlsView:(id)arg1 defaultTransportButtonSizeWithProposedSize:(CGSize)arg2 ;
-(void)transportControlsViewDidLayoutSubviews:(id)arg1 ;
-(void)_statusBarFrameChangeNotification:(id)arg1 ;
-(void)_didSkipTrackNotification:(id)arg1 ;
-(void)_layoutSkipLimitView;
-(void)dismissButtonTapped:(id)arg1 ;
-(void)_handleTapGestureRecognizerAction:(id)arg1 ;
-(void)_handleTransitionPanGestureRecognizerAction:(id)arg1 ;
-(void)_setCurrentItem:(id)arg1 skipUpdatingView:(char)arg2 forceUpdatingView:(char)arg3 ;
-(void)_beginVisualEngagement;
-(void)_presentDetailViewController:(id)arg1 ;
-(void)_dismissDetailViewControllerWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_shareButton;
-(void)_showContextualActionsWithTransportButton:(id)arg1 includeSharing:(char)arg2 includeStandardActions:(char)arg3 ;
-(id)_imageForTransportButtonWithControlType:(int)arg1 usingTransportControlMediaRemoteController:(id)arg2 ;
-(void)_revealSkipInformationMomentarily;
-(void)_updateBackgroundEffects;
-(void)_updateTitles;
-(void)_setRatingsVisible:(char)arg1 ;
-(UIViewController *)presentedDetailViewController;
-(void)_setLyricsVisible:(char)arg1 ;
-(void)_scheduleSkipInformationRevealTimer;
-(char)_shouldDismissAutomaticallyForCurrentPlaybackState;
-(void)_triggerAutomaticDismissalWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_invalidateSkipInformationRevealTimer;
-(void)_peekSkipLimit:(SCD_Struct_Mu16)arg1 ;
-(void)_adInfoButtonTapped:(id)arg1 ;
-(void)ratingDidChangeForRatingControl:(id)arg1 ;
-(void)playbackProgressScrubberTrackingDidBegin:(id)arg1 ;
-(void)playbackProgressScrubberTrackingDidEnd:(id)arg1 ;
-(void)playbackProgressScrubber:(id)arg1 didChangeScrubSpeed:(int)arg2 ;
-(void)presentSharingOptions;
-(void)_skipLimitDidChangeNotification:(id)arg1 ;
-(char)_hasShareButton;
-(void)_showUpNext;
-(MusicPlaybackProgressSliderView *)playbackProgressSliderView;
-(MPUTransportControlsView *)transportControls;
-(MPUTransportControlsView *)secondaryTransportControls;
-(int)accessoryStyle;
-(UIView *)backgroundClippingView;
-(void)setBackgroundClippingView:(UIView *)arg1 ;
-(MPUVibrantContentEffectView *)vibrantEffectView;
-(void)setVibrantEffectView:(MPUVibrantContentEffectView *)arg1 ;
-(UIView *)detailContainerView;
-(MusicNowPlayingRatingControl *)ratingControl;
-(MPUSkipLimitView *)skipLimitView;
-(CAGradientLayer *)statusBarLegibilityGradient;
-(MusicPlaybackProgressScrubberController *)playbackProgressSliderController;
-(MPUTransportControlMediaRemoteController *)transportControlMediaRemoteController;
-(MPUTransportControlMediaRemoteController *)secondaryTransportControlMediaRemoteController;
-(RUTrackDownloadView *)trackDownloadButton;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(MusicNowPlayingItemViewController *)currentItemViewController;
-(MPAVController *)player;
@end


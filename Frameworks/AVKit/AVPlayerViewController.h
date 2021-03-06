/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:14 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@protocol AVVideoLayer, AVPlayerViewControllerDelegate;
@class AVNowPlayingInfoController, AVRemoteCommandController, UIView, AVUnsupportedContentIndicatorView, AVAudioOnlyIndicatorView, AVExternalPlaybackIndicatorView, AVLoadingIndicatorView, AVVideoLayerView, AVTouchIgnoringView, AVPlaybackControlsViewController, UIWindow, NSTimer, UIPopoverController, AVFullScreenViewController, AVPlayerController, CALayer, AVPlayer, NSString;

@interface AVPlayerViewController : UIViewController <UIPopoverControllerDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate> {

	unsigned _playerShouldAutoplay : 1;
	unsigned _showsPlaybackControls : 1;
	int _videoLayerGravity;
	AVNowPlayingInfoController* _nowPlayingInfoController;
	AVRemoteCommandController* _remoteCommandController;
	UIView* _containerView;
	AVUnsupportedContentIndicatorView* _unsupportedContentIndicatorView;
	AVAudioOnlyIndicatorView* _audioOnlyIndicatorView;
	AVExternalPlaybackIndicatorView* _externalPlaybackIndicatorView;
	AVLoadingIndicatorView* _loadingIndicatorView;
	UIView* _contentView;
	AVVideoLayerView* _videoLayerView;
	UIView* _contentOverlayView;
	UIView* _controlsView;
	AVTouchIgnoringView* _iAdPrerollView;
	AVPlaybackControlsViewController* _playbackControlsViewController;
	UIWindow* _secondScreenWindow;
	id _screenDidConnectObserver;
	id _screenDidDisconnectObserver;
	id _screenModeDidChangeObserver;
	id _activeAudioRouteDidChangeObserver;
	id _remoteCommandControllerDidReceiveStopCommandEventObserver;
	NSTimer* _loadingIndicatorTimer;
	unsigned _playbackControlsViewControllerShouldShowLoadingIndicator : 1;
	unsigned _playbackControlsViewControllerShowsScaleButton : 1;
	int _playbackControlsViewControllerScaleButtonType;
	unsigned _playbackControlsViewVisibilityNeedsUpdate : 1;
	int _playbackControlsViewVisibilityCounter;
	NSTimer* _playbackControlsViewVisibilityTimer;
	unsigned _isShowingPlaybackControlsViewForUserInteraction : 1;
	unsigned _isShowingPlaybackControlsViewAfterUserInteraction : 1;
	unsigned _isShowingPlaybackControlsViewForUnsupportedContent : 1;
	unsigned _isShowingPlaybackControlsViewForAudioOnlyContent : 1;
	unsigned _isShowingPlaybackControlsViewForPlayingOnExternalScreen : 1;
	unsigned _showsPlaybackControlsView : 1;
	unsigned _isAnimatingPlaybackControlsViewVisibility : 1;
	UIPopoverController* _mediaSelectionPopoverController;
	AVFullScreenViewController* _fullScreenViewController;
	unsigned _animateFullScreenTransitionForPresenting : 1;
	unsigned _isTransitioningToOrFromFullScreen : 1;
	unsigned _animateFullScreenTransition : 1;
	AVPlayerController* _playerController;
	CALayer*<AVVideoLayer> _videoLayer;
	unsigned _showsExitFullScreenButton : 1;
	id<AVPlayerViewControllerDelegate> _delegate;
	SCD_Struct_AV2 _delegateRespondsTo;

}

@property (nonatomic,retain) AVPlayerController * playerController; 
@property (nonatomic,readonly) UIView * iAdPrerollView; 
@property (assign,nonatomic) char showsExitFullScreenButton; 
@property (assign,nonatomic,__weak) id<AVPlayerViewControllerDelegate> delegate; 
@property (nonatomic,retain) AVPlayer * player; 
@property (assign,nonatomic) char showsPlaybackControls; 
@property (nonatomic,copy) NSString * videoGravity; 
@property (getter=isReadyForDisplay,nonatomic,readonly) char readyForDisplay; 
@property (nonatomic,readonly) CGRect videoBounds; 
@property (nonatomic,readonly) UIView * contentOverlayView; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)keyPathsForValuesAffectingVideoGravity;
+(id)keyPathsForValuesAffectingReadyForDisplay;
+(id)keyPathsForValuesAffectingPlayer;
+(id)keyPathsForValuesAffectingVideoBounds;
+(void)initialize;
-(char)showsExitFullScreenButton;
-(void)setShowsExitFullScreenButton:(char)arg1 ;
-(void)showPlaybackControlsViewForTouchDown;
-(void)hidePlaybackControlsViewForTouchUp;
-(void)scaleButtonTapped:(id)arg1 ;
-(void)mediaSelectionButtonTapped:(id)arg1 ;
-(void)fullScreenButtonTapped:(id)arg1 ;
-(void)_updatePlaybackControlsViewVisibilityIfNeeded;
-(void)_updatePlaybackControlsViewController;
-(void)_updateExternalPlaybackIndicatorView;
-(void)_updateVideoLayerView;
-(void)_updatePlaybackControlsViewVisibilityForPlayingOnExternalScreen;
-(void)_transitionFromFullScreenViewControllerWithReason:(int)arg1 ;
-(void)_handleDoubleTapGesture:(id)arg1 ;
-(void)_handleSingleTapGesture:(id)arg1 ;
-(void)_showPlaybackControlsViewIfNeededAndHideIfPossibleAfterDelayIfPlaying;
-(void)_fireLoadingIndicatorTimer:(id)arg1 ;
-(void)_updateUnsupportedContentIndicatorView;
-(void)_updatePlaybackControlsViewVisibilityForUnsupportedContent;
-(void)_updateShowsScaleButton;
-(void)_updateScaleButtonType;
-(void)_updateAudioOnlyIndicatorView;
-(void)_updatePlaybackControlsViewVisibilityForAudioOnlyContent;
-(char)showsPlaybackControls;
-(char)_isUnsupportedContent;
-(char)_isAudioOnlyContent;
-(void)_setPlaybackControlsViewVisibilityNeedsUpdate;
-(char)_showsPlaybackControlsView;
-(void)_hidePlaybackControlsViewIfPossibleUntilFurtherUserInteraction;
-(void)_transitionToFullScreenViewControllerAnimated:(char)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_hidePlaybackControlsViewIfPossible;
-(void)_showPlaybackControlsViewIfNeededAndHideIfPossibleAfterDelayIfPlayingWithDelay:(double)arg1 ;
-(void)_firePlaybackControlsViewVisibilityTimer:(id)arg1 ;
-(void)_showOrHidePlaybackControlsView;
-(void)_transitionFromFullScreenViewControllerAnimated:(char)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_hidePlaybackControlsViewIfPossibleAfterDelayIfPlaying;
-(CGRect)videoBounds;
-(UIView *)contentOverlayView;
-(void)_showPlaybackControlsViewIfNeeded;
-(void)enterFullScreenAnimated:(char)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)showPlaybackControlsViewForVolumeChange;
-(NSString *)videoGravity;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<AVPlayerViewControllerDelegate>)arg1 ;
-(id<AVPlayerViewControllerDelegate>)delegate;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)animationEnded:(char)arg1 ;
-(char)canBecomeFirstResponder;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)childViewControllerForStatusBarHidden;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(AVPlayerController *)playerController;
-(UIView *)iAdPrerollView;
-(void)doneButtonTapped:(id)arg1 ;
-(void)_handlePinchGesture:(id)arg1 ;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(void)setVideoGravity:(NSString *)arg1 ;
-(AVPlayer *)player;
-(void)togglePlayback:(id)arg1 ;
-(void)setPlayerController:(AVPlayerController *)arg1 ;
-(char)isReadyForDisplay;
-(id)initWithVideoLayer:(id)arg1 ;
-(void)setShowsPlaybackControls:(char)arg1 ;
-(void)enterFullScreenWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)exitFullScreenWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)exitFullScreenAnimated:(char)arg1 completionHandler:(/*^block*/id)arg2 ;
@end


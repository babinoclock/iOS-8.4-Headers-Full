/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:15 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVKit/AVPlaybackControlsViewController.h>
#import <AVKit/MPVolumeControllerDelegate.h>

@class NSArray, NSString, UIView, UIButton, UILabel, AVScrubber, AVLoadingIndicatorView, MPVolumeSlider, NSMutableArray, NSLayoutConstraint, NSTimer, MPVolumeController;

@interface AVFullScreenPlaybackControlsViewController : AVPlaybackControlsViewController <MPVolumeControllerDelegate> {

	unsigned _showsDoneButton : 1;
	unsigned _showsScaleButton : 1;
	int _scaleButtonType;
	unsigned _showsLoadingIndicator : 1;
	unsigned _playing : 1;
	unsigned _scrubberEnabled : 1;
	NSArray* _scrubberLoadedTimeRanges;
	unsigned _scanBackwardButtonEnabled : 1;
	unsigned _playPauseButtonEnabled : 1;
	unsigned _scanForwardButtonEnabled : 1;
	unsigned _showsStreamingControls : 1;
	unsigned _skipBackwardThirtySecondsButtonEnabled : 1;
	unsigned _gotoEndOfSeekableRangesButtonEnabled : 1;
	unsigned _showsMediaSelectionButton : 1;
	unsigned _showsExitFullScreenButton : 1;
	unsigned _showsVolumeSlider : 1;
	NSString* _elapsedTimeLabelText;
	float _scrubberMinimumValue;
	float _scrubberValue;
	float _scrubberMaximumValue;
	NSString* _remainingTimeLabelText;
	float _volumeSliderValue;
	UIView* _upperControlsSubContainerView;
	UIView* _lowerControlsLeftSubContainerView;
	UIView* _lowerControlsCenterSubContainerView;
	UIView* _lowerControlsRightSubContainerView;
	UIButton* _doneButton;
	UILabel* _elapsedTimeLabel;
	AVScrubber* _scrubber;
	UILabel* _remainingTimeLabel;
	UIButton* _scaleButton;
	UILabel* _liveStreamingLabel;
	AVLoadingIndicatorView* _loadingIndicatorView;
	UILabel* _scrubInstructionsTitleLabel;
	UILabel* _scrubInstructionsSubtitleLabel;
	MPVolumeSlider* _volumeSlider;
	UIButton* _skipBackwardThirtySecondsButton;
	UIButton* _scanBackwardButton;
	UIButton* _playPauseButton;
	UIButton* _scanForwardButton;
	UIButton* _gotoEndOfSeekableRangesButton;
	UIButton* _mediaSelectionButton;
	UIButton* _fullScreenButton;
	NSMutableArray* _layoutConstraints;
	NSLayoutConstraint* _topControlsContainerViewHeightLayoutConstraint;
	NSLayoutConstraint* _bottomControlsContainerViewHeightLayoutConstraint;
	unsigned _bottomControlsSingleRowLayoutPossible : 1;
	unsigned _showsScrubInstructions : 1;
	unsigned _userDidTapScanButton : 1;
	NSTimer* _beginScanningBackwardTimer;
	NSTimer* _beginScanningForwardTimer;
	unsigned _isScanningBackward : 1;
	unsigned _isScanningForward : 1;
	unsigned _controlsVisibilityHasBeenManagedBefore : 1;
	MPVolumeController* _volumeController;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)showsExitFullScreenButton;
-(void)setShowsExitFullScreenButton:(char)arg1 ;
-(void)setScrubberEnabled:(char)arg1 ;
-(void)updateScrubberMinimumValue:(float)arg1 ;
-(void)updateScrubberMaximumValue:(float)arg1 ;
-(void)setScrubberLoadedTimeRanges:(id)arg1 ;
-(void)setScanBackwardButtonEnabled:(char)arg1 ;
-(void)setPlayPauseButtonEnabled:(char)arg1 ;
-(void)setScanForwardButtonEnabled:(char)arg1 ;
-(void)setShowsStreamingControls:(char)arg1 ;
-(void)setShowsMediaSelectionButton:(char)arg1 ;
-(void)updateElapsedTimeLabel:(id)arg1 ;
-(void)updateRemainingTimeLabel:(id)arg1 ;
-(void)setSkipBackwardThirtySecondsButtonEnabled:(char)arg1 ;
-(void)setGotoEndOfSeekableRangesButtonEnabled:(char)arg1 ;
-(void)updateScrubberValue:(float)arg1 ;
-(char)isScrubberEnabled;
-(id)scrubberLoadedTimeRanges;
-(char)isScanBackwardButtonEnabled;
-(char)isPlayPauseButtonEnabled;
-(char)isScanForwardButtonEnabled;
-(char)showsStreamingControls;
-(char)isSkipBackwardThirtySecondsButtonEnabled;
-(char)isGotoEndOfSeekableRangesButtonEnabled;
-(char)showsScaleButton;
-(void)setShowsScaleButton:(char)arg1 ;
-(int)scaleButtonType;
-(void)setScaleButtonType:(int)arg1 ;
-(char)showsLoadingIndicator;
-(void)setShowsLoadingIndicator:(char)arg1 ;
-(char)showsMediaSelectionButton;
-(void)_manageControlsVisibility;
-(void)_scrubberBeginTracking:(id)arg1 ;
-(void)_scrubberEndTracking:(id)arg1 ;
-(void)_skipBackwardThirtySecondsButtonTouchDown:(id)arg1 ;
-(void)_skipBackwardThirtySecondsButtonTouchUpInside:(id)arg1 ;
-(void)_skipBackwardThirtySecondsButtonTouchUpOutside:(id)arg1 ;
-(void)_scanBackwardButtonTouchDown:(id)arg1 ;
-(void)_scanBackwardButtonTouchUpInside:(id)arg1 ;
-(void)_scanBackwardButtonTouchUpOutside:(id)arg1 ;
-(void)_scanForwardButtonTouchDown:(id)arg1 ;
-(void)_scanForwardButtonTouchUpInside:(id)arg1 ;
-(void)_scanForwardButtonTouchUpOutside:(id)arg1 ;
-(void)_gotoEndOfSeekableRangesButtonTouchDown:(id)arg1 ;
-(void)_gotoEndOfSeekableRangesButtonTouchUpInside:(id)arg1 ;
-(void)_gotoEndOfSeekableRangesButtonTouchUpOutside:(id)arg1 ;
-(void)_fireBeginScanningBackwardTimer:(id)arg1 ;
-(void)_fireBeginScanningForwardTimer:(id)arg1 ;
-(void)_updateScaleButton;
-(void)_showScrubInstructions;
-(void)_hideScrubInstructions;
-(void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2 ;
-(void)setShowsVolumeSlider:(char)arg1 ;
-(char)showsVolumeSlider;
-(void)dealloc;
-(char)prefersStatusBarHidden;
-(void)viewWillLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)updateViewConstraints;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setShowsDoneButton:(char)arg1 ;
-(char)showsDoneButton;
-(float)scrubberWidth;
-(char)isPlaying;
-(void)setPlaying:(char)arg1 ;
@end


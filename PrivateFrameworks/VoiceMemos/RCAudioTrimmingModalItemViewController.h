/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:13 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <UIKit/UIViewController.h>
#import <VoiceMemos/RCAVWaveformViewControllerDelegate.h>

@class UIView, RCAVWaveformViewController, RCFileInputWaveformDataSource, UILabel, UIButton, AVPlayerItem, RCUIConfiguration, NSURL, RCPreviewController;

@interface RCAudioTrimmingModalItemViewController : UIViewController <RCAVWaveformViewControllerDelegate> {

	UIView* _nonWaveformContentView;
	RCAVWaveformViewController* _waveformViewController;
	RCFileInputWaveformDataSource* _waveformDataSource;
	UILabel* _timeDisplayLabel;
	UIButton* _playPauseButton;
	AVPlayerItem* _playerItem;
	RCUIConfiguration* _defaultUIConfiguration;
	RCUIConfiguration* _disabledUIConfiguration;
	RCUIConfiguration* _progressUIConfiguration;
	char _showsProgress;
	char _enabled;
	NSURL* _audioURL;
	RCPreviewController* _previewController;
	float _progress;
	double _maximumDuration;

}

@property (nonatomic,copy,readonly) NSURL * audioURL;                                //@synthesize audioURL=_audioURL - In the implementation block
@property (nonatomic,readonly) double maximumDuration;                               //@synthesize maximumDuration=_maximumDuration - In the implementation block
@property (nonatomic,readonly) SCD_Struct_RC4 selectedTimeRange; 
@property (nonatomic,readonly) RCPreviewController * previewController;              //@synthesize previewController=_previewController - In the implementation block
@property (assign,nonatomic) char showsProgress;                                     //@synthesize showsProgress=_showsProgress - In the implementation block
@property (assign,nonatomic) float progress;                                         //@synthesize progress=_progress - In the implementation block
@property (assign,getter=isEnabled,nonatomic) char enabled;                          //@synthesize enabled=_enabled - In the implementation block
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(void)setProgress:(float)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
-(void)updateViewConstraints;
-(float)progress;
-(double)maximumDuration;
-(RCPreviewController *)previewController;
-(SCD_Struct_RC4)selectedTimeRange;
-(void)audioWaveformControllerDidChangeWaveformDataSource:(id)arg1 ;
-(void)audioWaveformControllerDidChangeAVTimes:(id)arg1 ;
-(void)audioWaveformControllerDidChangeAVState:(id)arg1 ;
-(CGSize)_calculatedPreferredContentSize;
-(id)_currentUIConfiguration;
-(void)_updateProgressView;
-(void)_playPauseAction;
-(id)_playStateImageForAVPreviewState:(int)arg1 ;
-(void)_updateAudioStateInterface;
-(void)_pausePreviewing;
-(void)_beginOrResumePreviewing;
-(id)initWithAudioURL:(id)arg1 maximumDuration:(double)arg2 ;
-(void)setShowsProgress:(char)arg1 ;
-(NSURL *)audioURL;
-(char)showsProgress;
@end


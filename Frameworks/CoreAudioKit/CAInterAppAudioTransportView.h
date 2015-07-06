/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:31 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreAudioKit/CoreAudioKit-Structs.h>
#import <UIKit/UIView.h>

@class CAUITransportButton, UILabel, UIColor, NSTimer, UIFont;

@interface CAInterAppAudioTransportView : UIView {

	CAUITransportButton* rewindButton;
	CAUITransportButton* playPauseButton;
	CAUITransportButton* recordButton;
	UILabel* currentTimeLabel;
	UIColor* pauseButtonColor;
	UIColor* playButtonColor;
	OpaqueAudioComponentInstanceRef outputUnit;
	HostCallbackInfo* callBackInfo;
	NSTimer* pollingPlayerTimer;
	char enabled;
	char inForeground;
	char _playing;
	char _recording;
	char _connected;
	double _playTime;
	UIFont* _currentTimeLabelFont;

}

@property (getter=isEnabled) char enabled; 
@property (getter=isPlaying,nonatomic,readonly) char playing;                  //@synthesize playing=_playing - In the implementation block
@property (getter=isRecording,nonatomic,readonly) char recording;              //@synthesize recording=_recording - In the implementation block
@property (getter=isConnected,nonatomic,readonly) char connected;              //@synthesize connected=_connected - In the implementation block
@property (nonatomic,retain) UIColor * labelColor; 
@property (nonatomic,retain) UIFont * currentTimeLabelFont;                    //@synthesize currentTimeLabelFont=_currentTimeLabelFont - In the implementation block
@property (nonatomic,retain) UIColor * rewindButtonColor; 
@property (nonatomic,retain) UIColor * playButtonColor; 
@property (nonatomic,retain) UIColor * pauseButtonColor; 
@property (nonatomic,retain) UIColor * recordButtonColor; 
-(char)isRecording;
-(void)audioUnitPropertyChangedListener:(void*)arg1 unit:(OpaqueAudioComponentInstanceRef)arg2 propID:(unsigned long)arg3 scope:(unsigned long)arg4 element:(unsigned long)arg5 ;
-(void)rewindAction:(id)arg1 ;
-(void)toggleRecording:(id)arg1 ;
-(UIFont *)currentTimeLabelFont;
-(void)setCurrentTimeLabelFont:(UIFont *)arg1 ;
-(void)appHasGoneInBackground;
-(void)appHasGoneForeground;
-(void)updateTransportControls;
-(char)isHostConnected;
-(void)pollHost;
-(id)getPlayTimeString;
-(void)updateStatefromTransportCallBack;
-(void)stopPollingPlayer;
-(void)startPollingPlayer;
-(void)getHostCallbackInfo;
-(void)sendStateToRemoteHost:(unsigned long)arg1 ;
-(char)canRewind;
-(UIColor *)rewindButtonColor;
-(void)setRewindButtonColor:(UIColor *)arg1 ;
-(UIColor *)playButtonColor;
-(void)setPlayButtonColor:(UIColor *)arg1 ;
-(UIColor *)pauseButtonColor;
-(void)setPauseButtonColor:(UIColor *)arg1 ;
-(UIColor *)recordButtonColor;
-(void)setRecordButtonColor:(UIColor *)arg1 ;
-(void)setOutputAudioUnit:(OpaqueAudioComponentInstanceRef)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(void)setEnabled:(char)arg1 ;
-(void)initialize;
-(char)isEnabled;
-(char)isConnected;
-(UIColor *)labelColor;
-(void)setLabelColor:(UIColor *)arg1 ;
-(char)canRecord;
-(char)canPlay;
-(void)togglePlayback:(id)arg1 ;
-(char)isPlaying;
@end


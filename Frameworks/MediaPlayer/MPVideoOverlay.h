/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:35 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class MPAVController, UINavigationBar, MPAVItem;


@protocol MPVideoOverlay
@property (assign,nonatomic,__weak) id<MPVideoControllerProtocol> videoViewController; 
@property (assign,nonatomic) char allowsWirelessPlayback; 
@property (assign,nonatomic) char navigationBarHidden; 
@property (nonatomic,retain) MPAVController * player; 
@property (nonatomic,retain,readonly) UINavigationBar * navigationBar; 
@property (assign,nonatomic,__weak) id<MPVideoOverlayDelegate> delegate; 
@property (nonatomic,retain) MPAVItem * item; 
@property (assign,nonatomic) unsigned long long desiredParts; 
@property (assign,nonatomic) unsigned long long visibleParts; 
@property (assign,nonatomic) unsigned long long disabledParts; 
@required
-(void)setAllowsWirelessPlayback:(char)arg1;
-(char)allowsWirelessPlayback;
-(char)navigationBarHidden;
-(unsigned long long)visibleParts;
-(unsigned long long)desiredParts;
-(void)setDesiredParts:(unsigned long long)arg1;
-(void)setVisibleParts:(unsigned long long)arg1;
-(void)setDisabledParts:(unsigned long long)arg1;
-(void)setDesiredParts:(unsigned long long)arg1 animate:(char)arg2;
-(void)setVisibleParts:(unsigned long long)arg1 animate:(char)arg2;
-(unsigned long long)disabledParts;
-(void)stopTicking;
-(void)startTicking;
-(char)updateTimeBasedValues;
-(void)showAlternateTracks;
-(void)hideAlternateTracks;
-(id<MPVideoControllerProtocol>)videoViewController;
-(void)setVideoViewController:(id)arg1;
-(void)setDelegate:(id)arg1;
-(id<MPVideoOverlayDelegate>)delegate;
-(UINavigationBar *)navigationBar;
-(MPAVItem *)item;
-(void)setItem:(id)arg1;
-(void)setNavigationBarHidden:(char)arg1;
-(void)setPlayer:(id)arg1;
-(MPAVController *)player;

@end


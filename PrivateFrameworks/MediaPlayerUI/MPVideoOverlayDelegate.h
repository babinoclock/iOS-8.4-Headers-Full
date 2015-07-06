/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:20 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MPVideoOverlayDelegate <NSObject>
@optional
-(double)overlay:(id)arg1 interpretCurrentTime:(double)arg2;
-(void)overlayDidBeginScrubbing:(id)arg1;
-(void)overlayDidEndScrubbing:(id)arg1;
-(void)overlayTappedBackButton:(id)arg1;
-(void)overlayTappedFullscreenButton:(id)arg1;
-(char)overlayShouldAcceptSkipBackwardEvent:(id)arg1;
-(char)overlayShouldAcceptSkipForwardEvent:(id)arg1;
-(double)overlay:(id)arg1 interpretDuration:(double)arg2;
-(void)overlay:(id)arg1 didBeginUserEvent:(int)arg2;
-(void)overlay:(id)arg1 didCancelUserEvent:(int)arg2;
-(void)overlay:(id)arg1 didEndUserEvent:(int)arg2;
-(void)overlayTappedScaleModeButton:(id)arg1;
-(void)overlayDidDismissAlternateTracksPopover:(id)arg1;

@end


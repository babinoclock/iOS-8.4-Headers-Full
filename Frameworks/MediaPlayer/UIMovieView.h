/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:35 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPVideoView.h>

@interface UIMovieView : MPVideoView
-(unsigned)playbackState;
-(void)setRepeatMode:(unsigned)arg1 ;
-(void)play;
-(id)avPlayer;
-(unsigned)playableContentType;
-(void)setCurrentTime:(double)arg1 timeSnapOption:(unsigned)arg2 ;
-(unsigned)bufferingStatusMask;
-(id)mpavController;
-(void)setCurrentTime:(double)arg1 ;
-(double)duration;
-(void)stop;
-(void)pause;
-(double)currentTime;
@end


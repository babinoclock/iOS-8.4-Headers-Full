/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:35 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPRemoteCommandEvent.h>

@class MPRemotePlaybackQueue;

@interface MPInsertIntoPlaybackQueueCommandEvent : MPRemoteCommandEvent {

	int _insertionPosition;
	MPRemotePlaybackQueue* _playbackQueue;

}

@property (nonatomic,readonly) int insertionPosition;                              //@synthesize insertionPosition=_insertionPosition - In the implementation block
@property (nonatomic,readonly) MPRemotePlaybackQueue * playbackQueue;              //@synthesize playbackQueue=_playbackQueue - In the implementation block
-(id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned)arg2 options:(id)arg3 ;
-(MPRemotePlaybackQueue *)playbackQueue;
-(int)insertionPosition;
@end


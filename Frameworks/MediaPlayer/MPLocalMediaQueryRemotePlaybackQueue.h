/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:35 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPRemotePlaybackQueue.h>

@class MPMediaQuery, MPMediaItem;

@interface MPLocalMediaQueryRemotePlaybackQueue : MPRemotePlaybackQueue {

	MPMediaQuery* _mediaQuery;
	MPMediaItem* _firstItem;
	unsigned _shuffleType;
	unsigned _repeatType;

}

@property (nonatomic,readonly) MPMediaQuery * mediaQuery;              //@synthesize mediaQuery=_mediaQuery - In the implementation block
@property (nonatomic,readonly) MPMediaItem * firstItem;                //@synthesize firstItem=_firstItem - In the implementation block
@property (nonatomic,readonly) unsigned shuffleType;                   //@synthesize shuffleType=_shuffleType - In the implementation block
@property (nonatomic,readonly) unsigned repeatType;                    //@synthesize repeatType=_repeatType - In the implementation block
-(unsigned)repeatType;
-(unsigned)shuffleType;
-(id)initWithMediaRemotePlaybackQueue:(MRSystemAppPlaybackQueueRef)arg1 ;
-(char)verifyWithError:(id*)arg1 ;
-(MPMediaQuery *)mediaQuery;
-(id)description;
-(MPMediaItem *)firstItem;
@end


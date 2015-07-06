/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:38 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSDictionary, NSDate, NSObject;

@interface MPNowPlayingInfoCenter : NSObject {

	NSDictionary* _nowPlayingInfo;
	NSDictionary* _queuedNowPlayingInfo;
	NSDate* _pushDate;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (copy) NSDictionary * nowPlayingInfo; 
+(id)defaultCenter;
-(void)_pushNowPlayingInfoAndRetry:(char)arg1 ;
-(NSDictionary *)nowPlayingInfo;
-(id)init;
-(id)_init;
-(void)setNowPlayingInfo:(NSDictionary *)arg1 ;
@end

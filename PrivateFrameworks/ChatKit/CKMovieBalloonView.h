/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:48 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/CKImageBalloonView.h>

@class CKMovieMediaObject, AVPlayerItem, AVPlayer, AVPlayerLayer;

@interface CKMovieBalloonView : CKImageBalloonView {

	CKMovieMediaObject* _mediaObject;
	AVPlayerItem* _avPlayerItem;
	AVPlayer* _avPlayer;
	AVPlayerLayer* _avPlayerLayer;

}

@property (nonatomic,retain) CKMovieMediaObject * mediaObject;                                    //@synthesize mediaObject=_mediaObject - In the implementation block
@property (assign,nonatomic) id<CKMovieBalloonViewDelegate> delegate; 
@property (setter=setAVPlayerItem:,nonatomic,retain) AVPlayerItem * avPlayerItem;                 //@synthesize avPlayerItem=_avPlayerItem - In the implementation block
@property (setter=setAVPlayer:,nonatomic,retain) AVPlayer * avPlayer;                             //@synthesize avPlayer=_avPlayer - In the implementation block
@property (setter=setAVPlayerLayer:,nonatomic,retain) AVPlayerLayer * avPlayerLayer;              //@synthesize avPlayerLayer=_avPlayerLayer - In the implementation block
-(AVPlayer *)avPlayer;
-(void)setAVPlayer:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)description;
-(void)prepareForReuse;
-(void)tapGestureRecognized:(id)arg1 ;
-(void)prepareForDisplay;
-(void)configureForMediaObject:(id)arg1 previewWidth:(float)arg2 orientation:(char)arg3 ;
-(void)setMediaObject:(CKMovieMediaObject *)arg1 ;
-(CKMovieMediaObject *)mediaObject;
-(AVPlayerLayer *)avPlayerLayer;
-(void)cleanupPlayerIfNeeded;
-(void)setAVPlayerItem:(id)arg1 ;
-(void)videoDidReachEnd:(id)arg1 ;
-(void)setAVPlayerLayer:(id)arg1 ;
-(AVPlayerItem *)avPlayerItem;
@end


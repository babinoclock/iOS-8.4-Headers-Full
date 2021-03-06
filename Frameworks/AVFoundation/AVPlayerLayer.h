/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:03 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <QuartzCore/CALayer.h>

@class AVPlayerLayerInternal, AVPlayer, NSString;

@interface AVPlayerLayer : CALayer {

	AVPlayerLayerInternal* _playerLayer;

}

@property (nonatomic,retain) AVPlayer * player; 
@property (copy) NSString * videoGravity; 
@property (getter=isReadyForDisplay,nonatomic,readonly) char readyForDisplay; 
@property (nonatomic,readonly) CGRect videoRect; 
+(id)playerLayerWithPlayer:(id)arg1 ;
+(id)keyPathsForValuesAffectingVideoRect;
-(id)pixelBufferAttributes;
-(void)_setSubtitleGravity:(id)arg1 ;
-(void)_notifyPlayerOfDisplaySize;
-(id)_transformToAbsoluteAnimationOfBounds:(id)arg1 ;
-(void)_forBoundsAnimations:(id)arg1 applyBlock:(/*^block*/id)arg2 ;
-(void)_addAnimationsForMaskLayer:(id)arg1 ;
-(void)_addAnimationsForVideoLayer:(id)arg1 size:(CGSize)arg2 gravity:(id)arg3 ;
-(void)_addAnimationsForClosedCaptionLayer:(id)arg1 gravity:(id)arg2 ;
-(CGSize)_getAVPlayerCurrentItemPresentationSizeKeyFromPlayer:(id)arg1 ;
-(void)_updatePresentationSize:(CGSize)arg1 forceUpdate:(char)arg2 ;
-(void)_setHasPlayerToObserve:(int)arg1 andShouldObserveIt:(int)arg2 ;
-(void)_setItem:(id)arg1 readyForDisplay:(char)arg2 ;
-(id)_subtitleGravity;
-(void)setPixelBufferAttributes:(id)arg1 ;
-(id)_videoLayer;
-(id)_closedCaptionLayer;
-(id)_subtitleLayer;
-(CGRect)_videoRectForBounds:(CGRect)arg1 ;
-(NSString *)videoGravity;
-(char)isOverscanSubtitleSupportEnabled;
-(void)setOverscanSubtitleSupportEnabled:(char)arg1 ;
-(void)layerDidBecomeVisible:(char)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setBounds:(CGRect)arg1 ;
-(void)removeAnimationForKey:(id)arg1 ;
-(void)addAnimation:(id)arg1 forKey:(id)arg2 ;
-(void)removeAllAnimations;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithLayer:(id)arg1 ;
-(void)finalize;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(void)setVideoGravity:(NSString *)arg1 ;
-(CGRect)videoRect;
-(AVPlayer *)player;
-(char)isReadyForDisplay;
@end


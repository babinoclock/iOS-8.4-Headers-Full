/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:58 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNTextureOffscreenRenderingSource.h>

@interface SCNTextureDelegateSource : SCNTextureOffscreenRenderingSource {

	id _delegate;
	double _lastUpdate;
	double _nextUpdateDate;

}

@property (nonatomic,retain) id delegate;              //@synthesize delegate=_delegate - In the implementation block
-(C3DTextureRef)textureWithEngineContext:(C3DEngineContextRef)arg1 textureSampler:(_C3DTextureSampler*)arg2 nextFrameTime:(double*)arg3 ;
-(void)renderWithEngineContext:(C3DEngineContextRef)arg1 nextFrameTime:(double*)arg2 ;
-(void)cleanup:(_C3DRendererContext*)arg1 ;
-(void)__updateTextureWithDelegate:(id)arg1 engineContext:(C3DEngineContextRef)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
@end


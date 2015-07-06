/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:33 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/ProceduralWallpaper/ProceduralWallpapers.bundle/ProceduralWallpapers
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ProceduralWallpapers/ProceduralWallpapers-Structs.h>
#import <SpriteKit/SKSpriteNode.h>

@class SKTexture;

@interface BokehParallaxNode : SKSpriteNode {

	float _parallaxMultiplier;
	SKTexture* _blurTex;
	SKTexture* _regTex;
	float _regScaleX;
	float _regScaleY;
	float _regAlpha;
	CGPoint _layoutPosition;
	CGPoint _driftSpeed;

}

@property (assign) CGPoint layoutPosition;                //@synthesize layoutPosition=_layoutPosition - In the implementation block
@property (assign) float parallaxMultiplier; 
@property (assign) CGPoint driftSpeed;                    //@synthesize driftSpeed=_driftSpeed - In the implementation block
@property (retain) SKTexture * blurTex;                   //@synthesize blurTex=_blurTex - In the implementation block
@property (retain) SKTexture * regTex;                    //@synthesize regTex=_regTex - In the implementation block
@property (assign) float regScaleX;                       //@synthesize regScaleX=_regScaleX - In the implementation block
@property (assign) float regScaleY;                       //@synthesize regScaleY=_regScaleY - In the implementation block
@property (assign) float regAlpha;                        //@synthesize regAlpha=_regAlpha - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copy;
-(void)setRegTex:(SKTexture *)arg1 ;
-(void)setRegScaleX:(float)arg1 ;
-(void)setRegScaleY:(float)arg1 ;
-(void)setRegAlpha:(float)arg1 ;
-(SKTexture *)regTex;
-(float)regScaleX;
-(float)regScaleY;
-(float)regAlpha;
-(float)parallaxMultiplier;
-(void)setParallaxMultiplier:(float)arg1 ;
-(void)setDriftSpeed:(CGPoint)arg1 ;
-(void)setLayoutPosition:(CGPoint)arg1 ;
-(CGPoint)layoutPosition;
-(CGPoint)driftSpeed;
-(SKTexture *)blurTex;
-(void)setBlurTex:(SKTexture *)arg1 ;
@end


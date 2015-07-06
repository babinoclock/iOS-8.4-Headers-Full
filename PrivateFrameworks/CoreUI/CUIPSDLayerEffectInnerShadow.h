/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:19 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreUI/CUIPSDLayerEffectComponent.h>

@class CUIColor;

@interface CUIPSDLayerEffectInnerShadow : CUIPSDLayerEffectComponent {

	int _blendMode;
	float _opacity;
	CUIColor* _color;
	short _angle;
	unsigned _distance;
	unsigned _blurSize;

}

@property (assign) int blendMode;                  //@synthesize blendMode=_blendMode - In the implementation block
@property (assign) float opacity;                  //@synthesize opacity=_opacity - In the implementation block
@property (retain) CUIColor * color;               //@synthesize color=_color - In the implementation block
@property (assign) short angle;                    //@synthesize angle=_angle - In the implementation block
@property (assign) unsigned distance;              //@synthesize distance=_distance - In the implementation block
@property (assign) unsigned blurSize;              //@synthesize blurSize=_blurSize - In the implementation block
-(int)blendMode;
-(void)setBlendMode:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(float)opacity;
-(void)setOpacity:(float)arg1 ;
-(CUIColor *)color;
-(void)setColor:(CUIColor *)arg1 ;
-(void)setAngle:(short)arg1 ;
-(short)angle;
-(void)setBlurSize:(unsigned)arg1 ;
-(char)updateLayerEffectPreset:(id)arg1 error:(id*)arg2 ;
-(id)initWithEffectFromPreset:(id)arg1 atIndex:(unsigned)arg2 ;
-(unsigned)blurSize;
-(unsigned)effectType;
-(void)setDistance:(unsigned)arg1 ;
-(unsigned)distance;
@end


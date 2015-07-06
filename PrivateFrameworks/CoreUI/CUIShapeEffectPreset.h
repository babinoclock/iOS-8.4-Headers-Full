/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:19 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@interface CUIShapeEffectPreset : NSObject {

	SCD_Struct_CU20 _parameterList[35];
	unsigned _effectIndex[8];
	float _scaleFactor;

}
+(id)requiredEffectParametersForEffectType:(unsigned)arg1 ;
-(id)init;
-(id)CUIEffectDataRepresentation;
-(id)initWithEffectScale:(float)arg1 ;
-(unsigned)effectTypeAtIndex:(unsigned)arg1 ;
-(id)layerEffectsRepresentation;
-(void)addDropShadowWithColorRed:(unsigned)arg1 green:(unsigned)arg2 blue:(unsigned)arg3 opacity:(float)arg4 blur:(int)arg5 spread:(int)arg6 offset:(int)arg7 angle:(int)arg8 ;
-(/*function pointer*/void*)valueForParameter:(unsigned)arg1 inEffectAtIndex:(unsigned)arg2 ;
-(void)addInnerShadowWithColorRed:(unsigned)arg1 green:(unsigned)arg2 blue:(unsigned)arg3 opacity:(float)arg4 blur:(int)arg5 offset:(int)arg6 angle:(int)arg7 blendMode:(unsigned)arg8 ;
-(void)addInnerGlowWithColorRed:(unsigned)arg1 green:(unsigned)arg2 blue:(unsigned)arg3 opacity:(float)arg4 blur:(int)arg5 blendMode:(unsigned)arg6 ;
-(void)addOuterGlowWithColorRed:(unsigned)arg1 green:(unsigned)arg2 blue:(unsigned)arg3 opacity:(float)arg4 blur:(int)arg5 spread:(int)arg6 ;
-(void)addColorFillWithRed:(unsigned)arg1 green:(unsigned)arg2 blue:(unsigned)arg3 opacity:(float)arg4 blendMode:(unsigned)arg5 ;
-(void)addGradientFillWithTopColorRed:(unsigned)arg1 green:(unsigned)arg2 blue:(unsigned)arg3 bottomColorRed:(unsigned)arg4 green:(unsigned)arg5 blue:(unsigned)arg6 opacity:(float)arg7 ;
-(void)addBevelEmbossWithHighlightColorRed:(unsigned)arg1 green:(unsigned)arg2 blue:(unsigned)arg3 opacity:(float)arg4 shadowColorRed:(unsigned)arg5 green:(unsigned)arg6 blue:(unsigned)arg7 opacity:(float)arg8 blur:(int)arg9 soften:(int)arg10 ;
-(void)_insertEffectTuple:(SCD_Struct_CU21)arg1 atEffectIndex:(unsigned)arg2 ;
-(void)addValue:(/*function pointer*/void*)arg1 forParameter:(unsigned)arg2 withEffectType:(unsigned)arg3 atEffectIndex:(unsigned)arg4 ;
-(void)addValue:(/*function pointer*/void*)arg1 forParameter:(unsigned)arg2 withNewEffectType:(unsigned)arg3 ;
-(void)appendValue:(/*function pointer*/void*)arg1 forParameter:(unsigned)arg2 withEffectType:(unsigned)arg3 ;
-(void)addFloatValue:(float)arg1 forParameter:(unsigned)arg2 withNewEffectType:(unsigned)arg3 ;
-(void)addColorValueRed:(unsigned)arg1 green:(unsigned)arg2 blue:(unsigned)arg3 forParameter:(unsigned)arg4 withNewEffectType:(unsigned)arg5 ;
-(void)appendFloatValue:(float)arg1 forParameter:(unsigned)arg2 withEffectType:(unsigned)arg3 ;
-(void)appendEnumValue:(unsigned)arg1 forParameter:(unsigned)arg2 withEffectType:(unsigned)arg3 ;
-(void)appendColorValueRed:(unsigned)arg1 green:(unsigned)arg2 blue:(unsigned)arg3 forParameter:(unsigned)arg4 withEffectType:(unsigned)arg5 ;
-(void)appendIntValue:(unsigned)arg1 forParameter:(unsigned)arg2 withEffectType:(unsigned)arg3 ;
-(void)appendAngleValue:(int)arg1 forParameter:(unsigned)arg2 withEffectType:(unsigned)arg3 ;
-(float)effectScale;
-(void)getEffectTuples:(/*function pointer*/void**)arg1 count:(unsigned*)arg2 atEffectIndex:(unsigned)arg3 ;
-(void)addIntValue:(unsigned)arg1 forParameter:(unsigned)arg2 withNewEffectType:(unsigned)arg3 ;
-(void)addEnumValue:(unsigned)arg1 forParameter:(unsigned)arg2 withNewEffectType:(unsigned)arg3 ;
-(void)addShapeOpacityWithOpacity:(float)arg1 ;
-(void)addOutputOpacityWithOpacity:(float)arg1 ;
-(void)addExtraShadowWithColorRed:(unsigned)arg1 green:(unsigned)arg2 blue:(unsigned)arg3 opacity:(float)arg4 blur:(int)arg5 spread:(int)arg6 offset:(int)arg7 angle:(int)arg8 ;
-(unsigned)_parameterCount;
-(id)initWithConstantPreset:(const SCD_Struct_CU22*)arg1 ;
-(unsigned)effectCount;
@end


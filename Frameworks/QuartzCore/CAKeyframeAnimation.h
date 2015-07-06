/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:52 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CAPropertyAnimation.h>

@class NSArray, NSString;

@interface CAKeyframeAnimation : CAPropertyAnimation

@property (copy) NSArray * values; 
@property (assign) CGPathRef path; 
@property (copy) NSArray * keyTimes; 
@property (copy) NSArray * timingFunctions; 
@property (copy) NSString * calculationMode; 
@property (copy) NSArray * tensionValues; 
@property (copy) NSArray * continuityValues; 
@property (copy) NSArray * biasValues; 
@property (copy) NSString * rotationMode; 
+(id)normalizedKeyframeAnimationWithKeyPath:(id)arg1 ;
-(char)_setCARenderAnimation:(Animation*)arg1 layer:(id)arg2 ;
-(Animation*)_copyRenderAnimationForLayer:(id)arg1 ;
-(NSString *)rotationMode;
-(void)setRotationMode:(NSString *)arg1 ;
-(NSArray *)tensionValues;
-(void)setTensionValues:(NSArray *)arg1 ;
-(NSArray *)continuityValues;
-(void)setContinuityValues:(NSArray *)arg1 ;
-(NSArray *)biasValues;
-(void)setBiasValues:(NSArray *)arg1 ;
-(NSString *)calculationMode;
-(CGPathRef)path;
-(void)setCalculationMode:(NSString *)arg1 ;
-(void)setValues:(NSArray *)arg1 ;
-(void)setKeyTimes:(NSArray *)arg1 ;
-(NSArray *)values;
-(NSArray *)keyTimes;
-(void)setPath:(CGPathRef)arg1 ;
-(void)setTimingFunctions:(NSArray *)arg1 ;
-(void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3 ;
-(void)CA_prepareRenderValue;
-(NSArray *)timingFunctions;
@end


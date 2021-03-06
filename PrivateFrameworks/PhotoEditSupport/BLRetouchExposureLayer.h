/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:53 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoEditSupport/PhotoEditSupport-Structs.h>
#import <PhotoEditSupport/BLRetouchEffectLayer.h>

@interface BLRetouchExposureLayer : BLRetouchEffectLayer {

	float _currentExposure;
	float* _cubeData;
	float _exposure;

}

@property (assign,nonatomic) float exposure;              //@synthesize exposure=_exposure - In the implementation block
+(id)layerWithExposure:(float)arg1 ;
-(void)dealloc;
-(CGImageRef)newImageFromContextWithEffect:(CGContextRef)arg1 ;
-(id)cubeData;
-(float)exposure;
-(void)setExposure:(float)arg1 ;
@end


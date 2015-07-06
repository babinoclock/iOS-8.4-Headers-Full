/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:37 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKit/UIView.h>

@interface CAMExposureBiasSliderThumb : UIView {

	float _normalizedExposureValue;

}

@property (assign,nonatomic) float normalizedExposureValue;              //@synthesize normalizedExposureValue=_normalizedExposureValue - In the implementation block
@property (nonatomic,readonly) float maxRadius; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(float)_sunRadius;
-(float)_sunRaySpacing;
-(float)_sunRayLength;
-(float)_interpolatedValueWithMin:(float)arg1 mid:(float)arg2 max:(float)arg3 ;
-(void)setNormalizedExposureValue:(float)arg1 ;
-(float)maxRadius;
-(float)normalizedExposureValue;
@end

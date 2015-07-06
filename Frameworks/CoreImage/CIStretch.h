/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:43 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

@interface CIStretch : CIFilter {

	CIImage* inputImage;
	CIVector* inputPoint;
	CIVector* inputSize;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputPoint; 
@property (nonatomic,retain) CIVector * inputSize; 
+(id)customAttributes;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)_kernel;
-(CIVector *)inputPoint;
-(void)setInputSize:(CIVector *)arg1 ;
-(CIVector *)inputSize;
-(CGRect)computeDOD:(vec4)arg1 ;
-(CIImage *)inputImage;
-(void)setDefaults;
-(void)setInputPoint:(CIVector *)arg1 ;
-(id)outputImage;
@end


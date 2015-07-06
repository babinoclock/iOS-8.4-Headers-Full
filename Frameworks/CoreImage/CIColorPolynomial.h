/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:44 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

@interface CIColorPolynomial : CIFilter {

	CIImage* inputImage;
	CIVector* inputRedCoefficients;
	CIVector* inputGreenCoefficients;
	CIVector* inputBlueCoefficients;
	CIVector* inputAlphaCoefficients;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputRedCoefficients; 
@property (nonatomic,retain) CIVector * inputGreenCoefficients; 
@property (nonatomic,retain) CIVector * inputBlueCoefficients; 
@property (nonatomic,retain) CIVector * inputAlphaCoefficients; 
+(id)customAttributes;
-(void)setInputImage:(CIImage *)arg1 ;
-(char)_isIdentity;
-(id)_kernel;
-(void)setInputAlphaCoefficients:(CIVector *)arg1 ;
-(void)setInputBlueCoefficients:(CIVector *)arg1 ;
-(void)setInputGreenCoefficients:(CIVector *)arg1 ;
-(void)setInputRedCoefficients:(CIVector *)arg1 ;
-(CIVector *)inputRedCoefficients;
-(CIVector *)inputGreenCoefficients;
-(CIVector *)inputBlueCoefficients;
-(CIVector *)inputAlphaCoefficients;
-(CIImage *)inputImage;
-(void)setDefaults;
-(id)outputImage;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:44 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CIConvolution5X5 : CIFilter {

	CIImage* inputImage;
	CIVector* inputWeights;
	NSNumber* inputBias;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputWeights; 
@property (nonatomic,retain) NSNumber * inputBias; 
+(id)customAttributes;
-(void)setInputImage:(CIImage *)arg1 ;
-(char)_isIdentity;
-(CIVector *)inputWeights;
-(void)setInputWeights:(CIVector *)arg1 ;
-(CIImage *)inputImage;
-(NSNumber *)inputBias;
-(void)setInputBias:(NSNumber *)arg1 ;
-(id)outputImage;
@end


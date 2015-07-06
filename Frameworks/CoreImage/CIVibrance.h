/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:42 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>
#import <CoreImage/_CIFilterProperties.h>

@class CIImage, NSNumber;

@interface CIVibrance : CIFilter <_CIFilterProperties> {

	CIImage* inputImage;
	NSNumber* inputAmount;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputAmount; 
+(id)customAttributes;
-(void)setInputImage:(CIImage *)arg1 ;
-(char)_isIdentity;
-(void)setInputAmount:(NSNumber *)arg1 ;
-(id)_kernelNeg;
-(id)_kernelPos;
-(NSNumber *)inputAmount;
-(CIImage *)inputImage;
-(void)setDefaults;
-(id)_outputProperties;
-(id)_initFromProperties:(id)arg1 ;
-(id)outputImage;
@end


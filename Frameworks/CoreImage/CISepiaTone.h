/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:42 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CISepiaTone : CIFilter {

	CIImage* inputImage;
	NSNumber* inputIntensity;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputIntensity; 
+(id)customAttributes;
-(void)setInputImage:(CIImage *)arg1 ;
-(char)_isIdentity;
-(id)_kernel;
-(void)setInputIntensity:(NSNumber *)arg1 ;
-(NSNumber *)inputIntensity;
-(CIImage *)inputImage;
-(void)setDefaults;
-(id)outputImage;
@end


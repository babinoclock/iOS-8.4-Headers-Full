/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:42 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIColorControls : CIFilter {

	CIImage* inputImage;
	NSNumber* inputSaturation;
	NSNumber* inputBrightness;
	NSNumber* inputContrast;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputSaturation; 
@property (nonatomic,retain) NSNumber * inputBrightness; 
@property (nonatomic,retain) NSNumber * inputContrast; 
+(id)customAttributes;
-(void)setInputImage:(CIImage *)arg1 ;
-(void)setInputSaturation:(NSNumber *)arg1 ;
-(void)setInputContrast:(NSNumber *)arg1 ;
-(void)setInputBrightness:(NSNumber *)arg1 ;
-(NSNumber *)inputSaturation;
-(NSNumber *)inputBrightness;
-(NSNumber *)inputContrast;
-(CIImage *)inputImage;
-(void)setDefaults;
-(id)outputImage;
@end


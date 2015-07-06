/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:44 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber, CIColor;

@interface CUIInnerGlowOrShadowFilter : CIFilter {

	CIImage* inputImage;
	CIVector* inputOffset;
	NSNumber* inputRange;
	NSNumber* inputRadius;
	CIColor* inputColor;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputOffset; 
@property (nonatomic,retain) NSNumber * inputRange; 
@property (nonatomic,retain) NSNumber * inputRadius; 
@property (nonatomic,retain) CIColor * inputColor; 
+(id)customAttributes;
-(void)setInputImage:(CIImage *)arg1 ;
-(void)setInputRadius:(NSNumber *)arg1 ;
-(NSNumber *)inputRadius;
-(id)_kernel;
-(void)setInputColor:(CIColor *)arg1 ;
-(CIColor *)inputColor;
-(void)setInputOffset:(CIVector *)arg1 ;
-(void)setInputRange:(NSNumber *)arg1 ;
-(CIVector *)inputOffset;
-(NSNumber *)inputRange;
-(CIImage *)inputImage;
-(void)setDefaults;
-(id)outputImage;
@end


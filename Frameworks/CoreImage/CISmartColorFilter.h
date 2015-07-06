/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:43 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, CIContext;

@interface CISmartColorFilter : CIFilter {

	CIImage* inputImage;
	NSNumber* inputVibrancy;
	NSNumber* inputContrast;
	NSNumber* inputCast;
	NSNumber* inputUseCube;
	CIImage* _cubeImage;
	CIContext* _cubeContext;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputVibrancy; 
@property (nonatomic,retain) NSNumber * inputContrast; 
@property (nonatomic,retain) NSNumber * inputCast; 
@property (nonatomic,retain) NSNumber * inputUseCube; 
+(id)customAttributes;
-(void)setInputImage:(CIImage *)arg1 ;
-(char)_isIdentity;
-(void)setInputContrast:(NSNumber *)arg1 ;
-(NSNumber *)inputContrast;
-(NSNumber *)inputUseCube;
-(void)setInputUseCube:(NSNumber *)arg1 ;
-(id)_kernelV_lt1;
-(id)_kernelV_gt1;
-(id)_kernelCPos;
-(id)_kernelCNeg;
-(id)_kernelCast;
-(NSNumber *)inputVibrancy;
-(void)setInputVibrancy:(NSNumber *)arg1 ;
-(NSNumber *)inputCast;
-(void)setInputCast:(NSNumber *)arg1 ;
-(CIImage *)inputImage;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(id)outputImage;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:43 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, NSData;

@interface CIColorCube : CIFilter {

	CIImage* inputImage;
	NSNumber* inputCubeDimension;
	NSData* inputCubeData;
	CIImage* _cubeImage;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputCubeDimension; 
@property (nonatomic,copy) NSData * inputCubeData; 
+(id)customAttributes;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)_kernel;
-(void)setInputCubeData:(NSData *)arg1 ;
-(void)setInputCubeDimension:(NSNumber *)arg1 ;
-(char)_checkInputs;
-(id)cubeImage;
-(NSNumber *)inputCubeDimension;
-(NSData *)inputCubeData;
-(CIImage *)inputImage;
-(void)setDefaults;
-(void)dealloc;
-(id)outputImage;
@end


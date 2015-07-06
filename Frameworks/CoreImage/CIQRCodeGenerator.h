/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:43 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CICodeGenerator.h>

@class NSString;

@interface CIQRCodeGenerator : CICodeGenerator {

	NSString* inputCorrectionLevel;

}

@property (nonatomic,copy) NSString * inputCorrectionLevel; 
+(id)customAttributes;
-(CGImageRef)outputCGImage;
-(void)setInputCorrectionLevel:(NSString *)arg1 ;
-(NSString *)inputCorrectionLevel;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
@end


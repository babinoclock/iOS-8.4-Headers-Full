/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:12 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVVideoOutputSettings.h>
#import <AVFoundation/AVDecodedVideoSettingsForFig.h>

@class NSDictionary;

@interface AVPixelBufferAttributesVideoOutputSettings : AVVideoOutputSettings <AVDecodedVideoSettingsForFig> {

	NSDictionary* _VTPixelAspectRatioDictionary;
	NSDictionary* _VTCleanApertureDictionary;

}

@property (nonatomic,readonly) NSDictionary * pixelBufferAttributes; 
+(id)_videoOutputSettingsWithVideoSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2 ;
+(id)eligibleOutputSettingsDictionaryKeys;
-(NSDictionary *)pixelBufferAttributes;
-(char)willYieldCompressedSamples;
-(char)canFullySpecifyOutputFormatReturningReason:(id*)arg1 ;
-(char)encoderIsAvailableOnCurrentSystemReturningError:(id*)arg1 ;
-(id)initWithTrustedPixelBufferAttributes:(id)arg1 ;
-(id)pixelAspectRatioDictionary;
-(id)cleanApertureDictionary;
-(id)initWithPixelBufferAttributes:(id)arg1 exceptionReason:(id*)arg2 ;
-(void)dealloc;
-(int)width;
-(int)height;
@end

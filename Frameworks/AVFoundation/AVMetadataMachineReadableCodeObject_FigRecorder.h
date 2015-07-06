/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:12 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVMetadataObject_FigRecorder.h>

@class AVMetadataMachineReadableCodeObjectInternal_FigRecorder, NSArray, NSString;

@interface AVMetadataMachineReadableCodeObject_FigRecorder : AVMetadataObject_FigRecorder {

	AVMetadataMachineReadableCodeObjectInternal_FigRecorder* _internal;

}

@property (readonly) NSArray * corners; 
@property (readonly) NSString * stringValue; 
+(id)machineReadableCodeObjectWithFigEmbeddedCaptureDeviceMachineReadableCodeDictionary:(id)arg1 input:(id)arg2 ;
-(id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(CGAffineTransform)arg2 isVideoMirrored:(char)arg3 rollAdjustment:(float)arg4 ;
-(id)initWithFigEmbeddedCaptureDeviceMachineReadableCodeDictionary:(id)arg1 input:(id)arg2 ;
-(void)dealloc;
-(char)isKindOfClass:(Class)arg1 ;
-(id)description;
-(NSArray *)corners;
-(NSString *)stringValue;
@end


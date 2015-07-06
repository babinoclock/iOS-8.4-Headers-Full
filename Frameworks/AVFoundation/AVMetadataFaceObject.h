/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:10 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVMetadataObject.h>
#import <AVFoundation/NSCopying.h>

@class AVMetadataFaceObjectInternal;

@interface AVMetadataFaceObject : AVMetadataObject <NSCopying> {

	AVMetadataFaceObjectInternal* _internal;

}

@property (readonly) int faceID; 
@property (readonly) char hasRollAngle; 
@property (readonly) float rollAngle; 
@property (readonly) char hasYawAngle; 
@property (readonly) float yawAngle; 
+(id)faceObjectWithFigEmbeddedCaptureDeviceFaceDictionary:(id)arg1 input:(id)arg2 ;
-(int)faceID;
-(id)initWithFaceID:(int)arg1 hasRollAngle:(char)arg2 rollAngle:(float)arg3 hasYawAngle:(char)arg4 yawAngle:(float)arg5 time:(SCD_Struct_CM4)arg6 duration:(SCD_Struct_CM4)arg7 bounds:(CGRect)arg8 ;
-(id)initWithType:(id)arg1 time:(SCD_Struct_CM4)arg2 duration:(SCD_Struct_CM4)arg3 bounds:(CGRect)arg4 originalMetadataObject:(id)arg5 sourceCaptureInput:(id)arg6 ;
-(id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(CGAffineTransform)arg2 isVideoMirrored:(char)arg3 rollAdjustment:(float)arg4 ;
-(char)hasLeftEyeClosedConfidence;
-(int)leftEyeClosedConfidence;
-(char)hasRightEyeClosedConfidence;
-(int)rightEyeClosedConfidence;
-(char)hasSmileConfidence;
-(int)smileConfidence;
-(char)hasLeftEyeBounds;
-(CGRect)leftEyeBounds;
-(char)hasRightEyeBounds;
-(CGRect)rightEyeBounds;
-(id)initWithFaceID:(int)arg1 hasRollAngle:(char)arg2 rollAngle:(float)arg3 hasYawAngle:(char)arg4 yawAngle:(float)arg5 time:(SCD_Struct_CM4)arg6 duration:(SCD_Struct_CM4)arg7 bounds:(CGRect)arg8 optionalInfoDict:(id)arg9 originalMetadataObject:(id)arg10 sourceCaptureInput:(id)arg11 ;
-(id)initWithFigEmbeddedCaptureDeviceFaceDictionary:(id)arg1 input:(id)arg2 ;
-(char)hasRollAngle;
-(float)rollAngle;
-(char)hasYawAngle;
-(float)yawAngle;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:12 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVMetadataObjectInternal_FigRecorder, NSString;

@interface AVMetadataObject_FigRecorder : NSObject {

	AVMetadataObjectInternal_FigRecorder* _objectInternal;

}

@property (readonly) SCD_Struct_CM4 time; 
@property (readonly) SCD_Struct_CM4 duration; 
@property (readonly) CGRect bounds; 
@property (readonly) NSString * type; 
+(id)derivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(CGAffineTransform)arg2 isVideoMirrored:(char)arg3 rollAdjustment:(float)arg4 ;
-(id)originalMetadataObject;
-(id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(CGAffineTransform)arg2 isVideoMirrored:(char)arg3 rollAdjustment:(float)arg4 ;
-(void)dealloc;
-(CGRect)bounds;
-(id)init;
-(SCD_Struct_CM4)duration;
-(NSString *)type;
-(id)input;
-(SCD_Struct_CM4)time;
@end


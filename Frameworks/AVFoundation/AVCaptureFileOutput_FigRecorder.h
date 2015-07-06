/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:03 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureOutput_FigRecorder.h>

@class AVCaptureFileOutputInternal_FigRecorder, NSURL;

@interface AVCaptureFileOutput_FigRecorder : AVCaptureOutput_FigRecorder {

	AVCaptureFileOutputInternal_FigRecorder* _fileOutputInternal;

}

@property (nonatomic,readonly) NSURL * outputFileURL; 
@property (getter=isRecording,nonatomic,readonly) char recording; 
@property (nonatomic,readonly) SCD_Struct_CM4 recordedDuration; 
@property (nonatomic,readonly) long long recordedFileSize; 
@property (assign,nonatomic) SCD_Struct_CM4 maxRecordedDuration; 
@property (assign,nonatomic) long long maxRecordedFileSize; 
@property (assign,nonatomic) long long minFreeDiskSpaceLimit; 
+(void)initialize;
-(NSURL *)outputFileURL;
-(SCD_Struct_CM4)maxRecordedDuration;
-(long long)maxRecordedFileSize;
-(long long)minFreeDiskSpaceLimit;
-(char)pausesRecordingOnInterruption;
-(char)isRecording;
-(void)startRecordingToOutputFileURL:(id)arg1 recordingDelegate:(id)arg2 ;
-(char)isRecordingPaused;
-(void)pauseRecording;
-(void)resumeRecording;
-(void)setPausesRecordingOnInterruption:(char)arg1 ;
-(SCD_Struct_CM4)recordedDuration;
-(long long)recordedFileSize;
-(void)setMaxRecordedDuration:(SCD_Struct_CM4)arg1 ;
-(void)setMaxRecordedFileSize:(long long)arg1 ;
-(void)setMinFreeDiskSpaceLimit:(long long)arg1 ;
-(void)dealloc;
-(id)init;
-(char)isKindOfClass:(Class)arg1 ;
-(void)stopRecording;
@end


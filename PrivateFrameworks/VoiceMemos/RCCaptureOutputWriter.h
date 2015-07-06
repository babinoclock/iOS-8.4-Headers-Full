/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:14 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <VoiceMemos/AVCaptureAudioDataOutputSampleBufferDelegate.h>

@protocol RCCaptureOutputWriterDelegate, OS_dispatch_queue;
@class NSMutableArray, AVCaptureSession, NSURL, NSObject, NSUUID, NSDate, AVAssetWriter, AVCaptureAudioDataOutput, NSString;

@interface RCCaptureOutputWriter : NSObject <AVCaptureAudioDataOutputSampleBufferDelegate> {

	char _waitingForAVCaptureSessionDidStart;
	char _handledAVCaptureSessionTerminatedAbnormally;
	char _handledAVCaptureSessionFailedToStart;
	char _isProcessingSamples;
	int _AVCaptureSessionStartupState;
	unsigned _sampleBuffersWritten;
	NSMutableArray* _delegateBlocks;
	SCD_Struct_RC14 _sampleBuffersWrittenDuration;
	char _finalizedAssetEncounteredError;
	AVCaptureSession* _AVCaptureSession;
	int _writerState;
	id<RCCaptureOutputWriterDelegate> _captureOutputDelegate;
	NSURL* _finalizedAssetURL;
	NSObject*<OS_dispatch_queue> _queue;
	NSUUID* _recordingSessionID;
	NSURL* _activeOutputFileURL;
	NSDate* _recordingCreationDate;
	AVAssetWriter* _assetWriter;
	NSObject*<OS_dispatch_queue> _sampleBufferQueue;
	AVCaptureAudioDataOutput* _sampleBufferDataOutput;
	double _maxRecordedDuration;
	unsigned long long _maxRecordedFileSize;
	double _finalizedAssetDuration;

}

@property (nonatomic,readonly) AVCaptureSession * AVCaptureSession;                                       //@synthesize AVCaptureSession=_AVCaptureSession - In the implementation block
@property (assign,nonatomic) int writerState;                                                             //@synthesize writerState=_writerState - In the implementation block
@property (nonatomic,readonly) double assetWritingCheckpointInterval; 
@property (assign,nonatomic) unsigned long long maxRecordedFileSize;                                      //@synthesize maxRecordedFileSize=_maxRecordedFileSize - In the implementation block
@property (assign,nonatomic) double maxRecordedDuration;                                                  //@synthesize maxRecordedDuration=_maxRecordedDuration - In the implementation block
@property (assign,nonatomic,__weak) id<RCCaptureOutputWriterDelegate> captureOutputDelegate;              //@synthesize captureOutputDelegate=_captureOutputDelegate - In the implementation block
@property (nonatomic,readonly) NSURL * finalizedAssetURL;                                                 //@synthesize finalizedAssetURL=_finalizedAssetURL - In the implementation block
@property (nonatomic,readonly) double finalizedAssetDuration;                                             //@synthesize finalizedAssetDuration=_finalizedAssetDuration - In the implementation block
@property (nonatomic,readonly) char finalizedAssetEncounteredError;                                       //@synthesize finalizedAssetEncounteredError=_finalizedAssetEncounteredError - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                          //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) NSUUID * recordingSessionID;                                                   //@synthesize recordingSessionID=_recordingSessionID - In the implementation block
@property (nonatomic,retain) NSURL * activeOutputFileURL;                                                 //@synthesize activeOutputFileURL=_activeOutputFileURL - In the implementation block
@property (nonatomic,retain) NSDate * recordingCreationDate;                                              //@synthesize recordingCreationDate=_recordingCreationDate - In the implementation block
@property (nonatomic,retain) AVAssetWriter * assetWriter;                                                 //@synthesize assetWriter=_assetWriter - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> sampleBufferQueue;                              //@synthesize sampleBufferQueue=_sampleBufferQueue - In the implementation block
@property (nonatomic,retain) AVCaptureAudioDataOutput * sampleBufferDataOutput;                           //@synthesize sampleBufferDataOutput=_sampleBufferDataOutput - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
-(double)maxRecordedDuration;
-(unsigned long long)maxRecordedFileSize;
-(void)setMaxRecordedDuration:(double)arg1 ;
-(void)setMaxRecordedFileSize:(unsigned long long)arg1 ;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(int)writerState;
-(void)pauseWriting;
-(void)resumeWriting;
-(void)endWriting;
-(char)finalizedAssetEncounteredError;
-(double)finalizedAssetDuration;
-(char)startWritingToOutputFileURL:(id)arg1 creationDate:(id)arg2 beginPaused:(char)arg3 captureOutputDelegate:(id)arg4 ;
-(void)stopCaptureSession;
-(void)setCaptureOutputDelegate:(id<RCCaptureOutputWriterDelegate>)arg1 ;
-(id)initWithAVCaptureSession:(id)arg1 ;
-(char)startCaptureSession;
-(void)_registerForCatpureSessionNotifications;
-(void)_unregisterForCatpureSessionNotifications;
-(void)_clearSampleDataOutput;
-(int)_writerState;
-(void)_prepareCaptureSessionOutputsIfNecessary;
-(void)_checkIfRecordingSessionEverStarted:(id)arg1 ;
-(void)_setWriterState:(int)arg1 ;
-(void)_scheduleMainThreadDelegateBlock:(/*^block*/id)arg1 ;
-(void)_finalizeAssetWriting;
-(char)_setupAssetWriter:(id*)arg1 sampleBufferRef:(opaqueCMSampleBufferRef)arg2 ;
-(double)assetWritingCheckpointInterval;
-(char)_handleEncounteredFatalAssetWriterError;
-(char)_handleNotificationAsSessionStartFailure;
-(void)_sessionDidStartRunning:(id)arg1 ;
-(void)_sessionDidStopRunning:(id)arg1 ;
-(void)_interruptionDidBegin:(id)arg1 ;
-(void)_sessionErrored:(id)arg1 ;
-(AVCaptureSession *)AVCaptureSession;
-(void)setWriterState:(int)arg1 ;
-(id<RCCaptureOutputWriterDelegate>)captureOutputDelegate;
-(NSURL *)finalizedAssetURL;
-(NSUUID *)recordingSessionID;
-(void)setRecordingSessionID:(NSUUID *)arg1 ;
-(NSURL *)activeOutputFileURL;
-(void)setActiveOutputFileURL:(NSURL *)arg1 ;
-(NSDate *)recordingCreationDate;
-(void)setRecordingCreationDate:(NSDate *)arg1 ;
-(AVAssetWriter *)assetWriter;
-(void)setAssetWriter:(AVAssetWriter *)arg1 ;
-(NSObject*<OS_dispatch_queue>)sampleBufferQueue;
-(void)setSampleBufferQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(AVCaptureAudioDataOutput *)sampleBufferDataOutput;
-(void)setSampleBufferDataOutput:(AVCaptureAudioDataOutput *)arg1 ;
@end


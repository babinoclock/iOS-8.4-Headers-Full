/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:44 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWFileSinkNode.h>

@protocol OS_dispatch_queue;
@class NSArray, FigCaptureRecordingSettings, NSDictionary, NSObject;

@interface BWQuickTimeMovieFileSinkNode : BWFileSinkNode {

	unsigned long long _currFileSize;
	unsigned long long _maxFileSize;
	unsigned long long _adjustedMaxFileSize;
	unsigned long long _minFreeDiskSpaceLimit;
	unsigned long long _adjustedMinFreeDiskSpaceLimit;
	SCD_Struct_BW2 _currFileDuration;
	SCD_Struct_BW2 _checkDiskSpaceAtThisDuration;
	SCD_Struct_BW2 _maxFileDuration;
	SCD_Struct_BW2 _adjustedMaxFileDuration;
	SCD_Struct_BW2 _nextTimeToReturnFileSize;
	int _masterInputTimeScale;
	float _maxVideoFrameRate;
	NSArray* _stagingQueues;
	FigCaptureRecordingSettings* _settings;
	char* _parentPath;
	SCD_Struct_BW2 _startingPTS;
	NSDictionary* _movieLevelMetadata;
	NSArray* _trackReferenceListForMetadataInputs;
	unsigned _numInputs;
	NSObject*<OS_dispatch_queue> _thumbnailGenerationDispatchQueue;
	IOSurfaceRef _thumbnailSurface;
	int _recordingState;
	OpaqueFigFormatWriterRef _formatWriter;
	OpaqueCMByteStreamRef _byteStream;
	int* _trackIDs;
	char* _haveSeenSamplesForTrack;
	char* _finalDurationNeedsToBeWrittenForTrack;
	unsigned _masterInputIndex;
	char _didBeginSession;
	char _didBeginWriting;
	char _needToDeMoof;
	char _debugAudio;
	char _haveDebugASBD;
	unsigned _numAudioTracks;
	AudioStreamBasicDescription _debugASBD;
	AudioBufferList* _debugABL;
	SCD_Struct_BW2 _debugDurationForFailOfDiskSpaceTest;
	OpaqueFigSimpleMutexRef _propertyMutex;

}

@property (nonatomic,copy) NSDictionary * movieLevelMetadata; 
@property (nonatomic,copy) NSArray * trackReferenceListForMetadataInputs; 
@property (assign,nonatomic) float maxVideoFrameRate;                                  //@synthesize maxVideoFrameRate=_maxVideoFrameRate - In the implementation block
+(void)initialize;
-(void)setMovieLevelMetadata:(NSDictionary *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(SCD_Struct_BW2)lastFileDuration;
-(unsigned long long)lastFileSize;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)setMaxVideoFrameRate:(float)arg1 ;
-(id)initWithNumberOfVideoInputs:(unsigned)arg1 numberOfAudioInputs:(unsigned)arg2 numberOfMetadataInputs:(unsigned)arg3 ;
-(void)setTrackReferenceListForMetadataInputs:(NSArray *)arg1 ;
-(NSDictionary *)movieLevelMetadata;
-(void)_doEndRecordingAtTime:(SCD_Struct_BW2)arg1 ;
-(char)_driveStateMachineWithBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 sampleBufferAlreadyAtHeadOfQueue:(char)arg3 ;
-(void)_writeBuffer:(opaqueCMSampleBufferRef)arg1 forTrackIndex:(unsigned)arg2 ;
-(long)_writeCommonMetadata:(id)arg1 withProperties:(id)arg2 usingWriter:(OpaqueFigMetadataWriterRef)arg3 ;
-(NSArray *)trackReferenceListForMetadataInputs;
-(long)_startUpFormatWriterAtTime:(SCD_Struct_BW2)arg1 withSettings:(id)arg2 ;
-(unsigned long long)_getCurrentFileSize:(char)arg1 ;
-(void)_preprocessingForFirstVideoBuffer:(opaqueCMSampleBufferRef)arg1 forInputIndex:(unsigned)arg2 ;
-(void)_preprocessingForFirstAudioBuffer:(opaqueCMSampleBufferRef)arg1 forInputIndex:(unsigned)arg2 ;
-(long)_adjustRecordingLimitsForMovieTimeScale:(int)arg1 ;
-(void)_printBufferEvent:(opaqueCMSampleBufferRef)arg1 forNodeInputIndex:(unsigned)arg2 eventName:(id)arg3 ;
-(long)_checkFreeSpace;
-(void)_debugAudioUsingSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(char)_driveStateMachineWithStartMarkerBuffer:(opaqueCMSampleBufferRef)arg1 forInputIndex:(unsigned)arg2 sampleBufferAlreadyAtHeadOfQueue:(char)arg3 ;
-(char)_driveStateMachineWithStopMarkerBuffer:(opaqueCMSampleBufferRef)arg1 forInputIndex:(unsigned)arg2 sampleBufferAlreadyAtHeadOfQueue:(char)arg3 ;
-(char)_driveStateMachineWithPauseMarkerBuffer:(opaqueCMSampleBufferRef)arg1 forInputIndex:(unsigned)arg2 sampleBufferAlreadyAtHeadOfQueue:(char)arg3 ;
-(char)_driveStateMachineWithResumeMarkerBuffer:(opaqueCMSampleBufferRef)arg1 forInputIndex:(unsigned)arg2 sampleBufferAlreadyAtHeadOfQueue:(char)arg3 ;
-(void)_driveStateMachineWithMediaBuffer:(opaqueCMSampleBufferRef)arg1 forInputIndex:(unsigned)arg2 sampleBufferAlreadyAtHeadOfQueue:(char)arg3 ;
-(SCD_Struct_BW2)_findStartMarkersWithMatchedStagedSetting:(id*)arg1 thumbnailSourcePixelBuffer:(_CVBuffer*)arg2 sensorVideoPort:(const _CFString*)arg3 ;
-(long)_doStartRecordingAtTime:(SCD_Struct_BW2)arg1 withSettings:(id)arg2 thumbnailSourcePixelBuffer:(CVBufferRef)arg3 sensorVideoPort:(CFStringRef)arg4 ;
-(SCD_Struct_BW2)_findMarkers:(CFStringRef)arg1 ;
-(float)maxVideoFrameRate;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:13 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <libAVFAudio.dylib/libAVFAudio.dylib-Structs.h>
@class NSURL, NSDictionary, NSArray;

@interface AVAudioRecorder : NSObject {

	void* _impl;

}

@property (getter=isRecording,readonly) char recording; 
@property (readonly) NSURL * url; 
@property (readonly) NSDictionary * settings; 
@property (assign) id<AVAudioRecorderDelegate> delegate; 
@property (readonly) double currentTime; 
@property (readonly) double deviceCurrentTime; 
@property (getter=isMeteringEnabled) char meteringEnabled; 
@property (nonatomic,copy) NSArray * channelAssignments; 
-(char)isRecording;
-(AudioRecorderImpl*)impl;
-(void)finishedRecording;
-(char)isMeteringEnabled;
-(float)peakPowerForChannel:(unsigned)arg1 ;
-(double)deviceCurrentTime;
-(NSArray *)channelAssignments;
-(void)setChannelAssignments:(NSArray *)arg1 ;
-(void)privCommonCleanup;
-(id)initWithURL:(id)arg1 settings:(id)arg2 error:(id*)arg3 ;
-(char)prepareToRecord;
-(char)recordAtTime:(double)arg1 ;
-(char)recordForDuration:(double)arg1 ;
-(char)recordAtTime:(double)arg1 forDuration:(double)arg2 ;
-(char)deleteRecording;
-(void)endInterruptionWithFlags;
-(void)beginInterruption;
-(void)endInterruption;
-(void)dealloc;
-(void)setDelegate:(id<AVAudioRecorderDelegate>)arg1 ;
-(id<AVAudioRecorderDelegate>)delegate;
-(NSURL *)url;
-(NSDictionary *)settings;
-(void)stop;
-(void)pause;
-(id)baseInit;
-(void)setMeteringEnabled:(char)arg1 ;
-(void)updateMeters;
-(float)averagePowerForChannel:(unsigned)arg1 ;
-(char)record;
-(void)finalize;
-(double)currentTime;
@end

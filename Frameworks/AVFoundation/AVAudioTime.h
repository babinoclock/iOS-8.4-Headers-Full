/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:13 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <libAVFAudio.dylib/libAVFAudio.dylib-Structs.h>
@interface AVAudioTime : NSObject {

	AudioTimeStamp _ats;
	double _sampleRate;
	void* _reserved;

}

@property (getter=isHostTimeValid,nonatomic,readonly) char hostTimeValid; 
@property (nonatomic,readonly) unsigned long long hostTime; 
@property (getter=isSampleTimeValid,nonatomic,readonly) char sampleTimeValid; 
@property (nonatomic,readonly) long long sampleTime; 
@property (nonatomic,readonly) double sampleRate; 
@property (nonatomic,readonly) AudioTimeStamp audioTimeStamp; 
+(id)timeWithAudioTimeStamp:(const AudioTimeStamp*)arg1 sampleRate:(double)arg2 ;
+(double)secondsForHostTime:(unsigned long long)arg1 ;
+(id)timeWithHostTime:(unsigned long long)arg1 ;
+(id)timeWithSampleTime:(long long)arg1 atRate:(double)arg2 ;
+(id)timeWithHostTime:(unsigned long long)arg1 sampleTime:(long long)arg2 atRate:(double)arg3 ;
+(unsigned long long)hostTimeForSeconds:(double)arg1 ;
-(id)initWithHostTime:(unsigned long long)arg1 ;
-(id)initWithSampleTime:(long long)arg1 atRate:(double)arg2 ;
-(id)initWithHostTime:(unsigned long long)arg1 sampleTime:(long long)arg2 atRate:(double)arg3 ;
-(AudioTimeStamp)audioTimeStamp;
-(id)initWithAudioTimeStamp:(const AudioTimeStamp*)arg1 sampleRate:(double)arg2 ;
-(char)isHostTimeValid;
-(char)isSampleTimeValid;
-(unsigned long long)hostTime;
-(id)extrapolateTimeFromAnchor:(id)arg1 ;
-(id)init;
-(id)description;
-(double)sampleRate;
-(long long)sampleTime;
@end


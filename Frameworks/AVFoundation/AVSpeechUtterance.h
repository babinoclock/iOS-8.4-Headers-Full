/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:14 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libAVFAudio.dylib/libAVFAudio.dylib-Structs.h>
#import <libAVFAudio.dylib/NSCopying.h>
#import <libAVFAudio.dylib/NSSecureCoding.h>

@class AVSpeechSynthesisVoice, NSString;

@interface AVSpeechUtterance : NSObject <NSCopying, NSSecureCoding> {

	AVSpeechSynthesisVoice* _voice;
	NSString* _speechString;
	float _rate;
	float _pitchMultiplier;
	float _volume;
	double _preUtteranceDelay;
	double _postUtteranceDelay;

}

@property (assign,nonatomic) char processEmoticons; 
@property (assign,nonatomic) char useCompactVoice; 
@property (nonatomic,retain) AVSpeechSynthesisVoice * voice;              //@synthesize voice=_voice - In the implementation block
@property (nonatomic,retain) NSString * speechString;                     //@synthesize speechString=_speechString - In the implementation block
@property (assign,nonatomic) float rate;                                  //@synthesize rate=_rate - In the implementation block
@property (assign,nonatomic) float pitchMultiplier;                       //@synthesize pitchMultiplier=_pitchMultiplier - In the implementation block
@property (assign,nonatomic) float volume;                                //@synthesize volume=_volume - In the implementation block
@property (assign,nonatomic) double preUtteranceDelay;                    //@synthesize preUtteranceDelay=_preUtteranceDelay - In the implementation block
@property (assign,nonatomic) double postUtteranceDelay;                   //@synthesize postUtteranceDelay=_postUtteranceDelay - In the implementation block
+(id)speechUtteranceWithString:(id)arg1 ;
+(void)initialize;
+(char)supportsSecureCoding;
+(id)speechUtteranceWithString:(id)arg1 ;
-(void)setUseCompactVoice:(char)arg1 ;
-(char)useCompactVoice;
-(void)setProcessEmoticons:(char)arg1 ;
-(char)processEmoticons;
-(id)description;
-(id)action;
-(void)setAction:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(NSString *)speechString;
-(float)pitchMultiplier;
-(double)preUtteranceDelay;
-(double)postUtteranceDelay;
-(void)setSpeechString:(NSString *)arg1 ;
-(void)setPreUtteranceDelay:(double)arg1 ;
-(void)setPostUtteranceDelay:(double)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithString:(id)arg1 ;
-(AVSpeechSynthesisVoice *)voice;
-(float)rate;
-(void)setRate:(float)arg1 ;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(void)setPitchMultiplier:(float)arg1 ;
-(void)setVoice:(AVSpeechSynthesisVoice *)arg1 ;
@end


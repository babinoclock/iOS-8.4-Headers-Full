/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:03 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TextToSpeech/TextToSpeech-Structs.h>
#import <TextToSpeech/NSSecureCoding.h>

@protocol TTSSpeechRequestDelegate;
@class TTSSpeechChannel, NSString, NSAttributedString, NSURL;

@interface TTSSpeechRequest : NSObject <NSSecureCoding> {

	id<TTSSpeechRequestDelegate> _delegate;
	TTSSpeechChannel* _speechChannel;
	char _useCustomVoice;
	char _maintainsInput;
	char _audioSessionIDIsValid;
	char _useVoiceBooster;
	NSString* _text;
	NSAttributedString* _attributedText;
	NSString* _languageCode;
	int _footprint;
	int _gender;
	NSURL* _outputPath;
	unsigned _audioSessionID;
	unsigned _audioQueueFlags;
	double _rate;
	double _pitch;
	double _volume;
	double _latency;
	double _dispatchTime;
	double _handledTime;

}

@property (nonatomic,copy) NSString * text;                                  //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedText;              //@synthesize attributedText=_attributedText - In the implementation block
@property (nonatomic,copy) NSString * languageCode;                          //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,retain) TTSSpeechChannel * speechChannel;               //@synthesize speechChannel=_speechChannel - In the implementation block
@property (assign,nonatomic) int footprint;                                  //@synthesize footprint=_footprint - In the implementation block
@property (assign,nonatomic) char useCustomVoice;                            //@synthesize useCustomVoice=_useCustomVoice - In the implementation block
@property (assign,nonatomic) int gender;                                     //@synthesize gender=_gender - In the implementation block
@property (nonatomic,copy) NSURL * outputPath;                               //@synthesize outputPath=_outputPath - In the implementation block
@property (assign,nonatomic) double rate;                                    //@synthesize rate=_rate - In the implementation block
@property (assign,nonatomic) double pitch;                                   //@synthesize pitch=_pitch - In the implementation block
@property (assign,nonatomic) double volume;                                  //@synthesize volume=_volume - In the implementation block
@property (assign,nonatomic) char maintainsInput;                            //@synthesize maintainsInput=_maintainsInput - In the implementation block
@property (assign,nonatomic) char audioSessionIDIsValid;                     //@synthesize audioSessionIDIsValid=_audioSessionIDIsValid - In the implementation block
@property (assign,nonatomic) unsigned audioSessionID;                        //@synthesize audioSessionID=_audioSessionID - In the implementation block
@property (assign,nonatomic) unsigned audioQueueFlags;                       //@synthesize audioQueueFlags=_audioQueueFlags - In the implementation block
@property (assign,nonatomic) double latency;                                 //@synthesize latency=_latency - In the implementation block
@property (assign,nonatomic) double dispatchTime;                            //@synthesize dispatchTime=_dispatchTime - In the implementation block
@property (assign,nonatomic) double handledTime;                             //@synthesize handledTime=_handledTime - In the implementation block
@property (assign,nonatomic) char useVoiceBooster;                           //@synthesize useVoiceBooster=_useVoiceBooster - In the implementation block
+(char)supportsSecureCoding;
-(int)gender;
-(void)setGender:(int)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)description;
-(id)delegate;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSAttributedString *)attributedText;
-(NSString *)languageCode;
-(unsigned)audioSessionID;
-(void)setAudioSessionID:(unsigned)arg1 ;
-(void)setUseCustomVoice:(char)arg1 ;
-(void)setFootprint:(int)arg1 ;
-(void)setLanguageCode:(NSString *)arg1 ;
-(double)rate;
-(void)setRate:(double)arg1 ;
-(double)latency;
-(void)setLatency:(double)arg1 ;
-(char)useVoiceBooster;
-(long)vocalizerFootprint;
-(long)vocalizerGender;
-(void)setSpeechChannel:(TTSSpeechChannel *)arg1 ;
-(id)initWithSpeechChannel:(id)arg1 ;
-(void)speechRequestDidStartForService:(id)arg1 ;
-(void)speechRequestDidPauseForService:(id)arg1 ;
-(void)speechRequestDidContinueForService:(id)arg1 ;
-(void)speechRequestMark:(int)arg1 didStartForRange:(NSRange)arg2 forService:(id)arg3 ;
-(void)speechRequestDidStopWithSuccess:(char)arg1 phonemesSpoken:(id)arg2 forService:(id)arg3 error:(id)arg4 ;
-(TTSSpeechChannel *)speechChannel;
-(double)dispatchTime;
-(void)setDispatchTime:(double)arg1 ;
-(double)handledTime;
-(void)setHandledTime:(double)arg1 ;
-(void)setUseVoiceBooster:(char)arg1 ;
-(double)pitch;
-(int)footprint;
-(void)setPitch:(double)arg1 ;
-(char)useCustomVoice;
-(NSURL *)outputPath;
-(void)setOutputPath:(NSURL *)arg1 ;
-(char)maintainsInput;
-(void)setMaintainsInput:(char)arg1 ;
-(char)audioSessionIDIsValid;
-(void)setAudioSessionIDIsValid:(char)arg1 ;
-(unsigned)audioQueueFlags;
-(void)setAudioQueueFlags:(unsigned)arg1 ;
-(double)volume;
-(void)setVolume:(double)arg1 ;
@end


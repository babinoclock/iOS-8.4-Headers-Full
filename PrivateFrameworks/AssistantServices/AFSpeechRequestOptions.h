/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:29 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AssistantServices/NSSecureCoding.h>

@class NSString, NSNumber;

@interface AFSpeechRequestOptions : NSObject <NSSecureCoding> {

	char _useBorealisBuffer;
	char _isEyesFree;
	char _useAutomaticEndpointing;
	char _useStreamingDictation;
	char _isInitialBringUp;
	char _acousticIdEnabled;
	int _activationEvent;
	NSString* _btDeviceAddress;
	NSString* _serverCommandId;
	NSNumber* _homeButtonUpFromBeep;
	int _audioFileType;
	double _activationEventTime;
	double _expectedActivationEventTime;

}

@property (assign,nonatomic) int activationEvent;                             //@synthesize activationEvent=_activationEvent - In the implementation block
@property (assign,nonatomic) char useBorealisBuffer;                          //@synthesize useBorealisBuffer=_useBorealisBuffer - In the implementation block
@property (nonatomic,copy) NSString * btDeviceAddress;                        //@synthesize btDeviceAddress=_btDeviceAddress - In the implementation block
@property (assign,nonatomic) char isEyesFree;                                 //@synthesize isEyesFree=_isEyesFree - In the implementation block
@property (nonatomic,copy) NSString * serverCommandId;                        //@synthesize serverCommandId=_serverCommandId - In the implementation block
@property (assign,nonatomic) char useAutomaticEndpointing;                    //@synthesize useAutomaticEndpointing=_useAutomaticEndpointing - In the implementation block
@property (assign,nonatomic) char useStreamingDictation;                      //@synthesize useStreamingDictation=_useStreamingDictation - In the implementation block
@property (assign,nonatomic) double activationEventTime;                      //@synthesize activationEventTime=_activationEventTime - In the implementation block
@property (assign,nonatomic) double expectedActivationEventTime;              //@synthesize expectedActivationEventTime=_expectedActivationEventTime - In the implementation block
@property (assign,nonatomic) char isInitialBringUp;                           //@synthesize isInitialBringUp=_isInitialBringUp - In the implementation block
@property (nonatomic,copy) NSNumber * homeButtonUpFromBeep;                   //@synthesize homeButtonUpFromBeep=_homeButtonUpFromBeep - In the implementation block
@property (assign,nonatomic) char acousticIdEnabled;                          //@synthesize acousticIdEnabled=_acousticIdEnabled - In the implementation block
@property (assign,nonatomic) int audioFileType;                               //@synthesize audioFileType=_audioFileType - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithActivationEvent:(int)arg1 ;
-(void)setUseStreamingDictation:(char)arg1 ;
-(void)setUseAutomaticEndpointing:(char)arg1 ;
-(NSString *)serverCommandId;
-(int)audioFileType;
-(int)activationEvent;
-(void)setActivationEvent:(int)arg1 ;
-(char)useBorealisBuffer;
-(void)setUseBorealisBuffer:(char)arg1 ;
-(NSString *)btDeviceAddress;
-(void)setBtDeviceAddress:(NSString *)arg1 ;
-(char)isEyesFree;
-(void)setIsEyesFree:(char)arg1 ;
-(void)setServerCommandId:(NSString *)arg1 ;
-(char)useAutomaticEndpointing;
-(char)useStreamingDictation;
-(double)activationEventTime;
-(void)setActivationEventTime:(double)arg1 ;
-(double)expectedActivationEventTime;
-(void)setExpectedActivationEventTime:(double)arg1 ;
-(char)isInitialBringUp;
-(void)setIsInitialBringUp:(char)arg1 ;
-(NSNumber *)homeButtonUpFromBeep;
-(void)setHomeButtonUpFromBeep:(NSNumber *)arg1 ;
-(char)acousticIdEnabled;
-(void)setAcousticIdEnabled:(char)arg1 ;
-(void)setAudioFileType:(int)arg1 ;
@end

/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:03 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TTSSpeechService;
@class NSString;

@interface TTSSpeechVoice : NSObject {

	id<TTSSpeechService> _service;
	char _useVoiceBooster;
	char _isDefault;
	char _isCustomVoice;
	NSString* _name;
	NSString* _language;
	NSString* _identifier;
	int _footprint;
	int _gender;

}

@property (nonatomic,retain) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * language;                 //@synthesize language=_language - In the implementation block
@property (nonatomic,retain) NSString * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) int footprint;                       //@synthesize footprint=_footprint - In the implementation block
@property (nonatomic,readonly) char isDefault;                    //@synthesize isDefault=_isDefault - In the implementation block
@property (assign,nonatomic) char isCustomVoice;                  //@synthesize isCustomVoice=_isCustomVoice - In the implementation block
@property (assign,nonatomic) int gender;                          //@synthesize gender=_gender - In the implementation block
@property (nonatomic,readonly) char useVoiceBooster; 
-(int)gender;
-(void)setGender:(int)arg1 ;
-(id)init;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setFootprint:(int)arg1 ;
-(id)service;
-(void)setService:(id)arg1 ;
-(char)isDefault;
-(void)_initializeVoiceBooster;
-(void)_routeChange:(id)arg1 ;
-(char)useVoiceBooster;
-(char)isCustomVoice;
-(void)setIsCustomVoice:(char)arg1 ;
-(int)footprint;
@end


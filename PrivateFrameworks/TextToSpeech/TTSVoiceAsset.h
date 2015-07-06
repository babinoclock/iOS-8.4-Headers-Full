/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:04 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TextToSpeech/NSSecureCoding.h>

@class NSString, NSArray;

@interface TTSVoiceAsset : NSObject <NSSecureCoding> {

	char _isInstalled;
	NSString* _name;
	NSArray* _languages;
	int _gender;
	int _footprint;

}

@property (nonatomic,readonly) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSArray * languages;              //@synthesize languages=_languages - In the implementation block
@property (nonatomic,readonly) int gender;                       //@synthesize gender=_gender - In the implementation block
@property (nonatomic,readonly) int footprint;                    //@synthesize footprint=_footprint - In the implementation block
@property (nonatomic,readonly) char isInstalled;                 //@synthesize isInstalled=_isInstalled - In the implementation block
+(char)supportsSecureCoding;
-(int)gender;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(id)dictionaryRepresentation;
-(NSArray *)languages;
-(int)footprint;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)initWithName:(id)arg1 languages:(id)arg2 gender:(int)arg3 footprint:(int)arg4 isInstalled:(char)arg5 ;
-(char)isInstalled;
@end


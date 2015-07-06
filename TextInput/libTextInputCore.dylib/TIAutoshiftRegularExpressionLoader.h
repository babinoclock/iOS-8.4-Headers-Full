/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:37 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSRegularExpression, NSString;

@interface TIAutoshiftRegularExpressionLoader : NSObject {

	NSRegularExpression* _regex;
	NSString* _sentenceDelimitingCharacters;
	NSString* _sentenceTrailingCharacters;
	NSString* _nextSentencePrefixCharacters;

}

@property (nonatomic,retain) NSRegularExpression * regex;                            //@synthesize regex=_regex - In the implementation block
@property (nonatomic,readonly) NSString * sentenceDelimitingCharacters;              //@synthesize sentenceDelimitingCharacters=_sentenceDelimitingCharacters - In the implementation block
@property (nonatomic,readonly) NSString * sentenceTrailingCharacters;                //@synthesize sentenceTrailingCharacters=_sentenceTrailingCharacters - In the implementation block
@property (nonatomic,readonly) NSString * nextSentencePrefixCharacters;              //@synthesize nextSentencePrefixCharacters=_nextSentencePrefixCharacters - In the implementation block
+(id)loaderWithSentenceDelimiters:(id)arg1 trailingChars:(id)arg2 prefixChars:(id)arg3 ;
-(NSRegularExpression *)regex;
-(void)dealloc;
-(NSString *)sentenceDelimitingCharacters;
-(NSString *)sentenceTrailingCharacters;
-(void)startBackgroundLoad;
-(id)initWithSentenceDelimiters:(id)arg1 trailingChars:(id)arg2 prefixChars:(id)arg3 ;
-(NSString *)nextSentencePrefixCharacters;
-(void)setRegex:(NSRegularExpression *)arg1 ;
@end

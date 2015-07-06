/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:29 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SASSpeechPartialResult : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * tokens; 
+(id)speechPartialResult;
+(id)speechPartialResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)af_correctionContext;
-(id)af_userUtteranceValue;
-(id)af_bestTextInterpretation;
-(id)groupIdentifier;
-(NSArray *)tokens;
-(id)encodedClassName;
-(char)requiresResponse;
-(void)setTokens:(NSArray *)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:25 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAUISnippet.h>

@class NSNumber, NSArray;

@interface SAPhoneVoiceMailSnippet : SAUISnippet

@property (nonatomic,copy) NSNumber * autoPlay; 
@property (nonatomic,copy) NSArray * calls; 
@property (nonatomic,copy) NSArray * playVoiceMailCommands; 
@property (nonatomic,retain) id<SAClientBoundCommand> postPlayCommand; 
+(id)voiceMailSnippet;
+(id)voiceMailSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)calls;
-(id)encodedClassName;
-(NSNumber *)autoPlay;
-(void)setAutoPlay:(NSNumber *)arg1 ;
-(NSArray *)playVoiceMailCommands;
-(void)setPlayVoiceMailCommands:(NSArray *)arg1 ;
-(id<SAClientBoundCommand>)postPlayCommand;
-(void)setPostPlayCommand:(id<SAClientBoundCommand>)arg1 ;
-(void)setCalls:(NSArray *)arg1 ;
@end

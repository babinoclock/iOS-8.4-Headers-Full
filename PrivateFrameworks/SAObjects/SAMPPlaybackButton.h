/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:26 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAAceView.h>

@class NSArray;

@interface SAMPPlaybackButton : SAAceView

@property (nonatomic,copy) NSArray * pauseCommands; 
@property (nonatomic,copy) NSArray * playCommands; 
+(id)playbackButton;
+(id)playbackButtonWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)pauseCommands;
-(void)setPauseCommands:(NSArray *)arg1 ;
-(NSArray *)playCommands;
-(void)setPlayCommands:(NSArray *)arg1 ;
@end


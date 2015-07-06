/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:25 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SABackgroundContextObject.h>

@class NSString, SAMPMediaItem, SANPCommandInfo, SAMPNowPlayingQueuePosition, NSNumber;

@interface SAMPQueueState : AceObject <SABackgroundContextObject>

@property (nonatomic,copy) NSString * applicationIdentifier; 
@property (nonatomic,retain) SAMPMediaItem * listeningToItem; 
@property (nonatomic,retain) SANPCommandInfo * nowPlayingCommandInfo; 
@property (nonatomic,retain) SAMPNowPlayingQueuePosition * playbackQueuePosition; 
@property (nonatomic,copy) NSNumber * playbackRate; 
@property (nonatomic,copy) NSString * source; 
@property (assign,nonatomic) int state; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)queueState;
+(id)queueStateWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSNumber *)playbackRate;
-(void)setPlaybackRate:(NSNumber *)arg1 ;
-(int)state;
-(void)setState:(int)arg1 ;
-(NSString *)applicationIdentifier;
-(NSString *)source;
-(void)setSource:(NSString *)arg1 ;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(id)encodedClassName;
-(SAMPMediaItem *)listeningToItem;
-(void)setListeningToItem:(SAMPMediaItem *)arg1 ;
-(SANPCommandInfo *)nowPlayingCommandInfo;
-(void)setNowPlayingCommandInfo:(SANPCommandInfo *)arg1 ;
-(SAMPNowPlayingQueuePosition *)playbackQueuePosition;
-(void)setPlaybackQueuePosition:(SAMPNowPlayingQueuePosition *)arg1 ;
@end


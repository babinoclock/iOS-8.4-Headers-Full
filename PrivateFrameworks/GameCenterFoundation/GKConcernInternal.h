/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:41 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKPlayerInternal, NSString;

@interface GKConcernInternal : GKInternalRepresentation {

	GKPlayerInternal* _player;
	NSString* _message;
	unsigned _concernID;

}

@property (nonatomic,retain) GKPlayerInternal * player;              //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) unsigned concernID;                     //@synthesize concernID=_concernID - In the implementation block
@property (nonatomic,copy) NSString * message;                       //@synthesize message=_message - In the implementation block
+(id)secureCodedPropertyKeys;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(unsigned)concernID;
-(void)setConcernID:(unsigned)arg1 ;
-(void)setPlayer:(GKPlayerInternal *)arg1 ;
-(GKPlayerInternal *)player;
@end

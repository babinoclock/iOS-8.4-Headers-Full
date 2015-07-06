/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:39 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class GKRecentMatchInternal, GKGame, GKPlayer, NSDate;

@interface GKGameMatch : NSObject {

	GKRecentMatchInternal* _internal;
	GKGame* _game;
	GKPlayer* _player;

}

@property (nonatomic,readonly) GKPlayer * player;                 //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) GKGame * game;                     //@synthesize game=_game - In the implementation block
@property (nonatomic,retain) NSDate * date; 
@property (retain) GKRecentMatchInternal * internal;              //@synthesize internal=_internal - In the implementation block
+(char)instancesRespondToSelector:(SEL)arg1 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
-(GKRecentMatchInternal *)internal;
-(void)dealloc;
-(char)respondsToSelector:(SEL)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setInternal:(GKRecentMatchInternal *)arg1 ;
-(id)initWithInternalRepresentation:(id)arg1 game:(id)arg2 ;
-(GKGame *)game;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(GKPlayer *)player;
@end

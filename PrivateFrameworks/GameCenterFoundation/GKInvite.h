/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:40 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class GKInviteInternal, GKPlayer, NSString, NSData;

@interface GKInvite : NSObject {

	char _cancelled;
	GKInviteInternal* _internal;
	GKPlayer* _sender;

}

@property (nonatomic,retain,readonly) GKPlayer * sender;                     //@synthesize sender=_sender - In the implementation block
@property (nonatomic,retain,readonly) NSString * inviter; 
@property (getter=isHosted,nonatomic,readonly) char hosted; 
@property (nonatomic,readonly) unsigned playerGroup; 
@property (nonatomic,readonly) unsigned playerAttributes; 
@property (retain) GKInviteInternal * internal;                              //@synthesize internal=_internal - In the implementation block
@property (nonatomic,readonly) NSString * inviteID; 
@property (nonatomic,readonly) NSData * sessionToken; 
@property (nonatomic,readonly) NSString * message; 
@property (nonatomic,readonly) char isNearby; 
@property (assign,getter=isCancelled,nonatomic) char cancelled;              //@synthesize cancelled=_cancelled - In the implementation block
+(char)instancesRespondToSelector:(SEL)arg1 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
-(GKInviteInternal *)internal;
-(void)dealloc;
-(char)respondsToSelector:(SEL)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(char)isCancelled;
-(void)setCancelled:(char)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(GKPlayer *)sender;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(void)setInternal:(GKInviteInternal *)arg1 ;
-(char)isHosted;
-(NSString *)inviter;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
@end


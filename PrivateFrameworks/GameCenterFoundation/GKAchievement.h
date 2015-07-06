/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:40 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterFoundation/GameCenterFoundation-Structs.h>
#import <GameCenterFoundation/NSCopying.h>
#import <GameCenterFoundation/NSCoding.h>
#import <GameCenterFoundation/NSSecureCoding.h>

@class GKAchievementInternal, GKGame, GKPlayer, NSString, NSDate;

@interface GKAchievement : NSObject <NSCopying, NSCoding, NSSecureCoding> {

	char _showsCompletionBanner;
	char _hidden;
	GKAchievementInternal* _internal;
	GKGame* _game;
	GKPlayer* _player;

}

@property (nonatomic,copy) NSString * identifier; 
@property (assign,nonatomic) double percentComplete; 
@property (getter=isCompleted,nonatomic,readonly) char completed; 
@property (nonatomic,copy) NSDate * lastReportedDate; 
@property (assign,nonatomic) char showsCompletionBanner;                       //@synthesize showsCompletionBanner=_showsCompletionBanner - In the implementation block
@property (nonatomic,retain,readonly) GKPlayer * player;                       //@synthesize player=_player - In the implementation block
@property (assign,getter=isHidden,nonatomic) char hidden;                      //@synthesize hidden=_hidden - In the implementation block
@property (nonatomic,copy,readonly) NSString * groupIdentifier; 
@property (assign,nonatomic) GKGame * game;                                    //@synthesize game=_game - In the implementation block
@property (retain) GKAchievementInternal * internal;                           //@synthesize internal=_internal - In the implementation block
@property (nonatomic,copy) NSString * playerID; 
+(void)reportAchievements:(id)arg1 withEligibleChallenges:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
+(char)supportsSecureCoding;
+(char)instancesRespondToSelector:(SEL)arg1 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
+(void)loadAchievementsForGameV2:(id)arg1 player:(id)arg2 includeUnreported:(char)arg3 includeHidden:(char)arg4 withCompletionHandler:(/*^block*/id)arg5 ;
+(void)reportAchievements:(id)arg1 whileScreeningChallenges:(char)arg2 withEligibleChallenges:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
+(void)reportAchievements:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(void)loadAchievementsWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)loadAchievementWithID:(id)arg1 forGame:(id)arg2 players:(id)arg3 complete:(/*^block*/id)arg4 ;
+(void)resetAchievementsWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)loadAchievementsForGameV2:(id)arg1 players:(id)arg2 includeUnreported:(char)arg3 includeHidden:(char)arg4 withCompletionHandler:(/*^block*/id)arg5 ;
-(id)challengeComposeControllerWithMessage:(id)arg1 players:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)challengeComposeControllerWithPlayers:(id)arg1 message:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)issueChallengeToPlayers:(id)arg1 message:(id)arg2 ;
-(void)selectChallengeablePlayers:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)selectChallengeablePlayerIDs:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)showBanner;
-(void)loadImageWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)imageURL;
-(char)canBeShared;
-(id)activityViewControllerPlaceholderItems:(id)arg1 ;
-(id)activityViewController:(id)arg1 thumbnailForActivityType:(id)arg2 ;
-(int)activityViewController:(id)arg1 attachmentULRTypeForActivityType:(id)arg2 ;
-(id)activityViewControllerSubject:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemsForActivityType:(id)arg2 ;
-(id)activityViewControllerOperation:(id)arg1 ;
-(void)_gkSetSharingInfo:(id)arg1 ;
-(id)fetchSharingInfo;
-(id)_gkSharingInfo;
-(GKAchievementInternal *)internal;
-(char)isCompleted;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isHidden;
-(char)respondsToSelector:(SEL)arg1 ;
-(void)setHidden:(char)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(void)setInternal:(GKAchievementInternal *)arg1 ;
-(id)initWithInternalRepresentation:(id)arg1 playerID:(id)arg2 ;
-(void)setShowsCompletionBanner:(char)arg1 ;
-(char)showsCompletionBanner;
-(id)initWithIdentifier:(id)arg1 player:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 forPlayer:(id)arg2 ;
-(void)reportAchievementWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setGame:(GKGame *)arg1 ;
-(GKGame *)game;
-(NSString *)playerID;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(GKPlayer *)player;
@end


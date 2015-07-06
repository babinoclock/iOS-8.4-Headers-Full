/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:41 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterFoundation/GameCenterFoundation-Structs.h>
#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKPlayerInternal, NSString, NSDate;

@interface GKScoreInternal : GKInternalRepresentation {

	GKPlayerInternal* _player;
	NSString* _leaderboardIdentifier;
	NSString* _groupLeaderboardIdentifier;
	NSString* _formattedValue;
	NSDate* _date;
	long long _value;
	unsigned long long _context;
	unsigned _rank;
	char _valueSet;

}

@property (nonatomic,readonly) NSString * playerID; 
@property (nonatomic,retain) NSString * category; 
@property (nonatomic,retain) NSString * groupCategory; 
@property (nonatomic,retain) GKPlayerInternal * player;                          //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) NSString * leaderboardIdentifier;                   //@synthesize leaderboardIdentifier=_leaderboardIdentifier - In the implementation block
@property (nonatomic,retain) NSString * groupLeaderboardIdentifier;              //@synthesize groupLeaderboardIdentifier=_groupLeaderboardIdentifier - In the implementation block
@property (nonatomic,retain) NSString * formattedValue;                          //@synthesize formattedValue=_formattedValue - In the implementation block
@property (nonatomic,retain) NSDate * date;                                      //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) long long value;                                    //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) unsigned long long context;                         //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) unsigned rank;                                      //@synthesize rank=_rank - In the implementation block
@property (assign,nonatomic) char valueSet;                                      //@synthesize valueSet=_valueSet - In the implementation block
+(char)supportsSecureCoding;
+(id)secureCodedPropertyKeys;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)category;
-(NSDate *)date;
-(long long)value;
-(void)setValue:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)context;
-(void)setContext:(unsigned long long)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(unsigned)rank;
-(id)serverRepresentation;
-(NSString *)groupLeaderboardIdentifier;
-(void)setLeaderboardIdentifier:(NSString *)arg1 ;
-(void)setGroupLeaderboardIdentifier:(NSString *)arg1 ;
-(char)valueSet;
-(void)setGroupCategory:(NSString *)arg1 ;
-(void)setValueSet:(char)arg1 ;
-(NSString *)groupCategory;
-(void)setFormattedValue:(NSString *)arg1 ;
-(NSString *)formattedValue;
-(NSString *)leaderboardIdentifier;
-(NSString *)playerID;
-(void)setRank:(unsigned)arg1 ;
-(void)setPlayer:(GKPlayerInternal *)arg1 ;
-(GKPlayerInternal *)player;
@end


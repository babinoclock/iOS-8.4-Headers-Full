/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:32 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BulletinBoard/BBBulletin.h>

@class NSString, NSSet, BBContent, NSDate, NSTimeZone, BBAccessoryIcon, BBSound, BBAction, NSArray;

@interface BBBulletinRequest : BBBulletin {

	unsigned _expirationEvents;

}

@property (nonatomic,copy) NSString * bulletinID; 
@property (nonatomic,copy) NSString * sectionID; 
@property (nonatomic,copy) NSSet * subsectionIDs; 
@property (nonatomic,copy) NSString * recordID; 
@property (nonatomic,copy) NSString * publisherBulletinID; 
@property (nonatomic,copy) NSString * dismissalID; 
@property (assign,nonatomic) int addressBookRecordID; 
@property (assign,nonatomic) int sectionSubtype; 
@property (assign,nonatomic) unsigned counter; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,copy) NSString * message; 
@property (nonatomic,retain) BBContent * modalAlertContent; 
@property (assign,nonatomic) char hasEventDate; 
@property (nonatomic,retain) NSDate * date; 
@property (nonatomic,retain) NSDate * endDate; 
@property (nonatomic,retain) NSDate * recencyDate; 
@property (assign,nonatomic) int dateFormatStyle; 
@property (assign,nonatomic) char dateIsAllDay; 
@property (nonatomic,retain) NSTimeZone * timeZone; 
@property (nonatomic,retain) BBAccessoryIcon * accessoryIconMask; 
@property (assign,nonatomic) char clearable; 
@property (nonatomic,retain) BBSound * sound; 
@property (assign,nonatomic) int primaryAttachmentType; 
@property (assign,nonatomic) char wantsFullscreenPresentation; 
@property (nonatomic,copy) NSSet * alertSuppressionContexts; 
@property (nonatomic,copy) BBAction * defaultAction; 
@property (nonatomic,copy) BBAction * alternateAction; 
@property (nonatomic,copy) BBAction * acknowledgeAction; 
@property (nonatomic,copy) BBAction * dismissAction; 
@property (nonatomic,copy) BBAction * snoozeAction; 
@property (nonatomic,copy) BBAction * raiseAction; 
@property (nonatomic,copy) NSArray * supplementaryActions; 
@property (nonatomic,retain) NSDate * expirationDate; 
@property (assign,nonatomic) unsigned expirationEvents;                        //@synthesize expirationEvents=_expirationEvents - In the implementation block
@property (nonatomic,copy) BBAction * expireAction; 
@property (assign,nonatomic) char usesExternalSync; 
@property (assign,getter=isLoading,nonatomic) char loading; 
@property (nonatomic,copy) NSArray * buttons; 
@property (nonatomic,retain) BBContent * starkBannerContent; 
@property (assign,nonatomic) char expiresOnPublisherDeath; 
@property (nonatomic,copy) NSString * section; 
@property (assign,nonatomic) unsigned realertCount; 
@property (assign,nonatomic) char showsUnreadIndicator; 
@property (assign,nonatomic) char tentative; 
-(char)tentative;
-(void)setTentative:(char)arg1 ;
-(void)publish;
-(unsigned)expirationEvents;
-(void)setExpirationEvents:(unsigned)arg1 ;
-(void)addAttachmentOfType:(int)arg1 ;
-(void)publish:(char)arg1 ;
-(void)setSupplementaryActions:(id)arg1 forLayout:(int)arg2 ;
-(void)_updateSupplementaryAction:(id)arg1 ;
-(void)setContextValue:(id)arg1 forKey:(id)arg2 ;
-(void)setPrimaryAttachmentType:(int)arg1 ;
-(void)addButton:(id)arg1 ;
-(void)withdraw;
-(void)setSupplementaryActions:(NSArray *)arg1 ;
-(void)setUnlockActionLabel:(id)arg1 ;
-(unsigned)realertCount;
-(void)setRealertCount:(unsigned)arg1 ;
-(void)addAlertSuppressionAppID:(id)arg1 ;
-(void)generateBulletinID;
-(void)setShowsUnreadIndicator:(char)arg1 ;
-(char)showsUnreadIndicator;
-(char)hasContentModificationsRelativeTo:(id)arg1 ;
-(void)generateNewBulletinID;
@end


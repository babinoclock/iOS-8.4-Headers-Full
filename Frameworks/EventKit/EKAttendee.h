/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:49 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKParticipant.h>

@class NSDate;

@interface EKAttendee : EKParticipant

@property (assign,nonatomic) int pendingStatus; 
@property (nonatomic,readonly) NSDate * lastModifiedParticipationStatus; 
@property (assign,nonatomic) char commentChanged; 
@property (assign,nonatomic) char statusChanged; 
+(id)attendeeWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3 ;
+(id)attendeeWithEmailAddress:(id)arg1 name:(id)arg2 ;
-(id)initWithEmailAddress:(id)arg1 name:(id)arg2 ;
-(id)lazyLoadRelationForKey:(id)arg1 ;
-(char)isCurrentUser;
-(int)participantRole;
-(id)initWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3 ;
-(void)setParticipantRole:(int)arg1 ;
-(int)pendingStatus;
-(void)setPendingStatus:(int)arg1 ;
-(void)setCommentChanged:(char)arg1 ;
-(char)commentChanged;
-(void)setStatusChanged:(char)arg1 ;
-(char)statusChanged;
-(id)_persistentAttendee;
-(NSDate *)lastModifiedParticipationStatus;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)participantType;
-(int)participantStatus;
-(id)owner;
-(void)setParticipantType:(int)arg1 ;
-(void)setParticipantStatus:(int)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:48 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentParticipant.h>

@interface EKPersistentOrganizer : EKPersistentParticipant

@property (assign,getter=isCurrentUser,nonatomic) char currentUser; 
+(id)defaultPropertiesToLoad;
+(id)relations;
+(id)organizerWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3 isCurrentUser:(char)arg4 ;
-(char)isCurrentUser;
-(id)initWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3 isCurrentUser:(char)arg4 ;
-(void)setCurrentUser:(char)arg1 ;
-(int)entityType;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)owner;
-(void)setOwner:(id)arg1 ;
@end


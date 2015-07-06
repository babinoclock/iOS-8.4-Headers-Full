/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:49 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKObject.h>
#import <EventKit/NSCopying.h>
#import <EventKit/EKIdentityProtocol.h>

@class NSString, EKCalendar;

@interface EKSharee : EKObject <NSCopying, EKIdentityProtocol>

@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * emailAddress; 
@property (nonatomic,copy) NSString * firstName; 
@property (nonatomic,copy) NSString * lastName; 
@property (nonatomic,copy) NSString * externalID; 
@property (assign,nonatomic) int shareeStatus; 
@property (assign,nonatomic) int shareeAccessLevel; 
@property (nonatomic,readonly) EKCalendar * owner; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)shareeWithName:(id)arg1 emailAddress:(id)arg2 externalID:(id)arg3 ;
+(id)shareeWithEmailAddress:(id)arg1 name:(id)arg2 ;
-(id)initWithName:(id)arg1 emailAddress:(id)arg2 externalID:(id)arg3 ;
-(id)initWithEmailAddress:(id)arg1 name:(id)arg2 ;
-(void)setExternalID:(NSString *)arg1 ;
-(NSString *)externalID;
-(int)shareeStatus;
-(void)setShareeStatus:(int)arg1 ;
-(int)shareeAccessLevel;
-(void)setShareeAccessLevel:(int)arg1 ;
-(id)lazyLoadRelationForKey:(id)arg1 ;
-(void*)ABRecordWithAddressBook:(void*)arg1 ;
-(id)_persistentSharee;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)UUID;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(EKCalendar *)owner;
-(NSString *)emailAddress;
-(void)setEmailAddress:(NSString *)arg1 ;
@end

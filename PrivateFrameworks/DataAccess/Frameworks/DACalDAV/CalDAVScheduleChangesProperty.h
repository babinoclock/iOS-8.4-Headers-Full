/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:22 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, CalDAVOccurrenceChange, NSMutableDictionary, NSArray;

@interface CalDAVScheduleChangesProperty : NSObject {

	NSString* _dateStamp;
	int _actionType;
	NSString* _attendeeAddress;
	CalDAVOccurrenceChange* _masterChange;
	NSMutableDictionary* _occurrenceChanges;

}

@property (nonatomic,readonly) char isCancel; 
@property (nonatomic,readonly) char isReply; 
@property (nonatomic,readonly) char isUpdate; 
@property (nonatomic,readonly) char isCreate; 
@property (nonatomic,readonly) NSArray * recurrenceIDs; 
@property (nonatomic,retain) NSString * dateStamp;                                 //@synthesize dateStamp=_dateStamp - In the implementation block
@property (assign,nonatomic) int actionType;                                       //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,retain) NSString * attendeeAddress;                           //@synthesize attendeeAddress=_attendeeAddress - In the implementation block
@property (nonatomic,retain) CalDAVOccurrenceChange * masterChange;                //@synthesize masterChange=_masterChange - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * occurrenceChanges;              //@synthesize occurrenceChanges=_occurrenceChanges - In the implementation block
+(void)initialize;
+(id)debugStringForType:(int)arg1 ;
+(id)propertyWithItem:(id)arg1 ;
-(id)init;
-(char)isReply;
-(NSArray *)recurrenceIDs;
-(id)changeForOccurrence:(id)arg1 ;
-(CalDAVOccurrenceChange *)masterChange;
-(char)isCreate;
-(NSString *)attendeeAddress;
-(void)setDateStamp:(NSString *)arg1 ;
-(void)setAttendeeAddress:(NSString *)arg1 ;
-(void)setMasterChange:(CalDAVOccurrenceChange *)arg1 ;
-(void)setOccurrenceChanges:(NSMutableDictionary *)arg1 ;
-(void)addOccurrenceChange:(id)arg1 ;
-(NSMutableDictionary *)occurrenceChanges;
-(char)isCancel;
-(char)isUpdate;
-(NSString *)dateStamp;
-(void)setActionType:(int)arg1 ;
-(int)actionType;
@end

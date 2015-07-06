/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:48 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class EKObjectID, NSDate, NSTimeZone, NSURL, NSString;

@interface EKAlarmOccurrence : NSObject {

	EKObjectID* _alarmID;
	EKObjectID* _ownerID;
	NSDate* _ownerDate;
	NSTimeZone* _ownerTimeZone;
	NSURL* _ownerURI;
	NSDate* _fireDate;
	NSString* _externalID;
	NSDate* _acknowledgedDate;

}

@property (nonatomic,readonly) EKObjectID * alarmID;                    //@synthesize alarmID=_alarmID - In the implementation block
@property (nonatomic,readonly) EKObjectID * ownerID;                    //@synthesize ownerID=_ownerID - In the implementation block
@property (nonatomic,readonly) NSDate * ownerDate;                      //@synthesize ownerDate=_ownerDate - In the implementation block
@property (nonatomic,readonly) NSTimeZone * ownerTimeZone;              //@synthesize ownerTimeZone=_ownerTimeZone - In the implementation block
@property (nonatomic,readonly) NSURL * ownerURI;                        //@synthesize ownerURI=_ownerURI - In the implementation block
@property (nonatomic,readonly) NSDate * fireDate;                       //@synthesize fireDate=_fireDate - In the implementation block
@property (nonatomic,readonly) NSString * externalID;                   //@synthesize externalID=_externalID - In the implementation block
@property (nonatomic,readonly) NSDate * acknowledgedDate;               //@synthesize acknowledgedDate=_acknowledgedDate - In the implementation block
+(id)alarmOccurrenceWithAlarmID:(id)arg1 ownerID:(id)arg2 ownerDate:(id)arg3 ownerTimeZone:(id)arg4 ownerURI:(id)arg5 fireDate:(id)arg6 externalID:(id)arg7 acknowledgedDate:(id)arg8 ;
-(NSString *)externalID;
-(NSDate *)acknowledgedDate;
-(EKObjectID *)ownerID;
-(NSDate *)ownerDate;
-(NSURL *)ownerURI;
-(NSTimeZone *)ownerTimeZone;
-(EKObjectID *)alarmID;
-(id)initWithAlarmID:(id)arg1 ownerID:(id)arg2 ownerDate:(id)arg3 ownerTimeZone:(id)arg4 ownerURI:(id)arg5 fireDate:(id)arg6 externalID:(id)arg7 acknowledgedDate:(id)arg8 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSDate *)fireDate;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
@end

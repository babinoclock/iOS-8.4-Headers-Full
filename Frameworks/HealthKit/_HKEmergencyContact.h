/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:25 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/NSSecureCoding.h>
#import <HealthKit/NSCopying.h>

@class NSString, NSNumber;

@interface _HKEmergencyContact : NSObject <NSSecureCoding, NSCopying> {

	NSString* _name;
	NSNumber* _nameRecordID;
	NSString* _phoneNumber;
	NSNumber* _phoneNumberPropertyID;
	NSString* _relationship;

}

@property (nonatomic,retain) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSNumber * nameRecordID;                       //@synthesize nameRecordID=_nameRecordID - In the implementation block
@property (nonatomic,retain) NSString * phoneNumber;                        //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) NSNumber * phoneNumberPropertyID;              //@synthesize phoneNumberPropertyID=_phoneNumberPropertyID - In the implementation block
@property (nonatomic,retain) NSString * relationship;                       //@synthesize relationship=_relationship - In the implementation block
+(char)supportsSecureCoding;
-(NSString *)relationship;
-(void)setNameRecordID:(NSNumber *)arg1 ;
-(void)setPhoneNumberPropertyID:(NSNumber *)arg1 ;
-(NSNumber *)nameRecordID;
-(NSNumber *)phoneNumberPropertyID;
-(void)_migrateToSchemaVersion:(int)arg1 withAddressBook:(void*)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)phoneNumber;
-(void)setRelationship:(NSString *)arg1 ;
-(void)setPhoneNumber:(NSString *)arg1 ;
@end


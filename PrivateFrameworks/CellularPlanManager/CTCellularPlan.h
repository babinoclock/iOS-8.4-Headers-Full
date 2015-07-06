/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:45 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CellularPlanManager/CellularPlanManager-Structs.h>
#import <CellularPlanManager/NSCopying.h>
#import <CellularPlanManager/NSSecureCoding.h>

@class NSString, CTCellularPlanProfile, CTCellularPlanSubscription, CTCellularPlanExtProperties, NSData, NSArray;

@interface CTCellularPlan : NSObject <NSCopying, NSSecureCoding> {

	NSString* _phoneNumber;
	CTCellularPlanProfile* _profile;
	CTCellularPlanSubscription* _subscription;
	CTCellularPlanExtProperties* _extendedProperties;

}

@property (nonatomic,readonly) NSData * profileId; 
@property (nonatomic,readonly) char isSelected; 
@property (nonatomic,readonly) NSString * iccid; 
@property (nonatomic,readonly) char autoRenew; 
@property (nonatomic,readonly) double timestamp; 
@property (nonatomic,readonly) double billingStartDate; 
@property (nonatomic,readonly) double billingEndDate; 
@property (nonatomic,readonly) NSString * carrierName; 
@property (nonatomic,readonly) int planType; 
@property (nonatomic,readonly) NSString * planDescription; 
@property (nonatomic,readonly) int planStatus; 
@property (nonatomic,readonly) int accountStatus; 
@property (nonatomic,readonly) NSString * accountURL; 
@property (nonatomic,readonly) NSArray * dataUsage; 
@property (nonatomic,readonly) int status; 
@property (nonatomic,retain) NSString * phoneNumber;                                        //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) CTCellularPlanProfile * profile;                               //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) CTCellularPlanSubscription * subscription;                     //@synthesize subscription=_subscription - In the implementation block
@property (nonatomic,retain) CTCellularPlanExtProperties * extendedProperties;              //@synthesize extendedProperties=_extendedProperties - In the implementation block
+(char)supportsSecureCoding;
-(NSString *)carrierName;
-(int)accountStatus;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(double)timestamp;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isSelected;
-(NSString *)phoneNumber;
-(int)status;
-(NSData *)profileId;
-(CTCellularPlanExtProperties *)extendedProperties;
-(int)planStatus;
-(NSString *)iccid;
-(char)autoRenew;
-(double)billingStartDate;
-(double)billingEndDate;
-(int)planType;
-(NSString *)planDescription;
-(NSString *)accountURL;
-(NSArray *)dataUsage;
-(void)setExtendedProperties:(CTCellularPlanExtProperties *)arg1 ;
-(id)initWithProfile:(id)arg1 subscription:(id)arg2 ;
-(void)setSubscription:(CTCellularPlanSubscription *)arg1 ;
-(CTCellularPlanSubscription *)subscription;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(CTCellularPlanProfile *)profile;
-(void)setProfile:(CTCellularPlanProfile *)arg1 ;
@end


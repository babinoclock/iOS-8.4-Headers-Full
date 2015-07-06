/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:01 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CKPropertyCoding.h>

@class NSDate, NSMutableDictionary, NSString;

@interface CKDServerConfiguration : NSObject <CKPropertyCoding> {

	NSDate* _expiry;
	NSMutableDictionary* _values;
	NSMutableDictionary* _allowedAppVersionsCache;

}

@property (nonatomic,retain) NSDate * expiry;                                            //@synthesize expiry=_expiry - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * values;                               //@synthesize values=_values - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * allowedAppVersionsCache;              //@synthesize allowedAppVersionsCache=_allowedAppVersionsCache - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)setValues:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)values;
-(id)flowControlBudgetForContainer:(id)arg1 ;
-(id)flowControlRegenerationForContainer:(id)arg1 ;
-(id)flowControlMaximumThrottleTime:(id)arg1 ;
-(double)publicIdentitiesExpirationTimeoutForContainer:(id)arg1 ;
-(char)applicationWithBundleID:(id)arg1 canSyncUsingVersion:(id)arg2 forContainer:(id)arg3 ;
-(unsigned)maxBatchSizeForContainer:(id)arg1 ;
-(char)shouldSignForMessageType:(int)arg1 inDatabaseScope:(int)arg2 forContainer:(id)arg3 ;
-(id)mescalCertURLForContainer:(id)arg1 ;
-(int)tokenRegisterDaysForContainer:(id)arg1 ;
-(char)isExpired;
-(id)initWithValues:(id)arg1 ;
-(void)setExpiry:(NSDate *)arg1 ;
-(NSDate *)expiry;
-(NSMutableDictionary *)allowedAppVersionsCache;
-(void)setAllowedAppVersionsCache:(NSMutableDictionary *)arg1 ;
-(id)valueForKeyPath:(id)arg1 forContainer:(id)arg2 ;
-(id)initWithPropertyDictionary:(id)arg1 ;
-(id)dictionaryPropertyEncoding;
-(unsigned long)mescalServerVersionForContainer:(id)arg1 ;
-(id)mescalSessionURLForContainer:(id)arg1 ;
@end


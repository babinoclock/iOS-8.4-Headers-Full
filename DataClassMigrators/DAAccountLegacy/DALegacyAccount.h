/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:03 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/DataClassMigrators/DAAccountLegacy.migrator/DAAccountLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface DALegacyAccount : NSObject {

	NSMutableDictionary* _properties;

}

@property (nonatomic,readonly) NSMutableDictionary * properties;              //@synthesize properties=_properties - In the implementation block
-(char)upgradeAccountWithParent:(id)arg1 ;
-(void)_removeHostsToTrust;
-(char)_upgradeSelfFromPreKirkwood;
-(id)host;
-(id)initWithProperties:(id)arg1 ;
-(NSMutableDictionary *)properties;
-(int)port;
-(id)accountID;
-(void)setPrincipalURL:(id)arg1 ;
-(int)daAccountVersion;
-(char)useSSL;
-(void)resetAccountID;
-(id)changeTrackingID;
-(id)accountPropertyForKey:(id)arg1 ;
-(void)setAccountProperty:(id)arg1 forKey:(id)arg2 ;
-(void)removeAccountPropertyForKey:(id)arg1 ;
-(id)username;
@end


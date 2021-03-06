/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:17 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ACAccountStore, NSMutableSet, NSMutableDictionary, NSDictionary;

@interface AXHASettings : NSObject {

	ACAccountStore* _accountStore;
	NSMutableSet* _registeredNotifications;
	NSMutableSet* _synchronizePreferences;
	NSMutableDictionary* _updateBlocks;

}

@property (nonatomic,retain) NSDictionary * pairedHearingAids; 
@property (assign,nonatomic) char independentHearingAidSettings; 
@property (assign,nonatomic) char allowHearingAidControlOnLockScreen; 
@property (assign,nonatomic) char shouldStreamToLeftAid; 
@property (assign,nonatomic) char shouldStreamToRightAid; 
@property (nonatomic,retain) NSMutableSet * registeredNotifications;               //@synthesize registeredNotifications=_registeredNotifications - In the implementation block
@property (nonatomic,retain) NSMutableSet * synchronizePreferences;                //@synthesize synchronizePreferences=_synchronizePreferences - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * updateBlocks;                   //@synthesize updateBlocks=_updateBlocks - In the implementation block
+(id)sharedInstance;
+(void)initialize;
-(void)dealloc;
-(id)init;
-(NSMutableSet *)synchronizePreferences;
-(char)shouldUseiCloud;
-(void)icloudHearingSettingsDidChange:(id)arg1 ;
-(void)pushLocalHearingAidsToiCloud;
-(void)iCloudAccountDidChange:(id)arg1 ;
-(void)setLocalHearingAidsFromiCloud:(id)arg1 ;
-(void)_synchronizeIfNecessary:(id)arg1 ;
-(char)isPairedWithFakeHearingAids;
-(void)setSynchronizePreferences:(NSMutableSet *)arg1 ;
-(void)registerUpdateBlock:(/*^block*/id)arg1 forRetrieveSelector:(SEL)arg2 withListener:(id)arg3 ;
-(char)allowHearingAidControlOnLockScreen;
-(char)shouldStreamToLeftAid;
-(char)shouldStreamToRightAid;
-(NSDictionary *)pairedHearingAids;
-(char)independentHearingAidSettings;
-(void)_setValue:(id)arg1 forPreferenceKey:(id)arg2 ;
-(id)_notificationForPreferenceKey:(id)arg1 ;
-(void)_registerForNotification:(id)arg1 ;
-(NSMutableDictionary *)updateBlocks;
-(id)_preferenceKeyForSelector:(SEL)arg1 ;
-(id)_valueForPreferenceKey:(id)arg1 ;
-(void)_handlePreferenceChanged:(id)arg1 ;
-(void)setPairedHearingAids:(NSDictionary *)arg1 ;
-(void)setIndependentHearingAidSettings:(char)arg1 ;
-(void)setAllowHearingAidControlOnLockScreen:(char)arg1 ;
-(void)setShouldStreamToLeftAid:(char)arg1 ;
-(void)setShouldStreamToRightAid:(char)arg1 ;
-(void)setUpdateBlocks:(NSMutableDictionary *)arg1 ;
-(NSMutableSet *)registeredNotifications;
-(void)setRegisteredNotifications:(NSMutableSet *)arg1 ;
@end


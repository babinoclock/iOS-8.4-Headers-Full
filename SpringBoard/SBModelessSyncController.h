/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:52 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ATConnection;

@interface SBModelessSyncController : NSObject {

	char _isAppSyncing;
	char _isSyncing;
	int _syncRegistrationToken;
	int _iCloudRestoreToken;
	char _restoringFromICloud;
	char _isAutoSyncing;
	char _isWirelessSyncing;
	ATConnection* _airTrafficConnection;

}

@property (nonatomic,readonly) char isAppSyncing;                       //@synthesize isAppSyncing=_isAppSyncing - In the implementation block
@property (nonatomic,readonly) char isSyncing;                          //@synthesize isSyncing=_isSyncing - In the implementation block
@property (nonatomic,readonly) char isRestoringFromICloud; 
@property (nonatomic,readonly) char isAutoSyncing;                      //@synthesize isAutoSyncing=_isAutoSyncing - In the implementation block
@property (nonatomic,readonly) char isWirelessSyncing;                  //@synthesize isWirelessSyncing=_isWirelessSyncing - In the implementation block
+(id)sharedInstance;
-(void)gotLowBatteryWarning;
-(char)isWirelessSyncing;
-(char)isAutoSyncing;
-(void)_appSyncStateChanged;
-(void)setIsSyncing:(char)arg1 ;
-(void)_beginObservingICloudRestoreStatus;
-(void)_endObservingICloudRestoreStatus;
-(void)_setAppSyncState:(char)arg1 ;
-(void)_updateIconsForStateChange;
-(void)_iCloudStatusChanged;
-(char)isRestoringFromICloud;
-(char)isAppSyncing;
-(void)beginMonitoring;
-(void)endMonitoring;
-(void)dealloc;
-(id)init;
-(void)connectionWasInterrupted:(id)arg1 ;
-(void)connection:(id)arg1 updatedProgress:(id)arg2 ;
-(char)isSyncing;
@end


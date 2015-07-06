/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:54 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardFoundation/SBFDeviceLockController.h>

@class SecureBackup;

@interface SBDeviceLockController : SBFDeviceLockController {

	SecureBackup* _secureBackupHelper;

}
+(id)_sharedControllerCreateIfNecessary:(char)arg1 ;
+(id)sharedController;
-(char)shouldAllowUnlockToApplication:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(char)_shouldSuppressLockOnInit;
-(char)_shouldLockDeviceNow;
-(void)_lockStateChangedFrom:(int)arg1 to:(int)arg2 ;
-(void)_wipeDevice;
-(char)attemptDeviceUnlockWithPassword:(id)arg1 appRequested:(char)arg2 ;
-(void)setBlockedForThermalCondition:(char)arg1 ;
-(void)_keybagLockStateChangedTo:(int)arg1 ;
-(void)_cachePassword:(id)arg1 ;
-(void)_uncachePasscodeIfNecessary;
@end


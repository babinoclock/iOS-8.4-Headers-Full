/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:46 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/FBApplicationLibraryObserver.h>

@class NSTimer, SBPasscodeLockDisableAssertion, NSString;

@interface SBSyncController : NSObject <FBApplicationLibraryObserver> {

	int _restoreState;
	int _resetState;
	int _restoreTimerState;
	NSTimer* _restoreTimer;
	NSTimer* _progressTimer;
	char _showingResetUI;
	char _appsChangedDuringSync;
	int _restoreStartedNotifyToken;
	int _restoreEndedNotifyToken;
	SBPasscodeLockDisableAssertion* _disableDeviceLockAssertion;
	char _isAppSyncing;
	char _inExtendedAppSyncCoalescePeriod;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(char)isResetting;
-(void)_rebootNow;
-(void)finishedTerminatingApplications;
-(void)beginRestoring;
-(void)_didEndRestoring:(int)arg1 ;
-(void)_resetStarted:(id)arg1 ;
-(void)_resetEnded:(id)arg1 ;
-(void)_wirelessSyncEnded:(id)arg1 ;
-(void)_wirelessSyncBegan:(id)arg1 ;
-(void)_notifyRestoreCanProceed;
-(void)_setRestoreState:(int)arg1 ;
-(void)_setupRestoreTimer;
-(void)_killApplications;
-(void)_delayedBeginReset;
-(void)_syncSessionDidBegin;
-(void)_syncSessionDidEnd;
-(void)_didEndResetting;
-(void)_invalidateRestoreTimer;
-(void)_finishEndRestoring;
-(void)_delayedQuitApplications;
-(char)_isBackupAgentRunning;
-(void)_restoreTimerFired:(id)arg1 ;
-(void)_appInstallationNotification;
-(void)cancelRestoring;
-(void)beginResetting:(char)arg1 ;
-(void)_updateProgress;
-(void)startObserving;
-(void)dealloc;
-(char)isRestoring;
-(void)applicationLibrary:(id)arg1 didAddApplications:(id)arg2 ;
-(void)applicationLibrary:(id)arg1 didReplaceApplications:(id)arg2 withApplications:(id)arg3 ;
-(void)applicationLibrary:(id)arg1 didRemoveApplications:(id)arg2 ;
-(void)stopObserving;
-(char)isInUse;
-(int)resetState;
-(int)restoreState;
@end


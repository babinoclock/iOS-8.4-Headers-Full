/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:24 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MBManagerDelegate
@optional
-(void)manager:(id)arg1 didSetBackupEnabled:(char)arg2;
-(void)manager:(id)arg1 didUpdateProgress:(float)arg2 estimatedTimeRemaining:(unsigned)arg3;
-(void)managerDidFinishBackup:(id)arg1;
-(void)managerDidFinishScan:(id)arg1;
-(void)managerDidFinishRestore:(id)arg1;
-(void)managerDidCancelRestore:(id)arg1;
-(void)managerDidFinishVerification:(id)arg1;
-(void)manager:(id)arg1 didFailBackupWithError:(id)arg2;
-(void)manager:(id)arg1 didFailScanWithError:(id)arg2;
-(void)manager:(id)arg1 didFailRestoreWithError:(id)arg2;
-(void)manager:(id)arg1 didFailVerificationWithError:(id)arg2;
-(void)managerDidLoseConnectionToService:(id)arg1;

@end

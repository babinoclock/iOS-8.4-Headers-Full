/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:49 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface SBSetupManager : NSObject {

	char _inSetupMode;

}

@property (getter=isInSetupMode,nonatomic,readonly) char inSetupMode; 
+(id)sharedInstance;
-(char)isInSetupMode;
-(char)updateInSetupMode;
-(char)_setInSetupMode:(char)arg1 ;
-(char)setupHasFinishedRestoringFromBackup;
-(char)setupIsRunningForUpdateInstall;
@end

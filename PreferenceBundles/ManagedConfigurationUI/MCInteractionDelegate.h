/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:13 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MCInteractionDelegate <NSObject>
@optional
-(void)profileConnection:(id)arg1 didUpdateStatus:(id)arg2;
-(void)profileConnection:(id)arg1 didBeginInstallingNextProfile:(id)arg2;

@required
-(void)profileConnection:(id)arg1 didFinishInstallationWithIdentifier:(id)arg2 error:(id)arg3;
-(void)profileConnectionDidRequestCurrentPasscode:(id)arg1;
-(void)profileConnection:(id)arg1 didRequestUserInput:(id)arg2;
-(void)profileConnection:(id)arg1 didShowUserWarnings:(id)arg2;
-(void)profileConnection:(id)arg1 didFinishPreflightWithError:(id)arg2;

@end


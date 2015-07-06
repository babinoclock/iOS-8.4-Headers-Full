/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:06 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AASetupAssistantDelegateService
@optional
-(void)setupOperationFailed;
-(char)canAutoSetupMailAccount:(id)arg1;
-(char)needSetupForMailAccount:(id)arg1;
-(void)setupMailAccount:(id)arg1 password:(id)arg2 handler:(/*^block*/id)arg3;
-(void)verifyAccountWithAppleID:(id)arg1 handler:(/*^block*/id)arg2;
-(void)setCloudServicesEnabled:(char)arg1 handler:(/*^block*/id)arg2;
-(void)setDeviceLocatorEnabled:(char)arg1;
-(void)setBackupEnabled:(char)arg1 handler:(/*^block*/id)arg2;
-(void)completeEnablingCloudServicesWithHandler:(/*^block*/id)arg1;

@required
-(id)delegateServiceIdentifier;
-(id)accountSetupRequestParameters;
-(void)completeSetupWithResponseParameters:(id)arg1 handler:(/*^block*/id)arg2;

@end


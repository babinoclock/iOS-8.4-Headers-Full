/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:17 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MCProfileConnectionXPCProtocol <NSObject>
@required
-(void)doMCICDidUpdateStatus:(id)arg1 completion:(/*^block*/id)arg2;
-(void)doMCICDidBeginInstallingNextProfileData:(id)arg1 completion:(/*^block*/id)arg2;
-(void)doMCICDidFinishInstallationWithIdentifier:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3;
-(void)doMCICDidRequestUserInput:(id)arg1 completion:(/*^block*/id)arg2;
-(void)doMCICDidFinishPreflightWithError:(id)arg1 completion:(/*^block*/id)arg2;
-(void)doMCICDidRequestShowUserWarnings:(id)arg1 completion:(/*^block*/id)arg2;
-(void)doMCICDidRequestCurrentPasscodeWithCompletion:(/*^block*/id)arg1;

@end

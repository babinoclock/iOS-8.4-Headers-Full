/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:27 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppleAccountUI/DAValidityCheckConsumer.h>

@class ACAccountStore, ACAccount, NSMutableDictionary, NSMutableArray, MFAccountValidator, AAAutoAccountVerifier, DAAccount, NSString;

@interface AAUICloudSyncServicesController : NSObject <DAValidityCheckConsumer> {

	ACAccountStore* _accountStore;
	ACAccount* _account;
	NSMutableDictionary* _queuedDataclassActions;
	NSMutableArray* _dataclassesRequiringMergeDecision;
	char _didUserConsentToMerge;
	char _isVerifyingExistingEmailAccount;
	MFAccountValidator* _validator;
	AAAutoAccountVerifier* _verifier;
	DAAccount* _accountBeingValidated;
	/*^block*/id _handler;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)_accountClassForAddress:(id)arg1 ;
+(id)_usernameFromAddress:(id)arg1 ;
+(id)_domainFromAddress:(id)arg1 ;
+(char)canAutoSetupMailAccount:(id)arg1 ;
+(char)needSetupForMailAccount:(id)arg1 ;
-(id)init;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(char)_shouldInitiallyEnableDataclass:(id)arg1 forAccount:(id)arg2 ;
-(void)_presentMergeConfirmationForDataclasses:(id)arg1 account:(id)arg2 ;
-(char)_dataclassBoundToSingleAccountAndOnAlready:(id)arg1 withAccount:(id)arg2 ;
-(void)_validateExistingEmailAccount:(id)arg1 withPassword:(id)arg2 ;
-(void)_createAndValidateDAMailAccountWithProperties:(id)arg1 ;
-(void)_createAndValidateMailAccountWithProperties:(id)arg1 ;
-(void)_validateDAAccount:(id)arg1 ;
-(void)_validateMailAccount:(id)arg1 ;
-(void)_addDAEmailAccount:(id)arg1 ;
-(void)_addMailAccount:(id)arg1 ;
-(void)setCloudServicesEnabled:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)setBackupEnabled:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)completeEnablingCloudServicesWithCompletion:(/*^block*/id)arg1 ;
-(void)verifyAccountWithAppleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setupMailAccount:(id)arg1 password:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setDeviceLocatorEnabled:(char)arg1 ;
-(void)account:(id)arg1 isValid:(char)arg2 validationError:(id)arg3 ;
-(void)accountValidator:(id)arg1 finishedValidationOfAccount:(id)arg2 usedSSL:(char)arg3 ;
-(id)_account;
@end

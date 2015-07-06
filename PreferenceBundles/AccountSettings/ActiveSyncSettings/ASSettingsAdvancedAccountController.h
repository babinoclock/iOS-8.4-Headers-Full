/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:11 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/ActiveSyncSettings.bundle/ActiveSyncSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ActiveSyncSettings/ActiveSyncSettings-Structs.h>
#import <Preferences/PSListController.h>
#import <ActiveSyncSettings/ACUIIdentityPickerViewControllerDelegate.h>

@class ASSettingsAccountsUIController, ASAccount, NSString;

@interface ASSettingsAdvancedAccountController : PSListController <ACUIIdentityPickerViewControllerDelegate> {

	ASSettingsAccountsUIController* _accountController;
	ASAccount* _account;

}

@property (assign,nonatomic,__weak) ASSettingsAccountsUIController * accountController;              //@synthesize accountController=_accountController - In the implementation block
@property (nonatomic,retain) ASAccount * account;                                                    //@synthesize account=_account - In the implementation block
@property (assign,nonatomic) char accountArchivesMailByDefault; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(char)_accountIsManaged;
-(id)lastGroupSpecifierInSpecifiers:(id)arg1 ;
-(char)accountArchivesMailByDefault;
-(char)_smimeEnabled;
-(id)_smimeSigningSpecifier;
-(id)_smimeEncryptSpecifier;
-(void)setAccountBooleanProperty:(id)arg1 withSpecifier:(id)arg2 ;
-(id)accountBooleanPropertyWithSpecifier:(id)arg1 ;
-(void)_insertAdditionalSMIMESpecifiersAnimated:(char)arg1 ;
-(void)setAccountArchivesMailByDefault:(char)arg1 ;
-(void)_setNeedsSaveAndValidation:(char)arg1 ;
-(void)_removeAdditionalSMIMESpecifiersAnimated:(char)arg1 ;
-(void)_handleTrustFromIdentity:(SecIdentityRef)arg1 handler:(/*^block*/id)arg2 ;
-(id)_persistentRefForIdentity:(SecIdentityRef)arg1 ;
-(char)isPropertyEnabledForIdentityPickerController:(id)arg1 ;
-(SecIdentityRef)selectedIdentityForIdentityPickerController:(id)arg1 ;
-(void)identityPickerController:(id)arg1 setPropertyEnabled:(char)arg2 withIdentity:(SecIdentityRef)arg3 ;
-(id)localizedSwitchNameForIdentityPickerController:(id)arg1 ;
-(id)copyIdentitiesForIdentityPickerController:(id)arg1 ;
-(SecTrustRef)copyTrustForIdentityPickerController:(id)arg1 identity:(SecIdentityRef)arg2 ;
-(id)emailAddressesForIdentityPickerController:(id)arg1 ;
-(char)allowEditingForIdentityPickerController:(id)arg1 ;
-(ASAccount *)account;
-(void)setAccount:(ASAccount *)arg1 ;
-(ASSettingsAccountsUIController *)accountController;
-(void)setAccountController:(ASSettingsAccountsUIController *)arg1 ;
-(void)_accountsChanged:(id)arg1 ;
-(id)specifiers;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:11 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/DAVSettings.bundle/DAVSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataAccessUI/DASettingsAccountsUIController.h>

@interface DAVSettingsAccountsUIController : DASettingsAccountsUIController {

	char _isReloadingProperties;
	char _attemptedInitialValidation;

}

@property (assign,nonatomic) char isReloadingProperties;                   //@synthesize isReloadingProperties=_isReloadingProperties - In the implementation block
@property (assign,nonatomic) char attemptedInitialValidation;              //@synthesize attemptedInitialValidation=_attemptedInitialValidation - In the implementation block
-(void)setAccountBooleanProperty:(id)arg1 withSpecifier:(id)arg2 ;
-(id)accountBooleanPropertyWithSpecifier:(id)arg1 ;
-(id)localizedValidationFailureTitleString;
-(id)newDefaultAccount;
-(id)localizedConfirmSaveUnvalidatedAccountMessageString;
-(id)localizedAccountSetupTitleString;
-(id)acAccountTypeString;
-(int)defaultDADataclassesToEnable;
-(id)settingsPlistName;
-(char)showDeleteButton;
-(char)attemptedInitialValidation;
-(void)setAttemptedInitialValidation:(char)arg1 ;
-(char)isReloadingProperties;
-(void)setIsReloadingProperties:(char)arg1 ;
-(void)_updateDescriptionFromServer:(id)arg1 ;
-(void)setAccountProperty:(id)arg1 withSpecifier:(id)arg2 ;
-(id)accountPropertyWithSpecifier:(id)arg1 ;
-(char)validateAccount;
-(char)haveEnoughValues;
-(id)accountSpecifiers;
-(void)account:(id)arg1 isValid:(char)arg2 validationError:(id)arg3 ;
-(void)didConfirmTryWithoutSSL:(char)arg1 ;
-(char)dismissesAfterInitialSetup;
@end


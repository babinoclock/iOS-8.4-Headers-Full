/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:14 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafariSettings/SafariSettingsListController.h>
#import <MobileSafariSettings/DevicePINControllerDelegate.h>
#import <MobileSafariSettings/ABPeoplePickerNavigationControllerDelegate.h>

@class UIPopoverController, NSIndexPath, ABPeoplePickerNavigationController, NSString;

@interface SafariAutoFillSettingsController : SafariSettingsListController <DevicePINControllerDelegate, ABPeoplePickerNavigationControllerDelegate> {

	UIPopoverController* _autoFillContactController;
	NSIndexPath* _autoFillContactIndex;
	char _isMeCardSet;
	void* _addressBook;
	ABPeoplePickerNavigationController* _meCardPicker;
	/*^block*/id _passcodeEntryCompletionHandler;
	/*^block*/id _promptCompletionHandler;
	/*^block*/id _passcodeSetupCompletionHandler;

}

@property (nonatomic,readonly) void* addressBook;                   //@synthesize addressBook=_addressBook - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)addressBookHasMeCard:(void*)arg1 ;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)peoplePickerNavigationControllerDidCancel:(id)arg1 ;
-(char)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 ;
-(char)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(id)_formDataController;
-(id)meCardName;
-(void)_showPasscodeSetupSheetWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_promptForEnablingAutoFillWithoutPasscodeWithTitle:(id)arg1 message:(id)arg2 allowAnyway:(char)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_setShouldAutoFill:(char)arg1 specifier:(id)arg2 message:(id)arg3 setter:(/*^block*/id)arg4 ;
-(void)_setupMeCardPicker;
-(void)showMeCardPicker;
-(void)presentPopoverContactListInTable:(id)arg1 index:(id)arg2 specifier:(id)arg3 ;
-(void)_promptForPasscodeIfNeededWithTitle:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_enablingAutoFillWithoutPasscodePromptEndedWithResult:(int)arg1 ;
-(void)updateUseContactInfoSpecifiers;
-(void)_dismissMeCardPicker;
-(id)useContactInfo:(id)arg1 ;
-(id)myInfo:(id)arg1 ;
-(id)shouldAutoFillPasswords:(id)arg1 ;
-(void)setShouldAutoFillPasswords:(id)arg1 specifier:(id)arg2 ;
-(id)shouldAutoFillCreditCards:(id)arg1 ;
-(void)setShouldAutoFillCreditCards:(id)arg1 specifier:(id)arg2 ;
-(void)setUseContactInfo:(id)arg1 forSpecifier:(id)arg2 ;
-(void*)addressBook;
-(id)specifiers;
-(void)willResignActive;
-(void)didAcceptSetPIN;
-(void)didAcceptEnteredPIN;
-(void)didCancelEnteringPIN;
@end


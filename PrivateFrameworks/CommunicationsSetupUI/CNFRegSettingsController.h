/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:05 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CommunicationsSetupUI/CommunicationsSetupUI-Structs.h>
#import <CommunicationsSetupUI/CNFRegListController.h>
#import <CommunicationsSetupUI/CNFRegWizardControllerDelegate.h>
#import <CommunicationsSetupUI/CNFRegViewAccountControllerDelegate.h>
#import <CommunicationsSetupUI/CNFRegFirstRunDelegate.h>

@class PSSpecifier, NSArray, NSString, NSMutableArray, NSNumber, TUAccountsController;

@interface CNFRegSettingsController : CNFRegListController <CNFRegWizardControllerDelegate, CNFRegViewAccountControllerDelegate, CNFRegFirstRunDelegate> {

	PSSpecifier* _faceTimeEnabledGroupSpecifier;
	PSSpecifier* _faceTimeEnabledSpecifier;
	NSArray* _accountGroupSpecifiers;
	NSArray* _aliasGroupSpecifiers;
	NSArray* _callerIdGroupSpecifiers;
	PSSpecifier* _addAddressButtonSpecifier;
	NSArray* _replyWithMessageGroupSpecifiers;
	NSArray* _blacklistGroupSpecifiers;
	NSArray* _receiveRelayCallsGroupSpecifiers;
	PSSpecifier* _blankAddressSpecifier;
	NSString* _pendingAddress;
	NSMutableArray* _addresses;
	/*^block*/id _alertHandler;
	NSNumber* _delayedRefreshAnimatedFlag;
	struct {
		unsigned listeningForFinishedEditingEvents : 1;
		unsigned appeared : 1;
		unsigned ignoringTextFieldChanges : 1;
		unsigned showEnableSwitch : 1;
		unsigned refreshingCallerIdValues : 1;
	}  _settingsFlags;
	char _showReceiveRelayCalls;
	TUAccountsController* _accountsController;

}

@property (assign,nonatomic) char showEnableSwitch; 
@property (nonatomic,readonly) char showReceiveRelayCalls;                           //@synthesize showReceiveRelayCalls=_showReceiveRelayCalls - In the implementation block
@property (nonatomic,copy) id alertHandler;                                          //@synthesize alertHandler=_alertHandler - In the implementation block
@property (nonatomic,copy) NSString * pendingAddress;                                //@synthesize pendingAddress=_pendingAddress - In the implementation block
@property (nonatomic,retain) TUAccountsController * accountsController;              //@synthesize accountsController=_accountsController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)_shouldForwardViewWillTransitionToSize;
-(void)dealloc;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(id)bundle;
-(void)setAlertHandler:(id)arg1 ;
-(void)systemApplicationWillEnterForeground;
-(id)alertHandler;
-(void)systemApplicationDidEnterBackground;
-(void)systemApplicationDidSuspend;
-(void)systemApplicationDidResume;
-(id)specifierList;
-(id)logName;
-(void)_handleFaceTimeStateChanged;
-(void)_handleFaceTimeCTRegistrationStatusChanged;
-(void)_handleFaceTimeEntitlementStatusChanged;
-(void)_handleDeactivation:(id)arg1 ;
-(void)_handleRelayCapabilitiesChanged;
-(void)_handleOutgoingRelayCallerIDChanged;
-(id)_appleIDAccounts;
-(id)createSpecifierForAccount:(id)arg1 ;
-(id)_useableAccounts;
-(id)createSpecifierForAlias:(id)arg1 ;
-(id)possibleCallerIdAliases;
-(id)createSpecifierForCallerIdAlias:(id)arg1 ;
-(void)_buildSpecifierCache:(id)arg1 ;
-(char)shouldShowReplyWithMessage;
-(NSString *)pendingAddress;
-(char)shouldShowBlacklistSettings;
-(char)shouldShowReceiveRelayCalls;
-(void)_updateAddAliasButtonText;
-(id)aliasDetailControllerForSpecifier:(id)arg1 ;
-(void)refreshFaceTimeSettingsAnimated:(char)arg1 ;
-(void)refreshAllAliasSpecifiers;
-(void)refreshAllCallerIdAliasSpecifiers;
-(void)startEditingTextField;
-(void)_setupAllListeners;
-(void)stopListeningForFinishedEditingEventNotifications;
-(void)stopEditingTextField:(char)arg1 ;
-(void)_setupAccountHandlers;
-(char)isShowingBlankAlias;
-(void)showAddAliasButton:(char)arg1 animated:(char)arg2 ;
-(void)showBlankAlias:(char)arg1 animated:(char)arg2 ;
-(void)startListeningForFinishedEditingEventNotifications;
-(void)returnKeyPressed:(id)arg1 ;
-(void)keyboardDismissed:(id)arg1 ;
-(id)blankAliasTextField;
-(void)_cacheIndividualSpecifier:(id)arg1 includeInGroup:(char*)arg2 ;
-(void)_cacheSpecifierGroup:(id)arg1 withSpecifiers:(id)arg2 ;
-(char)showEnableSwitch;
-(id)_switchFooterText;
-(void)_updateSwitch;
-(char)popToFirstRunControllerAnimated:(char)arg1 ;
-(void)_setupAccountHandlersForDisabling;
-(void)setFaceTimeEnabled:(id)arg1 specifier:(id)arg2 animated:(char)arg3 ;
-(void)_refreshFaceTimeSettingsDelayed:(id)arg1 ;
-(id)_operationalAccounts;
-(void)refreshAccountsAnimated:(char)arg1 ;
-(char)showAccounts:(char)arg1 animated:(char)arg2 ;
-(char)showAliases:(char)arg1 animated:(char)arg2 ;
-(char)showCallerId:(char)arg1 animated:(char)arg2 ;
-(void)showBlacklistSettings:(char)arg1 animated:(char)arg2 ;
-(void)showReceiveRelayCallsSettings:(char)arg1 animated:(char)arg2 ;
-(void)refreshAliasesAnimated:(char)arg1 ;
-(void)refreshCallerIdAliasesAnimated:(char)arg1 ;
-(void)refreshBlacklistSettingsAnimated:(char)arg1 ;
-(void)refreshReceiveRelayCallsSettingsAnimated:(char)arg1 ;
-(void)refreshEnabledStateAnimated:(char)arg1 ;
-(char)_popFromSettingsAnimated:(char)arg1 ;
-(char)_canDeselectAlias:(id)arg1 ;
-(void)showSpecifiers:(id)arg1 afterGroupId:(id)arg2 animated:(char)arg3 ;
-(TUAccountsController *)accountsController;
-(void)_showLocaleChooserWithAccount:(id)arg1 ;
-(void)_showViewAccountControllerForAccount:(id)arg1 ;
-(void)_showAccountAlertForAccount:(id)arg1 ;
-(void)_showSignInController;
-(id)getAccountNameForSpecifier:(id)arg1 ;
-(void)accountTappedWithSpecifier:(id)arg1 ;
-(id)_specifierIdentifierForAccount:(id)arg1 ;
-(void)_reloadSpecifier:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)accountSpecifiers;
-(void)updateSpecifier:(id)arg1 withAccount:(id)arg2 ;
-(void)setFaceTimeEnabled:(id)arg1 specifier:(id)arg2 ;
-(void)_tearDownAllListeners;
-(id)_localeChooserForAccount:(id)arg1 ;
-(void)_updateControllerStateAnimated:(char)arg1 ;
-(void)_hideLocaleChooser;
-(char)_shouldShowAliasInfo;
-(id)aliasSpecifiers;
-(void)updateSpecifier:(id)arg1 withAlias:(id)arg2 ;
-(char)isShowingAddButton;
-(void)setAliasSelected:(id)arg1 ;
-(id)statusForSpecifier:(id)arg1 ;
-(void)refreshAliasSpecifier:(id)arg1 ;
-(int)indexOfLastSpecifierInGroup:(id)arg1 ;
-(void)_clearBlankAliasField;
-(id)statusForAlias:(id)arg1 ;
-(void)setPendingAddress:(NSString *)arg1 ;
-(id)callerIdAliasSpecifiers;
-(void)updateSpecifier:(id)arg1 withCallerIdAlias:(id)arg2 ;
-(void)setCallerId:(id)arg1 ;
-(void)refreshCallerIdSpecifier:(id)arg1 ;
-(id)_operationalAccountsForService:(int)arg1 ;
-(int)groupIdForSpecifier:(id)arg1 ;
-(char)_shouldUseDisabledHandlers;
-(void)_setupAccountHandlersForDisabledOperation;
-(void)_setupAccountHandlersForNormalOperation;
-(char)_allAccountsAreDeactivated;
-(void)_updateSwitchDelayed;
-(void)_handleSuccessfulAccountReactivation:(id)arg1 ;
-(void)_handleFailedAccountReactivation:(id)arg1 error:(id)arg2 ;
-(void)refreshFaceTimeSettingsWithDelayAnimated:(char)arg1 ;
-(void)_showAliasValidationError:(id)arg1 ;
-(void)firstRunControllerDidFinish:(id)arg1 finished:(char)arg2 ;
-(void)viewAccountControllerDidFinish:(id)arg1 withAppleId:(id)arg2 ;
-(void)firstRunController:(id)arg1 finishedWithState:(unsigned)arg2 ;
-(id)getFaceTimeEnabledForSpecifier:(id)arg1 ;
-(void)setReceiveRelayedCallsEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)getReceiveRelayedCallsEnabledForSpecifier:(id)arg1 ;
-(void)setShowEnableSwitch:(char)arg1 ;
-(void)showAllSettings:(char)arg1 animated:(char)arg2 ;
-(void)clearAccountCache;
-(char)additionalAliasesAvailable;
-(id)aliasForSpecifier:(id)arg1 ;
-(void)addAddressTapped:(id)arg1 ;
-(id)getAddAliasTextForSpecifier:(id)arg1 ;
-(void)textFieldEmptyStateChanged:(id)arg1 forSpecifier:(id)arg2 ;
-(id)pendingAddressForSpecifier:(id)arg1 ;
-(void)setPendingAddress:(id)arg1 forSpecifier:(id)arg2 ;
-(id)aliasWithIdentifier:(id)arg1 ;
-(void)showReplyWithMessage:(char)arg1 animated:(char)arg2 ;
-(int)groupIdForSpecifierId:(id)arg1 ;
-(char)showReceiveRelayCalls;
-(void)setAccountsController:(TUAccountsController *)arg1 ;
-(id)customTitle;
-(void)formSheetViewWillDisappear;
-(char)shouldReloadSpecifiersOnResume;
-(void)formSheetViewDidDisappear;
@end

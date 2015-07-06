/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:05 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CommunicationsSetupUI/CNFRegFirstRunController.h>

@class PSSpecifier, NSArray, NSTimer, NSString;

@interface CNFRegEmailController : CNFRegFirstRunController {

	PSSpecifier* _emailSpecifier;
	PSSpecifier* _actionGroupSpecifier;
	PSSpecifier* _currentActionSpecifier;
	NSArray* _checkMailSpecifiers;
	NSTimer* _validationTimeoutTimer;
	NSString* _pendingAlias;
	char _validating;
	/*^block*/id _alertHandler;

}

@property (nonatomic,copy) NSString * pendingAlias;              //@synthesize pendingAlias=_pendingAlias - In the implementation block
@property (nonatomic,copy) id alertHandler;                      //@synthesize alertHandler=_alertHandler - In the implementation block
-(void)dealloc;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(id)bundle;
-(void)setAlertHandler:(id)arg1 ;
-(void)systemApplicationWillEnterForeground;
-(id)alertHandler;
-(id)titleString;
-(void)systemApplicationDidEnterBackground;
-(id)selectedAliases;
-(id)specifierList;
-(id)logName;
-(void)_setFieldsEnabled:(char)arg1 animated:(char)arg2 ;
-(void)_setupEventHandlers;
-(void)_stopValidationModeAnimated:(char)arg1 ;
-(void)_buildSpecifierCache:(id)arg1 ;
-(id)aliasSpecifiers;
-(void)setAliasSelected:(id)arg1 ;
-(void)_returnKeyPressed;
-(id)_rightButtonItem;
-(void)_handleValidationModeCancelled;
-(void)_updateControllerState;
-(void)_finishValidation;
-(void)_failValidationWithError:(id)arg1 ;
-(void)stopValidationTimeoutTimer;
-(char)shouldShowAllVettedAliases;
-(char)_phoneNumberInAliases:(id)arg1 ;
-(id)_createSpecifierForAlias:(id)arg1 ;
-(void)nextTapped;
-(void)_showCheckMailButton:(char)arg1 animated:(char)arg2 ;
-(void)startValidationTimeoutTimer;
-(id)emailTextField;
-(void)setPendingAlias:(NSString *)arg1 ;
-(char)emailFieldIsEmpty;
-(NSString *)pendingAlias;
-(void)_refreshEnabledStateOfAliasSpecifiers;
-(double)timeoutDuration;
-(void)validationTimeout:(id)arg1 ;
-(void)_buildEmailSpecifierCache:(id)arg1 ;
-(void)_buildCheckMailSpecifierCache:(id)arg1 ;
-(void)_buildActionGroupSpecifierCache:(id)arg1 ;
-(char)showActionSpecifier:(id)arg1 animated:(char)arg2 ;
-(char)onlyLocalPhoneNumberSentinelAliasIsSelected;
-(void)checkMailTapped:(id)arg1 ;
-(void)emailFieldEmptyStateChanged:(id)arg1 forSpecifier:(id)arg2 ;
-(id)pendingAliasForSpecifier:(id)arg1 ;
-(void)setPendingAlias:(id)arg1 forSpecifier:(id)arg2 ;
-(void)_updateUI;
@end


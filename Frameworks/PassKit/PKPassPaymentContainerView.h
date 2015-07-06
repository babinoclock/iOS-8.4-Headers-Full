/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:50 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PKPassPaymentFooterContentView.h>
#import <PassKit/PKPaymentServiceDelegate.h>
#import <PassKit/PKAuthenticatorDelegate.h>
#import <PassKit/PKPassPaymentSummaryViewDelegate.h>
#import <PassKit/PKPassPaymentPayStateViewDelegate.h>
#import <PassKit/PKBiometricEventObserver.h>

@protocol OS_dispatch_source;
@class PKPaymentService, PKAuthenticator, PKPassPaymentSummaryView, PKPassPaymentPayStateView, UIButton, NSString, NSObject, NSMutableArray;

@interface PKPassPaymentContainerView : PKPassPaymentFooterContentView <PKPaymentServiceDelegate, PKAuthenticatorDelegate, PKPassPaymentSummaryViewDelegate, PKPassPaymentPayStateViewDelegate, PKBiometricEventObserver> {

	PKPaymentService* _paymentService;
	PKAuthenticator* _authenticator;
	PKPassPaymentSummaryView* _summaryView;
	PKPassPaymentPayStateView* _payStateView;
	UIButton* _actionButton;
	NSString* _pendingPayStateTextOverride;
	int _pendingPayState;
	int _currentPayState;
	unsigned _authenticatorState;
	char _authenticating;
	char _recognizing;
	NSObject*<OS_dispatch_source> _fingerdownTimeout;
	char _returnToSummaryOnFingerOff;
	char _transitioning;
	NSMutableArray* _transitionCompletionHandlers;
	char _waitingForGlyphView;
	char _presentingPasscode;
	char _requiresPasscodeDismissal;
	char _inBackground;
	unsigned _deactivationReasons;
	char _isVisible;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_executeTransitionCompletionHandlers:(char)arg1 ;
-(void)willBecomeVisibleAnimated:(char)arg1 ;
-(void)willBecomeHiddenAnimated:(char)arg1 ;
-(void)didBecomeHiddenAnimated:(char)arg1 ;
-(void)payStateView:(id)arg1 revealingCheckmark:(char)arg2 ;
-(void)authenticatorDidEncounterFingerOn:(id)arg1 ;
-(void)authenticatorDidEncounterFingerOff:(id)arg1 ;
-(void)authenticatorDidEncounterMatchMiss:(id)arg1 ;
-(void)presentPasscodeViewController:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dismissPasscodeRemoteViewController;
-(void)summaryView:(id)arg1 didDeleteMessage:(id)arg2 ;
-(char)_showSummaryState;
-(void)_applyLatestTransactionAndMessageToSummaryView;
-(void)_handleEnterForegroundNotification:(id)arg1 ;
-(void)_handleEnterBackgroundNotification:(id)arg1 ;
-(void)_handleAddDeactivationReasonNotification:(id)arg1 ;
-(void)_handleRemoveDeactivationReasonNotification:(id)arg1 ;
-(void)_transitionViewsAnimated:(char)arg1 ;
-(void)_resetToIdleState;
-(void)_endPaymentAuthorization;
-(void)_applyPayState:(int)arg1 ;
-(char)_authenticationAllowed;
-(void)_activateForPayment;
-(void)_startFingerprintAnimation;
-(void)_endFingerprintAnimationWithSuccess:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)_applyPayState:(int)arg1 withTextOverride:(id)arg2 ;
-(void)_startFingeroffTimeout;
-(void)_cancelFingeroffTimeout;
-(void)_beginPaymentAuthorization;
-(void)_promoteToAuthorizedStateIfPossible;
-(void)_resetToIdleStateWhileIgnoringField:(char)arg1 ;
-(void)_applyPayState:(int)arg1 withTextOverride:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_resetToIdleStateAfterDelay:(double)arg1 ;
-(void)_lookupLatestTransactionWithCompletion:(/*^block*/id)arg1 ;
-(char)_isForegroundActiveWithReasons:(unsigned)arg1 ;
-(void)_beginPaymentAuthorizationWithImmediatePasscode:(char)arg1 ;
-(void)_updateAuthenticatorState;
-(char)_canAuthenticateWithTouchID;
-(void)_performAuthentication;
-(char)_canAuthenticateWithPasscode;
-(void)_beginPasscodeOnlyAuthentication;
-(void)_deauthorizeForPayment;
-(void)_authorizeForPaymentWithCredential:(id)arg1 ;
-(void)_resetToIdleStateAfterDelay:(double)arg1 whileIgnoreField:(char)arg2 ;
-(void)_lookupLatestMessageWithCompletion:(/*^block*/id)arg1 ;
-(char)_isLifecycleNotificationRelevant:(id)arg1 ;
-(id)_buttonForState:(int)arg1 ;
-(char)_isDeactivatedWithReasons:(unsigned)arg1 ;
-(char)_isInBackgroundWithReasons:(unsigned)arg1 ;
-(void)_emphasizeStateIfPossible:(int)arg1 withTextOverride:(id)arg2 ;
-(void)_transitionToState:(int)arg1 withTextOverride:(id)arg2 animated:(char)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_emphasisButtonForState:(int)arg1 ;
-(void)_endTransition:(char)arg1 ;
-(void)_addTransitionCompletionHandler:(/*^block*/id)arg1 ;
-(void)_passcodeAuthenticationButtonPressed:(id)arg1 ;
-(id)_filledButtonWithTitle:(id)arg1 alignment:(int)arg2 action:(SEL)arg3 ;
-(id)_preArmButtonTitle;
-(void)_prearmButtonPressed:(id)arg1 ;
-(id)_buttonWithTitle:(id)arg1 alignment:(int)arg2 action:(SEL)arg3 ;
-(void)_passcodeFallbackButtonPressed:(id)arg1 ;
-(void)_applyPayState:(int)arg1 afterDelay:(double)arg2 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)biometricEventMonitor:(id)arg1 handleBiometricEvent:(unsigned)arg2 ;
-(void)paymentServiceReceivedInterruption;
-(void)paymentDeviceDidEnterField;
-(void)paymentDeviceDidLeaveField;
-(void)paymentPassWithUniqueIdentifierDidDeauthorize:(id)arg1 ;
-(void)paymentPassWithUniqueIdentifierDidCompleteTransaction:(id)arg1 ;
-(void)paymentPassWithUniqueIdentifierDidFailTransaction:(id)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveMessage:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableMessageService:(char)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(char)arg2 ;
-(id)initWithPass:(id)arg1 ;
@end


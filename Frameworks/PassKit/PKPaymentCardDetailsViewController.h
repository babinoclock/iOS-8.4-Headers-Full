/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:48 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <PassKit/PKPaymentSetupTableViewController.h>
#import <UIKit/UITextFieldDelegate.h>

@class RemoteUIController, CLInUseAssertion, UITextField, PKWeakReference, PKPaymentWebService, PKPaymentCredential, NSString;

@interface PKPaymentCardDetailsViewController : PKPaymentSetupTableViewController <UITextFieldDelegate> {

	RemoteUIController* _termsUIController;
	CLInUseAssertion* _CLInUse;
	float _maxHeaderWidth;
	char _maxHeaderWidthCalculated;
	char _isCUPDebit;
	UITextField* _dummyTextField;
	PKWeakReference* _setupDelegate;
	char _termsPresented;
	char _hideSetupLaterButton;
	char _verifying;
	PKPaymentWebService* _webService;
	PKPaymentCredential* _paymentCredential;
	UITextField* _cscField;

}

@property (nonatomic,retain) PKPaymentWebService * webService;                                    //@synthesize webService=_webService - In the implementation block
@property (assign,nonatomic) id<PKPaymentSetupViewControllerDelegate> setupDelegate; 
@property (assign,nonatomic) char hideSetupLaterButton;                                           //@synthesize hideSetupLaterButton=_hideSetupLaterButton - In the implementation block
@property (nonatomic,retain) PKPaymentCredential * paymentCredential;                             //@synthesize paymentCredential=_paymentCredential - In the implementation block
@property (nonatomic,retain) UITextField * cscField;                                              //@synthesize cscField=_cscField - In the implementation block
@property (getter=isComplete,nonatomic,readonly) char complete; 
@property (getter=isVerifying,nonatomic,readonly) char verifying;                                 //@synthesize verifying=_verifying - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)handleDownloadedPasses:(id)arg1 fromViewController:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
+(void)handleProvisioningError:(id)arg1 forApplicationIdentifier:(id)arg2 withSetupDelegate:(id)arg3 ;
+(void)handlePassAlreadyProvisionedError;
-(void)textFieldDidChange:(id)arg1 ;
-(PKPaymentWebService *)webService;
-(id<PKPaymentSetupViewControllerDelegate>)setupDelegate;
-(void)setSetupDelegate:(id<PKPaymentSetupViewControllerDelegate>)arg1 ;
-(id)defaultHeaderViewTitle;
-(id)defaultHeaderViewSubTitle;
-(void)handleNext:(id)arg1 ;
-(void)addDifferentCard:(id)arg1 ;
-(void)setupLater:(id)arg1 ;
-(UITextField *)cscField;
-(id)_imageForCredential:(id)arg1 ;
-(void)setCscField:(UITextField *)arg1 ;
-(void)_stopVerifyingUI;
-(void)_showProvisioningError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_contextSpecificStringForAggdKey:(id)arg1 ;
-(void)_showVerifyingUI;
-(void)_showVerifiedUI;
-(void)_handlePassSuccessfullyAdded:(id)arg1 ;
-(void)provisionCard:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)displayTermsForCredential:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_showEligibilityIssueWithCredential:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)checkCard:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_showVerificationMethodsForPass:(id)arg1 ;
-(id)initWithWebService:(id)arg1 context:(int)arg2 setupDelegate:(id)arg3 ;
-(void)setHideSetupLaterButton:(char)arg1 ;
-(char)_showSetupAssistantVerificationAlertForRecord:(id)arg1 pass:(id)arg2 ;
-(void)_setNavigationBarEnabled:(char)arg1 ;
-(void)setPaymentCredential:(PKPaymentCredential *)arg1 ;
-(id)dummyTextField;
-(void)setWebService:(PKPaymentWebService *)arg1 ;
-(char)hideSetupLaterButton;
-(PKPaymentCredential *)paymentCredential;
-(char)isVerifying;
-(char)isComplete;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(id)headerView;
@end


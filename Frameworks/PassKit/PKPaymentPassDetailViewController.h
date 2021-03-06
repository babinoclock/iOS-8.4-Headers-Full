/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:48 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <PassKit/PKPaymentServiceDelegate.h>
#import <PassKit/PKPaymentVerificationPresentationDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <PassKit/MFMailComposeViewControllerDelegate.h>

@protocol PKPassLibraryDataProvider, OS_dispatch_source, PKPaymentVerificationEntryDelegate, PKPassDeleteHandler;
@class NSObject, PKPaymentPass, PKPaymentWebService, PKPaymentService, PKPaymentVerificationPresentationController, PKVerificationRequestRecord, PKPaymentPassDetailActivationFooterView, NSNumberFormatter, PKSettingTableCell, NSArray, UIColor, NSString;

@interface PKPaymentPassDetailViewController : UITableViewController <PKPaymentServiceDelegate, PKPaymentVerificationPresentationDelegate, UITableViewDataSource, UITableViewDelegate, MFMailComposeViewControllerDelegate> {

	id<PKPassLibraryDataProvider> _dataProvider;
	int _detailViewStyle;
	NSObject*<OS_dispatch_source> _transactionTimer;
	char _deepLinkingEnabled;
	char _passDeletionInProgress;
	PKPaymentPass* _pass;
	PKPaymentWebService* _webService;
	PKPaymentService* _paymentService;
	PKPaymentVerificationPresentationController* _verificationPresenter;
	PKVerificationRequestRecord* _verificationRecord;
	PKPaymentPassDetailActivationFooterView* _activationFooter;
	NSNumberFormatter* _numberFormatter;
	PKSettingTableCell* _notificationSwitch;
	NSArray* _sections;
	id<PKPaymentVerificationEntryDelegate> _verificationDelegate;
	id<PKPassDeleteHandler> _deleteOverrider;
	UIColor* _primaryTextColor;
	UIColor* _detailTextColor;
	UIColor* _linkTextColor;
	UIColor* _warningTextColor;
	UIColor* _highlightColor;
	NSArray* _transactions;

}

@property (assign,nonatomic) id<PKPaymentVerificationEntryDelegate> verificationDelegate;              //@synthesize verificationDelegate=_verificationDelegate - In the implementation block
@property (assign,nonatomic) id<PKPassDeleteHandler> deleteOverrider;                                  //@synthesize deleteOverrider=_deleteOverrider - In the implementation block
@property (assign,nonatomic) UIColor * primaryTextColor;                                               //@synthesize primaryTextColor=_primaryTextColor - In the implementation block
@property (assign,nonatomic) UIColor * detailTextColor;                                                //@synthesize detailTextColor=_detailTextColor - In the implementation block
@property (assign,nonatomic) UIColor * linkTextColor;                                                  //@synthesize linkTextColor=_linkTextColor - In the implementation block
@property (assign,nonatomic) UIColor * warningTextColor;                                               //@synthesize warningTextColor=_warningTextColor - In the implementation block
@property (assign,nonatomic) UIColor * highlightColor;                                                 //@synthesize highlightColor=_highlightColor - In the implementation block
@property (nonatomic,copy) NSArray * transactions;                                                     //@synthesize transactions=_transactions - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPrimaryTextColor:(UIColor *)arg1 ;
-(UIColor *)primaryTextColor;
-(void)_setupSections;
-(char)_doesTableContainSection:(int)arg1 ;
-(void)_reloadTransactionsWithCompletion:(/*^block*/id)arg1 ;
-(char)_shouldShowContactCell;
-(char)_shouldShowTermsCell;
-(char)_shouldShowPrivacyPolicyCell;
-(id)_cardInfoCells;
-(id)_privacyTermsCells;
-(int)_numberOfRowsForPassStateSection;
-(void)_didSelectPassStateSection;
-(void)_didSelectTransactionAtRow:(int)arg1 ;
-(void)_didSelectContactBankSection;
-(void)_didSelectBillingAddress;
-(void)_didSelectPrivacySectionAtRow:(int)arg1 ;
-(void)_didSelectDeleteCard;
-(id)_headerTitleForPassStateSection;
-(id)_footerTextForPassStateSection;
-(id)_deviceSpecificLocalizedStringKeyForKey:(id)arg1 ;
-(float)_footerViewHeightForPassStateSectionWithTableView:(id)arg1 ;
-(id)_footerViewForPassStateSection;
-(id)_linkedAppCell;
-(id)_cellForPassStateSection;
-(id)_notificationServicesCell;
-(id)_transactionCellForIndexPath:(id)arg1 ;
-(id)_moreTransactionsCell;
-(id)_infoCell:(id)arg1 ;
-(id)_linkCellWithText:(id)arg1 ;
-(id)_deviceAccountNumberCell;
-(id)_billingAddressCell;
-(id)_deleteCardCell;
-(void)setTransactions:(NSArray *)arg1 ;
-(void)_updateTransactionsArrayWithTransaction:(id)arg1 ;
-(unsigned)_indexOfSection:(int)arg1 ;
-(id)_defaultCell;
-(void)_setPlaceholderColorForCell:(id)arg1 ;
-(id)_subtitleCell;
-(id)_infoCell:(id)arg1 withDetailText:(id)arg2 ;
-(void)_notificationSwitchChanged:(id)arg1 ;
-(void)_activationFooterPressed:(id)arg1 ;
-(void)_callIssuer;
-(void)_emailIssuer;
-(void)_openIssuerWebsite;
-(id)_activationFooterView;
-(void)didChangeVerificationPresentation;
-(void)presentVerificationViewController:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithPass:(id)arg1 webService:(id)arg2 style:(int)arg3 dataProvider:(id)arg4 ;
-(void)setDeleteOverrider:(id<PKPassDeleteHandler>)arg1 ;
-(void)setVerificationDelegate:(id<PKPaymentVerificationEntryDelegate>)arg1 ;
-(float)_heightForPassStateSectionWithTableView:(id)arg1 ;
-(id<PKPaymentVerificationEntryDelegate>)verificationDelegate;
-(id<PKPassDeleteHandler>)deleteOverrider;
-(UIColor *)detailTextColor;
-(void)setDetailTextColor:(UIColor *)arg1 ;
-(UIColor *)linkTextColor;
-(void)setLinkTextColor:(UIColor *)arg1 ;
-(UIColor *)warningTextColor;
-(void)setWarningTextColor:(UIColor *)arg1 ;
-(void)_done:(id)arg1 ;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(UIColor *)highlightColor;
-(void)setHighlightColor:(UIColor *)arg1 ;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
-(NSArray *)transactions;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(char)arg2 ;
-(void)_reloadView;
@end


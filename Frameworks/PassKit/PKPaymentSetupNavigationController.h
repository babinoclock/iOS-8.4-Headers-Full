/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:50 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PKNavigationController.h>
#import <PassKit/PKPaymentSetupViewControllerDelegate.h>

@protocol PKPassLibraryDataProvider, PKPaymentSetupDelegate;
@class PKPaymentWebService, NSArray, NSString;

@interface PKPaymentSetupNavigationController : PKNavigationController <PKPaymentSetupViewControllerDelegate> {

	PKPaymentWebService* _webService;
	int _context;
	id<PKPassLibraryDataProvider> _passLibraryProvider;
	NSArray* _eligibleCardsOnFile;
	id<PKPaymentSetupDelegate> _setupDelegate;
	NSArray* _prefetchedCredentials;

}

@property (nonatomic,readonly) PKPaymentWebService * webService;                    //@synthesize webService=_webService - In the implementation block
@property (assign,nonatomic) id<PKPaymentSetupDelegate> setupDelegate;              //@synthesize setupDelegate=_setupDelegate - In the implementation block
@property (nonatomic,retain) NSArray * prefetchedCredentials;                       //@synthesize prefetchedCredentials=_prefetchedCredentials - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)viewControllerForPresentingPaymentError:(id)arg1 ;
-(PKPaymentWebService *)webService;
-(void)viewControllerDidTerminateSetupFlow:(id)arg1 ;
-(void)preflightWithCompletion:(/*^block*/id)arg1 ;
-(id<PKPaymentSetupDelegate>)setupDelegate;
-(void)setSetupDelegate:(id<PKPaymentSetupDelegate>)arg1 ;
-(void)handleDownloadedPasses:(id)arg1 fromViewController:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)handleProvisioningError:(id)arg1 forApplicationIdentifier:(id)arg2 ;
-(void)handlePassAlreadyProvisionedError;
-(id)initWithPaymentWebService:(id)arg1 context:(int)arg2 libraryDataProvider:(id)arg3 ;
-(void)preflightWithRequirements:(int)arg1 completion:(/*^block*/id)arg2 ;
-(NSArray *)prefetchedCredentials;
-(void)setPrefetchedCredentials:(NSArray *)arg1 ;
-(void)dealloc;
-(char)shouldAutorotate;
-(unsigned)supportedInterfaceOrientations;
-(void)cancel:(id)arg1 ;
@end


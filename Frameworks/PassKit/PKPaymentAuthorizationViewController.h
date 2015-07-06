/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:49 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <PassKit/PKPaymentAuthorizationControllerDelegate.h>
#import <PassKit/PKPaymentAuthorizationControllerPrivateDelegate.h>

@protocol PKPaymentAuthorizationViewControllerDelegate, PKPaymentAuthorizationViewControllerPrivateDelegate;
@class PKPaymentAuthorizationController, NSString;

@interface PKPaymentAuthorizationViewController : UIViewController <PKPaymentAuthorizationControllerDelegate, PKPaymentAuthorizationControllerPrivateDelegate> {

	id<PKPaymentAuthorizationViewControllerDelegate> _delegate;
	id<PKPaymentAuthorizationViewControllerPrivateDelegate> _privateDelegate;
	PKPaymentAuthorizationController* _paymentController;

}

@property (assign,nonatomic) id<PKPaymentAuthorizationViewControllerDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) id<PKPaymentAuthorizationViewControllerPrivateDelegate> privateDelegate;              //@synthesize privateDelegate=_privateDelegate - In the implementation block
@property (nonatomic,retain) PKPaymentAuthorizationController * paymentController;                                 //@synthesize paymentController=_paymentController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)canMakePaymentsUsingNetworks:(id)arg1 ;
+(char)canMakePayments;
-(void)paymentAuthorizationControllerWillAuthorizePayment:(id)arg1 ;
-(void)paymentAuthorizationController:(id)arg1 willFinishWithError:(id)arg2 ;
-(void)paymentAuthorizationControllerDidFinish:(id)arg1 ;
-(void)paymentAuthorizationController:(id)arg1 didAuthorizePayment:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)paymentAuthorizationController:(id)arg1 didSelectShippingMethod:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)paymentAuthorizationController:(id)arg1 didSelectShippingAddress:(void*)arg2 completion:(/*^block*/id)arg3 ;
-(void)_addDeactivationReason:(id)arg1 ;
-(void)_removeDeactivationReason:(id)arg1 ;
-(PKPaymentAuthorizationController *)paymentController;
-(void)setPaymentController:(PKPaymentAuthorizationController *)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<PKPaymentAuthorizationViewControllerDelegate>)arg1 ;
-(id<PKPaymentAuthorizationViewControllerDelegate>)delegate;
-(unsigned)supportedInterfaceOrientations;
-(int)modalPresentationStyle;
-(void)viewWillDisappear:(char)arg1 ;
-(id<PKPaymentAuthorizationViewControllerPrivateDelegate>)privateDelegate;
-(void)setPrivateDelegate:(id<PKPaymentAuthorizationViewControllerPrivateDelegate>)arg1 ;
-(void)_registerForApplicationLifeCycleNotifications;
-(void)_unregisterForApplicationLifeCycleNotifications;
-(id)initWithPaymentRequest:(id)arg1 ;
@end


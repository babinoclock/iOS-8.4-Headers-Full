/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:50 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>

@protocol UIViewControllerTransitioningDelegate;
@class PKPaymentAuthorizationLayout, PKPaymentAuthorizationServiceViewController;

@interface PKPaymentAuthorizationServiceNavigationController : UINavigationController {

	PKPaymentAuthorizationLayout* _layout;
	PKPaymentAuthorizationServiceViewController* _authorizationViewController;
	id<UIViewControllerTransitioningDelegate> _paymentTransitioningDelegate;

}

@property (nonatomic,retain) PKPaymentAuthorizationServiceViewController * authorizationViewController;              //@synthesize authorizationViewController=_authorizationViewController - In the implementation block
@property (nonatomic,retain) id<UIViewControllerTransitioningDelegate> paymentTransitioningDelegate;                 //@synthesize paymentTransitioningDelegate=_paymentTransitioningDelegate - In the implementation block
-(PKPaymentAuthorizationServiceViewController *)authorizationViewController;
-(void)setAuthorizationViewController:(PKPaymentAuthorizationServiceViewController *)arg1 ;
-(id<UIViewControllerTransitioningDelegate>)paymentTransitioningDelegate;
-(void)setPaymentTransitioningDelegate:(id<UIViewControllerTransitioningDelegate>)arg1 ;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)_setPreferredContentSizeFromChildContentContainer:(id)arg1 ;
@end


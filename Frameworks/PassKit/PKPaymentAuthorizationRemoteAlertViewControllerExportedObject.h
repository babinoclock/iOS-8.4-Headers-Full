/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:51 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PKPaymentAuthorizationServiceProtocol.h>

@protocol PKPaymentAuthorizationServiceProtocol;
@class PKPaymentAuthorizationRemoteAlertViewController, NSString;

@interface PKPaymentAuthorizationRemoteAlertViewControllerExportedObject : NSObject <PKPaymentAuthorizationServiceProtocol> {

	id<PKPaymentAuthorizationServiceProtocol> _delegate;
	PKPaymentAuthorizationRemoteAlertViewController* _controller;

}

@property (assign,nonatomic) id<PKPaymentAuthorizationServiceProtocol> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) PKPaymentAuthorizationRemoteAlertViewController * controller;              //@synthesize controller=_controller - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleHostApplicationWillResignActive:(char)arg1 ;
-(void)handleHostApplicationDidBecomeActive;
-(void)authorizationDidAuthorizePaymentCompleteWithStatus:(int)arg1 ;
-(void)authorizationDidSelectShippingMethodCompleteWithStatus:(int)arg1 paymentSummaryItems:(id)arg2 ;
-(void)authorizationDidSelectShippingAddressCompleteWithStatus:(int)arg1 shippingMethods:(id)arg2 paymentSummaryItems:(id)arg3 ;
-(void)handleHostApplicationDidCancel;
-(void)handleDismissWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithController:(id)arg1 ;
-(void)setDelegate:(id<PKPaymentAuthorizationServiceProtocol>)arg1 ;
-(id<PKPaymentAuthorizationServiceProtocol>)delegate;
-(PKPaymentAuthorizationRemoteAlertViewController *)controller;
-(void)setController:(PKPaymentAuthorizationRemoteAlertViewController *)arg1 ;
@end


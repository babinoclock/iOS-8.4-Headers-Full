/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:49 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, PKSecureElementConsistencyCheckerDelegate;
@class NSObject, PKPaymentWebService;

@interface PKSecureElementConsistencyChecker : NSObject {

	NSObject*<OS_dispatch_queue> _processingQueue;
	id<PKSecureElementConsistencyCheckerDelegate> _delegate;
	PKPaymentWebService* _paymentWebService;

}

@property (assign,nonatomic) id<PKSecureElementConsistencyCheckerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PKPaymentWebService * paymentWebService;                             //@synthesize paymentWebService=_paymentWebService - In the implementation block
-(void)startWithCompletion:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<PKSecureElementConsistencyCheckerDelegate>)arg1 ;
-(id<PKSecureElementConsistencyCheckerDelegate>)delegate;
-(void)queue_startWithCompletion:(/*^block*/id)arg1 ;
-(char)_downloadPasses;
-(void)_rescheduleWithBackoff;
-(void)queue_checkConsistencyWithPaymentApplications:(id)arg1 secureElementCards:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithPaymentWebService:(id)arg1 delegate:(id)arg2 ;
-(void)checkConsistencyWithPaymentApplications:(id)arg1 secureElementCards:(id)arg2 completion:(/*^block*/id)arg3 ;
-(PKPaymentWebService *)paymentWebService;
-(void)setPaymentWebService:(PKPaymentWebService *)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:52 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>

@class SKUIClientContext, UIViewController, SKUIRedeemConfiguration, NSString;

@interface SKUIITunesPassLearnMoreAlertDelegate : NSObject <UIAlertViewDelegate> {

	SKUIClientContext* _clientContext;
	UIViewController* _presentingViewController;
	SKUIRedeemConfiguration* _redeemConfiguration;

}

@property (assign,nonatomic,__weak) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)shouldShowAlertForRedeem:(id)arg1 configuration:(id)arg2 ;
+(void)beginThrottleInterval;
-(void)show;
-(UIViewController *)presentingViewController;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(id)initWithRedeemConfiguration:(id)arg1 clientContext:(id)arg2 ;
@end

/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:48 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PKPassbookSettingsOptionsDelegate <NSObject>
@required
-(id)defaultBillingAddressForPaymentPass:(id)arg1;
-(void)setDefaultBillingAddress:(id)arg1 forPaymentPass:(id)arg2;
-(id)defaultBillingAddresses;
-(id)defaultShippingAddress;
-(id)defaultContactEmail;
-(id)defaultContactPhone;
-(id)defaultPaymentPassIdentifier;
-(void)setDefaultShippingAddress:(id)arg1;
-(void)setDefaultContactEmail:(id)arg1;
-(void)setDefaultContactPhone:(id)arg1;
-(void)setDefaultPaymentPassIdentifier:(id)arg1;

@end


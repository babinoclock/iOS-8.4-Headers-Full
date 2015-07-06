/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:56 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>
#import <StoreServices/SSXPCCoding.h>

@class SSAuthenticationContext, NSString;

@interface SSVSubscriptionStatusRequest : SSRequest <SSXPCCoding> {

	char _authenticatesIfNecessary;
	SSAuthenticationContext* _authenticationContext;
	int _carrierBundleProvisioningStyle;
	NSString* _localizedAuthenticationReason;
	NSString* _reason;

}

@property (nonatomic,copy) SSAuthenticationContext * authenticationContext;              //@synthesize authenticationContext=_authenticationContext - In the implementation block
@property (assign,nonatomic) int carrierBundleProvisioningStyle;                         //@synthesize carrierBundleProvisioningStyle=_carrierBundleProvisioningStyle - In the implementation block
@property (nonatomic,copy) NSString * reason;                                            //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) char authenticatesIfNecessary;                              //@synthesize authenticatesIfNecessary=_authenticatesIfNecessary - In the implementation block
@property (nonatomic,copy) NSString * localizedAuthenticationReason;                     //@synthesize localizedAuthenticationReason=_localizedAuthenticationReason - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAuthenticationContext:(SSAuthenticationContext *)arg1 ;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(NSString *)reason;
-(void)setReason:(NSString *)arg1 ;
-(void)setAuthenticatesIfNecessary:(char)arg1 ;
-(void)setCarrierBundleProvisioningStyle:(int)arg1 ;
-(void)setLocalizedAuthenticationReason:(NSString *)arg1 ;
-(void)startWithStatusResponseBlock:(/*^block*/id)arg1 ;
-(SSAuthenticationContext *)authenticationContext;
-(char)authenticatesIfNecessary;
-(int)carrierBundleProvisioningStyle;
-(NSString *)localizedAuthenticationReason;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:57 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <StoreServices/StoreServices-Structs.h>
@class NSObject;

@interface SSVFairPlaySubscriptionController : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	char _hasValidSubscriptionStatusDidChangeNotifyToken;
	int _subscriptionStatusDidChangeNotifyToken;

}
-(id)subscriptionStatusForAccountUniqueIdentifier:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)init;
-(char)stopSubscriptionLease:(id*)arg1 ;
-(void)importSubscriptionKeyBagData:(id)arg1 leaseInfoData:(id)arg2 returningError:(id*)arg3 ;
-(void)generateSubscriptionLeaseRequestWithAccountUniqueID:(unsigned long long)arg1 transactionType:(unsigned)arg2 certificateData:(id)arg3 assetIDData:(id)arg4 returningLeaseData:(id*)arg5 subscriptionBagData:(id*)arg6 error:(id*)arg7 ;
-(id)_subscriptionStatusForFPSubscriptionInfo:(FPSubscriptionInfo_)arg1 ;
-(void)_enumerateSubscriptionInfoUsingBlock:(/*^block*/id)arg1 ;
-(id)_accountUniqueIdentifierToSubscriptionStatusWithFPSubscriptionInfoList:(FPSubscriptionInfo_*)arg1 subscriptionInfoListLength:(unsigned long)arg2 ;
-(void)_notifySubscriptionStatusDidChange;
-(void)enumerateAccountSubscriptionStatusUsingBlock:(/*^block*/id)arg1 ;
-(void)generateSubscriptionBagRequestWithAccountUniqueIdentifier:(unsigned long long)arg1 transactionType:(unsigned)arg2 machineIDData:(id)arg3 returningSubscriptionBagData:(id*)arg4 error:(id*)arg5 ;
-(void)importSubscriptionKeyBagData:(id)arg1 returningError:(id*)arg2 ;
@end


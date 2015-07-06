/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:46 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SSAccount, SKUIClientContext, SSVRedeemCodeMetadata, NSError, SKUIRedeemConfiguration;

@interface SKUIRedeemPreflightResult : NSObject {

	SSAccount* _account;
	SKUIClientContext* _clientContext;
	SSVRedeemCodeMetadata* _codeMetadata;
	NSError* _error;
	SKUIRedeemConfiguration* _redeemConfiguration;
	int _resultType;

}

@property (nonatomic,retain) SSAccount * account;                                        //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;                          //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,retain) SSVRedeemCodeMetadata * codeMetadata;                       //@synthesize codeMetadata=_codeMetadata - In the implementation block
@property (nonatomic,copy) NSError * error;                                              //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) SKUIRedeemConfiguration * redeemConfiguration;              //@synthesize redeemConfiguration=_redeemConfiguration - In the implementation block
@property (assign,nonatomic) int resultType;                                             //@synthesize resultType=_resultType - In the implementation block
-(NSError *)error;
-(SSAccount *)account;
-(void)setAccount:(SSAccount *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(void)setResultType:(int)arg1 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)setRedeemConfiguration:(SKUIRedeemConfiguration *)arg1 ;
-(SKUIRedeemConfiguration *)redeemConfiguration;
-(SSVRedeemCodeMetadata *)codeMetadata;
-(void)setCodeMetadata:(SSVRedeemCodeMetadata *)arg1 ;
-(int)resultType;
@end


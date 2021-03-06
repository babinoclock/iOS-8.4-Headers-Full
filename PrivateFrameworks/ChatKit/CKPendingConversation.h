/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:52 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/CKConversation.h>

@class IMService;

@interface CKPendingConversation : CKConversation {

	char _noAvailableServices;
	IMService* _previousSendingService;
	IMService* _composeSendingService;

}

@property (assign,nonatomic) IMService * previousSendingService;              //@synthesize previousSendingService=_previousSendingService - In the implementation block
@property (assign,nonatomic) IMService * composeSendingService;               //@synthesize composeSendingService=_composeSendingService - In the implementation block
@property (assign,nonatomic) char noAvailableServices;                        //@synthesize noAvailableServices=_noAvailableServices - In the implementation block
-(id)sendingService;
-(void)refreshComposeSendingServiceForAddresses:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)refreshStatusForAddresses:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(char)noAvailableServices;
-(void)setPreviousSendingService:(IMService *)arg1 ;
-(IMService *)composeSendingService;
-(IMService *)previousSendingService;
-(void)setComposeSendingService:(IMService *)arg1 ;
-(void)setNoAvailableServices:(char)arg1 ;
@end


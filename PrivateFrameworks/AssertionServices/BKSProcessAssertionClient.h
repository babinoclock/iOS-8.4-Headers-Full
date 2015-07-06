/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:28 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BaseBoard/BSBaseXPCClient.h>

@class NSMapTable;

@interface BKSProcessAssertionClient : BSBaseXPCClient {

	NSMapTable* _assertionHandlersByIdentifier;

}
+(id)clientQueue;
+(id)sharedInstance;
-(void)dealloc;
-(id)description;
-(void)_invalidate;
-(double)backgroundTimeRemaining:(int)arg1 ;
-(void)registerClientHandler:(id)arg1 forAssertionIdentifier:(id)arg2 ;
-(void)sendDestroyAssertion:(id)arg1 ;
-(void)unregisterClientHandlerForAssertionIdentifier:(id)arg1 ;
-(void)sendCreateAssertion:(id)arg1 withResponseHandler:(/*^block*/id)arg2 ;
-(void)sendUpdateAssertion:(id)arg1 ;
-(id)_errorWithCode:(unsigned)arg1 ;
-(void)_dispatchClientCalloutBlock:(/*^block*/id)arg1 ;
-(void)_sendEvent:(id)arg1 forMessageType:(unsigned)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)_handleDestroy:(id)arg1 ;
-(void)queue_handleMessage:(id)arg1 ;
-(id)initWithServiceName:(id)arg1 endpoint:(id)arg2 ;
-(void)queue_connectionWasDestroyed;
@end


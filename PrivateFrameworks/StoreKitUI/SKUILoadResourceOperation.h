/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:49 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class SKUIClientContext, NSLock, SKUIResourceRequest;

@interface SKUILoadResourceOperation : NSOperation {

	SKUIClientContext* _clientContext;
	NSLock* _lock;
	/*^block*/id _outputBlock;
	SKUIResourceRequest* _request;

}

@property (copy,readonly) SKUIResourceRequest * resourceRequest; 
@property (retain) SKUIClientContext * clientContext; 
@property (copy) id outputBlock; 
-(id)init;
-(void)main;
-(void)setOutputBlock:(id)arg1 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(id)initWithResourceRequest:(id)arg1 ;
-(id)outputBlock;
-(SKUIResourceRequest *)resourceRequest;
-(id)_initSKUILoadResourceOperation;
@end

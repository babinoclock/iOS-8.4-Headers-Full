/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:16 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/MDM.framework/MDM
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MDM/SSRequestDelegate.h>

@class SSRequest, NSTimer, NSString;

@interface MCSSRequestDelegate : NSObject <SSRequestDelegate> {

	SSRequest* _request;
	/*^block*/id _completionBlock;
	NSTimer* _timeoutTimer;

}

@property (nonatomic,retain,readonly) SSRequest * request;              //@synthesize request=_request - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)requestDidFinish:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(SSRequest *)request;
-(id)initWithRequest:(id)arg1 ;
-(void)_timerDidFire:(id)arg1 ;
-(void)_startTimeout:(double)arg1 completionBlock:(/*^block*/id)arg2 ;
@end


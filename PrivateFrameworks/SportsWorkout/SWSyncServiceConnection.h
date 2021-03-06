/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:35 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SWSyncHost, NSURLConnection, NSMutableData, NSTimer;

@interface SWSyncServiceConnection : NSObject {

	SWSyncHost* _host;
	NSURLConnection* _URLConnection;
	NSMutableData* _receivedData;
	NSTimer* _bailOutTimer;

}

@property (nonatomic,readonly) SWSyncHost * host;              //@synthesize host=_host - In the implementation block
-(void)dealloc;
-(id)delegate;
-(SWSyncHost *)host;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)handleResponse:(id)arg1 ;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(void)connection:(id)arg1 didSendBodyData:(int)arg2 totalBytesWritten:(int)arg3 totalBytesExpectedToWrite:(int)arg4 ;
-(id)connection:(id)arg1 willCacheResponse:(id)arg2 ;
-(void)_restartBailOutTimer;
-(void)_bailOutTimerFired:(id)arg1 ;
-(id)initWithHost:(id)arg1 ;
-(char)connectionShouldUseCredentialStorage:(id)arg1 ;
-(char)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 ;
-(void)connection:(id)arg1 didCancelAuthenticationChallenge:(id)arg2 ;
@end


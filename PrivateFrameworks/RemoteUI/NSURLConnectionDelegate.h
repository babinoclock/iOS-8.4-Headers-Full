/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:20 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSURLConnectionDelegate <NSObject>
@optional
-(void)connection:(id)arg1 didFailWithError:(id)arg2;
-(char)connectionShouldUseCredentialStorage:(id)arg1;
-(void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
-(char)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
-(void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
-(void)connection:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;

@end


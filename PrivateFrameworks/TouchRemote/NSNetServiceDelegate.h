/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:06 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSNetServiceDelegate <NSObject>
@optional
-(void)netService:(id)arg1 didNotPublish:(id)arg2;
-(void)netServiceWillPublish:(id)arg1;
-(void)netService:(id)arg1 didAcceptConnectionWithInputStream:(id)arg2 outputStream:(id)arg3;
-(void)netServiceDidStop:(id)arg1;
-(void)netServiceDidResolveAddress:(id)arg1;
-(void)netService:(id)arg1 didNotResolve:(id)arg2;
-(void)netServiceWillResolve:(id)arg1;
-(void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2;
-(void)netServiceDidPublish:(id)arg1;

@end


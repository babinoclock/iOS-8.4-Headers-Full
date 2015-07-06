/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:25 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iAdDeveloper.framework/iAdDeveloper
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol HTSHTTPServerDelegate <NSObject>
@optional
-(void)httpServerListenSocketFailed:(id)arg1;
-(void)httpServer:(id)arg1 receivedConnection:(id)arg2;
-(void)httpServer:(id)arg1 closedConnection:(id)arg2;
-(void)httpServer:(id)arg1 closedConnection:(id)arg2 withError:(id)arg3;
-(id)httpServer:(id)arg1 proposedResponse:(id)arg2;
-(void)httpServer:(id)arg1 logMessage:(id)arg2;
-(id)httpServer:(id)arg1 rewritePath:(id)arg2;
-(void)httpServer:(id)arg1 connection:(id)arg2 blockedSandboxViolation:(id)arg3;
-(void)httpServer:(id)arg1 dataForRequest:(id)arg2 resolvedPath:(id)arg3 handler:(/*^block*/id)arg4;
-(char)httpServer:(id)arg1 shouldAllowRequest:(id)arg2 withAuthorization:(id)arg3;
-(id)httpServer:(id)arg1 unhandledRequest:(id)arg2;
-(void)httpServer:(id)arg1 connection:(id)arg2 enqueuedResponseToRequest:(id)arg3 statusCode:(int)arg4 length:(unsigned)arg5;
-(void)httpServer:(id)arg1 connection:(id)arg2 wroteBytes:(unsigned)arg3 forResponseToRequest:(id)arg4 remaining:(unsigned)arg5;
-(void)httpServer:(id)arg1 connection:(id)arg2 wroteBytes:(unsigned)arg3 andCompletedResponseToRequest:(id)arg4;
-(void)httpServer:(id)arg1 connection:(id)arg2 droppedResponseToRequestBeforeClosing:(id)arg3;

@end

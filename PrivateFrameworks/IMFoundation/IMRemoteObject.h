/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:10 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface IMRemoteObject : NSObject {

	id _internal;

}

@property (nonatomic,readonly) NSString * portName; 
@property (assign,nonatomic) int pid; 
@property (nonatomic,readonly) NSObject*<OS_xpc_object> connection; 
@property (nonatomic,readonly) char isValid; 
+(void)initialize;
+(void)_registerIMRemoteObject:(id)arg1 ;
+(void)_unregisterIMRemoteObject:(id)arg1 ;
+(id)_remoteObjects;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(char)isValid;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(NSObject*<OS_xpc_object>)connection;
-(id)_queue;
-(int)pid;
-(void)setPid:(int)arg1 ;
-(id)initWithConnection:(id)arg1 protocol:(id)arg2 alreadyConfigured:(char)arg3 ;
-(void)_portDidBecomeInvalid;
-(NSString *)portName;
-(void)_systemShutdown:(id)arg1 ;
-(void)setPortName:(NSString *)arg1 ;
-(id)_initWithConnection:(id)arg1 portName:(id)arg2 protocol:(id)arg3 alreadyConfigured:(char)arg4 ;
-(void)_cleanupMachBitsCanPost:(char)arg1 ;
-(unsigned)forwardXPCObject:(id)arg1 messageContext:(id)arg2 ;
-(id)initWithConnection:(id)arg1 protocol:(id)arg2 ;
-(id)initWithPortName:(id)arg1 protocol:(id)arg2 ;
-(void)finalize;
@end


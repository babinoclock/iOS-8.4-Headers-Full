/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:24 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/XPCObjects.framework/XPCObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <XPCObjects/XPCObjects-Structs.h>
#import <XPCObjects/NSCopying.h>

@protocol OS_xpc_object, OS_dispatch_queue, XPCProxyTarget;
@class NSObject, Protocol, NSArray;

@interface XPCProxy : NSObject <NSCopying> {

	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _internalQueue;
	id<XPCProxyTarget> _target;
	Class _remoteClass;
	Protocol* _remoteProtocol;
	/*^block*/id _errorHandler;
	char _invalidated;
	char _useTraditionalEncoder;
	NSArray* _whitelistedClassNames;

}

@property (assign) Protocol * remoteProtocol;                                    //@synthesize remoteProtocol=_remoteProtocol - In the implementation block
@property (copy) id errorHandler;                                                //@synthesize errorHandler=_errorHandler - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> connection;              //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) char useTraditionalEncoder;                         //@synthesize useTraditionalEncoder=_useTraditionalEncoder - In the implementation block
@property (assign) id<XPCProxyTarget> target;                                    //@synthesize target=_target - In the implementation block
@property (assign) Class remoteClass;                                            //@synthesize remoteClass=_remoteClass - In the implementation block
+(void)initialize;
-(void)dealloc;
-(void)invalidate;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)setTarget:(id<XPCProxyTarget>)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<XPCProxyTarget>)target;
-(void)forwardInvocation:(id)arg1 ;
-(NSObject*<OS_xpc_object>)connection;
-(void)setErrorHandler:(id)arg1 ;
-(id)errorHandler;
-(id)_errorForXpcError:(id)arg1 ;
-(id)_invocationForMessage:(id)arg1 ;
-(id)_proxyDescription;
-(Protocol *)remoteProtocol;
-(Class)remoteClass;
-(id)_newMessageAndReplyHandler:(/*^block*/id*)arg1 forInvocation:(id)arg2 ;
-(SEL)_selectorForMessage:(id)arg1 ;
-(void)_getInvocationArgument:(void*)arg1 argumentType:(const char*)arg2 class:(Class*)arg3 forXpcArgument:(id)arg4 message:(id)arg5 ;
-(id)_newXpcArgumentForInvocationArgumentAt:(void*)arg1 ofType:(const char*)arg2 ;
-(id)_objectForXpcEncoding:(id)arg1 ;
-(id)_newXpcEncodingForObject:(id)arg1 ;
-(id)initWithConnection:(id)arg1 queue:(id)arg2 target:(id)arg3 ;
-(void)restrictDecodingToWhitelistedClassNames:(id)arg1 ;
-(void)setRemoteClass:(Class)arg1 ;
-(void)setRemoteProtocol:(Protocol *)arg1 ;
-(char)useTraditionalEncoder;
-(void)setUseTraditionalEncoder:(char)arg1 ;
@end


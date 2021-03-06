/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:16 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ATFoundation/ATMessageLinkListener.h>

@protocol OS_tcp_listener, OS_dispatch_queue;
@class NSString, NSObject;

@interface ATNetServiceListener : ATMessageLinkListener {

	NSString* _serviceName;
	NSString* _serviceType;
	NSString* _serviceDomain;
	NSObject*<OS_tcp_listener> _tcpListener;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _interfaceName;

}

@property (nonatomic,copy) NSString * interfaceName;              //@synthesize interfaceName=_interfaceName - In the implementation block
-(void)stop;
-(char)start;
-(id)initWithServiceName:(id)arg1 type:(id)arg2 domain:(id)arg3 ;
-(void)setInterfaceName:(NSString *)arg1 ;
-(NSString *)interfaceName;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:46 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>
#import <CoreMotion/CLIntersiloServiceProtocol.h>

@protocol CLIntersiloProxyDelegateProtocol;
@class CLIntersiloInterfaceSelectorInfo, CLSilo, CLIntersiloInterface;

@interface CLIntersiloProxy : NSProxy <CLIntersiloServiceProtocol> {

	CLIntersiloProxy* _peer;
	CLIntersiloProxy* _asymStrongPeer;
	CLIntersiloInterfaceSelectorInfo* _last;
	id<CLIntersiloProxyDelegateProtocol> _delegate;
	CLSilo* _delegateSilo;
	CLIntersiloInterface* _delegateInterface;
	CLIntersiloInterface* _proxiedInterface;

}

@property (nonatomic,__weak,readonly) id<CLIntersiloProxyDelegateProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,__weak,readonly) CLSilo * delegateSilo;                                      //@synthesize delegateSilo=_delegateSilo - In the implementation block
@property (nonatomic,copy,readonly) CLIntersiloInterface * delegateInterface;                     //@synthesize delegateInterface=_delegateInterface - In the implementation block
@property (nonatomic,copy,readonly) CLIntersiloInterface * proxiedInterface;                      //@synthesize proxiedInterface=_proxiedInterface - In the implementation block
@property (assign,nonatomic) char valid; 
+(void)becameFatallyBlocked:(id)arg1 ;
+(id)getSilo;
+(id)proxyForRecipientObject:(id)arg1 inSilo:(id)arg2 withInboundInterface:(id)arg3 andOutboundInterface:(id)arg4 ;
+(char)isSupported;
-(void)registerDelegate:(id)arg1 inSilo:(id)arg2 ;
-(id)initWithDelegateInterface:(id)arg1 proxiedInterface:(id)arg2 delegateObject:(id)arg3 delegateSilo:(id)arg4 andUninitializedPeer:(id)arg5 ;
-(id)initWithDelegateInterface:(id)arg1 proxiedInterface:(id)arg2 andUninitializedPeer:(id)arg3 ;
-(CLSilo *)delegateSilo;
-(CLIntersiloInterface *)delegateInterface;
-(CLIntersiloInterface *)proxiedInterface;
-(char)conformsToProtocol:(id)arg1 ;
-(id<CLIntersiloProxyDelegateProtocol>)delegate;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end


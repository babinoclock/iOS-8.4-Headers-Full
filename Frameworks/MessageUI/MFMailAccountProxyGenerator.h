/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:41 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class _MFMailAccountProxySource;

@interface MFMailAccountProxyGenerator : NSObject {

	_MFMailAccountProxySource* _proxySource;
	char _allowsRestrictedAccounts;

}
-(id)initWithAllowsRestrictedAccounts:(char)arg1 ;
-(id)accountProxyContainingEmailAddress:(id)arg1 includingInactive:(char)arg2 originatingBundleID:(id)arg3 sourceAccountManagement:(int)arg4 ;
-(id)defaultMailAccountProxyForDeliveryOriginatingBundleID:(id)arg1 sourceAccountManagement:(int)arg2 ;
-(id)activeAccountProxiesOriginatingBundleID:(id)arg1 sourceAccountManagement:(int)arg2 ;
-(id)allAccountProxies;
-(id)accountProxyContainingEmailAddress:(id)arg1 includingInactive:(char)arg2 ;
-(void)dealloc;
-(id)init;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:26 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class ACAccount, ACAccountStore;

@interface AAAppleIDSettingsRequest : AARequest {

	ACAccount* _appleAccount;
	ACAccount* _grandSlamAccount;
	ACAccountStore* _store;

}
+(Class)responseClass;
-(id)initWithAppleAccount:(id)arg1 grandSlamAccount:(id)arg2 accountStore:(id)arg3 ;
-(id)urlRequest;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:23 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SKUIMediaSocialAuthor, NSMutableDictionary;

@interface MSCLAccountStore : NSObject {

	SKUIMediaSocialAuthor* _author;
	NSMutableDictionary* _authenticationSecrets;
	NSMutableDictionary* _authenticationTokens;

}

@property (nonatomic,readonly) SKUIMediaSocialAuthor * author;              //@synthesize author=_author - In the implementation block
-(void)dealloc;
-(char)removeAccount:(id)arg1 ;
-(void)requestAccessForAccount:(id)arg1 options:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(char)saveAccount:(id)arg1 ;
-(void)authenticateUserName:(id)arg1 password:(id)arg2 serviceIdentifier:(id)arg3 withCompletionBlock:(/*^block*/id)arg4 ;
-(id)accountForServiceIdentifier:(id)arg1 allowStub:(char)arg2 ;
-(id)accountForServiceIdentifier:(id)arg1 ;
-(char)canAddAccountForServiceIdentifier:(id)arg1 ;
-(void)getAccessTokenForAccount:(id)arg1 ignoreCache:(char)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)registerExternalDestination:(id)arg1 forAccount:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_handleAccountStoreDidChange:(id)arg1 ;
-(id)_externalServiceHelperForServiceIdentifier:(id)arg1 ;
-(id)_generateNewFacebookAccount;
-(SKUIMediaSocialAuthor *)author;
-(id)initWithAuthor:(id)arg1 ;
@end

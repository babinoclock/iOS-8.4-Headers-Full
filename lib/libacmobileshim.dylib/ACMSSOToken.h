/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:52 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libacmobileshim.dylib/ACMToken.h>

@class NSString, NSDate;

@interface ACMSSOToken : ACMToken {

	NSString* _sessionToken;
	NSDate* _recentAuthenticationDate;
	char _isShared;

}

@property (retain) NSString * sessionToken;                        //@synthesize sessionToken=_sessionToken - In the implementation block
@property (retain) NSDate * recentAuthenticationDate;              //@synthesize recentAuthenticationDate=_recentAuthenticationDate - In the implementation block
@property (assign) char isShared;                                  //@synthesize isShared=_isShared - In the implementation block
+(id)tokenWithCreationDate:(id)arg1 nonce:(id)arg2 data:(id)arg3 keyCode:(id)arg4 inOldFormat:(char)arg5 ;
+(id)tokenWithKeychainTokenInfo:(id)arg1 ;
+(id)tokenWithToken:(id)arg1 data:(id)arg2 ;
-(void)dealloc;
-(char)isShared;
-(NSString *)sessionToken;
-(void)setSessionToken:(NSString *)arg1 ;
-(void)setRecentAuthenticationDate:(NSDate *)arg1 ;
-(id)tokenDictionaryWithKeyCode:(id)arg1 inOldFormat:(char)arg2 ;
-(NSDate *)recentAuthenticationDate;
-(id)encryptionKeyWithKeyCode:(id)arg1 inOldFormat:(char)arg2 ;
-(char)validateTokenWithKeyCode:(id)arg1 inOldFormat:(char)arg2 ;
-(void)setIsShared:(char)arg1 ;
@end

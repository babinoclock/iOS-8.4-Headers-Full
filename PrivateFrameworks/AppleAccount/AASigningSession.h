/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:27 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppleAccount/AppleAccount-Structs.h>
@class NSString;

@interface AASigningSession : NSObject {

	NACContextOpaque_Ref _context;
	NSString* _certURL;
	NSString* _sessionURL;
	long _error;

}

@property (nonatomic,readonly) long error;              //@synthesize error=_error - In the implementation block
-(id)initWithCertURL:(id)arg1 sessionURL:(id)arg2 ;
-(id)signatureForData:(id)arg1 ;
-(void)dealloc;
-(void)establishSession;
-(long)error;
@end


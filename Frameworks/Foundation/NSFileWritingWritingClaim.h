/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:22 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSFileAccessClaim.h>

@class NSURL, NSFileAccessNode;

@interface NSFileWritingWritingClaim : NSFileAccessClaim {

	NSURL* _url1;
	char _url1DidChange;
	unsigned _options1;
	NSURL* _url2;
	char _url2DidChange;
	unsigned _options2;
	NSFileAccessNode* _location1;
	NSFileAccessNode* _location2;

}
-(char)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(char)arg2 ;
-(void)forwardUsingMessageSender:(/*^block*/id)arg1 crashHandler:(/*^block*/id)arg2 ;
-(void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2 ;
-(id)initWithClient:(id)arg1 messageParameters:(id)arg2 replySender:(/*^block*/id)arg3 ;
-(void)granted;
-(void)invokeClaimer;
-(char)blocksClaim:(id)arg1 ;
-(void)devalueSelf;
-(char)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned)arg2 ;
-(char)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned)arg2 ;
-(void)resolveURLsThenContinueInvokingClaimer:(/*^block*/id)arg1 ;
-(id)initWithPurposeID:(id)arg1 url:(id)arg2 options:(unsigned)arg3 url:(id)arg4 options:(unsigned)arg5 claimer:(/*^block*/id)arg6 ;
-(void)dealloc;
@end


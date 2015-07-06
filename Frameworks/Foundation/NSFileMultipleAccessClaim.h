/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:22 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSFileAccessClaim.h>

@class NSMutableArray, NSFileAccessNode;

@interface NSFileMultipleAccessClaim : NSFileAccessClaim {

	NSMutableArray* _readingURLs;
	unsigned* _readingOptions;
	char* _readingURLsDidChange;
	NSMutableArray* _writingURLs;
	unsigned* _writingOptions;
	char* _writingURLsDidChange;
	NSMutableArray* _readingLocations;
	NSMutableArray* _writingLocations;
	NSFileAccessNode* _rootNode;
	unsigned _currentlyLinkResolvingURLIndex;
	int _readingLinkResolutionCount;

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
-(char)shouldBeRevokedPriorToInvokingAccessor;
-(void)resolveURLsThenMaybeContinueInvokingClaimer:(/*^block*/id)arg1 ;
-(id)initWithPurposeID:(id)arg1 intents:(id)arg2 claimer:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)finalize;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:22 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSCountedSet;

@interface NSFilePresenterRelinquishment : NSObject {

	NSCountedSet* _blockingAccessClaimIDs;
	/*^block*/id _reacquirer;

}
-(char)addBlockingAccessClaimID:(id)arg1 ;
-(void)setReacquirer:(/*^block*/id)arg1 ;
-(void)removeBlockingAccessClaimID:(id)arg1 ;
-(void)removeAllBlockingAccessClaimIDs;
-(void)removeBlockingAccessClaimID:(id)arg1 thenContinue:(/*^block*/id)arg2 ;
-(void)dealloc;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:22 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, NSMutableDictionary, NSString;

@interface NSFileCoordinator : NSObject {

	id _accessArbiter;
	id _fileReactor;
	id _purposeID;
	NSURL* _recentFilePresenterURL;
	id _accessClaimIDOrIDs;
	char _isCancelled;
	NSMutableDictionary* _movedItems;

}

@property (copy) NSString * purposeIdentifier; 
+(void)__itemAtURL:(id)arg1 didResolveConflictVersionWithClientID:(id)arg2 name:(id)arg3 purposeID:(id)arg4 ;
+(id)_currentFileCoordinator;
+(void)_addProcessIdentifier:(int)arg1 forID:(id)arg2 ;
+(void)_removeProcessIdentifierForID:(id)arg1 ;
+(id)filePresenters;
+(id)_canonicalURLForURL:(id)arg1 ;
+(void)_printDebugInfo;
+(char)_skipCoordinationWork;
+(void)_addFileProvider:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)_fileProviders;
+(void)_accessProcessIdentifiersUsingBlock:(/*^block*/id)arg1 ;
+(int)_processIdentifierForPresenterWithID:(id)arg1 ;
+(void)addFilePresenter:(id)arg1 ;
+(void)removeFilePresenter:(id)arg1 ;
+(void)__itemAtURL:(id)arg1 didDisconnectWithPurposeID:(id)arg2 ;
+(void)__itemAtURL:(id)arg1 didGainVersionWithClientID:(id)arg2 name:(id)arg3 purposeID:(id)arg4 ;
+(void)__itemAtURL:(id)arg1 didLoseVersionWithClientID:(id)arg2 name:(id)arg3 purposeID:(id)arg4 ;
+(void)__itemAtURL:(id)arg1 didReconnectWithPurposeID:(id)arg2 ;
+(void)__itemAtURL:(id)arg1 didDisappearWithPurposeID:(id)arg2 ;
+(void)__itemAtURL:(id)arg1 didMoveToURL:(id)arg2 purposeID:(id)arg3 ;
+(void)__itemAtURL:(id)arg1 didChangeWithPurposeID:(id)arg2 ;
+(void)__itemAtURL:(id)arg1 didChangeUbiquityWithPurposeID:(id)arg2 ;
+(void)_addFileProvider:(id)arg1 ;
+(void)_removeFileProvider:(id)arg1 ;
+(int)_processIdentifierForID:(id)arg1 ;
-(void)__coordinateReadingItemAtURL:(id)arg1 options:(unsigned)arg2 writingItemAtURL:(id)arg3 options:(unsigned)arg4 purposeID:(id)arg5 byAccessor:(/*^block*/id)arg6 ;
-(void)_lockdownPurposeIdentifier;
-(char)_purposeIdentifierLockedDown;
-(void)_setPurposeIdentifier:(id)arg1 ;
-(void)_invokeAccessor:(/*^block*/id)arg1 thenCompletionHandler:(/*^block*/id)arg2 ;
-(void)_coordinateReadingItemAtURL:(id)arg1 options:(unsigned)arg2 error:(id*)arg3 byAccessor:(/*^block*/id)arg4 ;
-(void)_coordinateWritingItemAtURL:(id)arg1 options:(unsigned)arg2 error:(id*)arg3 byAccessor:(/*^block*/id)arg4 ;
-(void)_coordinateReadingItemAtURL:(id)arg1 options:(unsigned)arg2 writingItemAtURL:(id)arg3 options:(unsigned)arg4 error:(id*)arg5 byAccessor:(/*^block*/id)arg6 ;
-(void)_coordinateWritingItemAtURL:(id)arg1 options:(unsigned)arg2 writingItemAtURL:(id)arg3 options:(unsigned)arg4 error:(id*)arg5 byAccessor:(/*^block*/id)arg6 ;
-(void)_coordinateAccessWithIntents:(id)arg1 queue:(id)arg2 byAccessor:(/*^block*/id)arg3 ;
-(void)__prepareForReadingItemsAtURLs:(id)arg1 options:(unsigned)arg2 writingItemsAtURLs:(id)arg3 options:(unsigned)arg4 byAccessor:(/*^block*/id)arg5 ;
-(void)_itemAtURL:(id)arg1 willMoveToURL:(id)arg2 ;
-(void)_itemAtURL:(id)arg1 didMoveToURL:(id)arg2 ;
-(void)setPurposeIdentifier:(NSString *)arg1 ;
-(NSString *)purposeIdentifier;
-(void)coordinateAccessWithIntents:(id)arg1 queue:(id)arg2 byAccessor:(/*^block*/id)arg3 ;
-(void)prepareForReadingItemsAtURLs:(id)arg1 options:(unsigned)arg2 writingItemsAtURLs:(id)arg3 options:(unsigned)arg4 error:(id*)arg5 byAccessor:(/*^block*/id)arg6 ;
-(void)itemAtURL:(id)arg1 willMoveToURL:(id)arg2 ;
-(void)_requestAccessClaim:(id)arg1 withProcedure:(/*^block*/id)arg2 ;
-(void)_forgetAccessClaimForID:(id)arg1 ;
-(void)_itemDidDisappearAtURL:(id)arg1 ;
-(void)_blockOnAccessClaim:(id)arg1 ;
-(void)_invokeAccessor:(/*^block*/id)arg1 orDont:(char)arg2 andRelinquishAccessClaim:(id)arg3 ;
-(id)_willStartWriteWithIntents:(id)arg1 async:(char)arg2 ;
-(void)_didEndWrite:(id)arg1 ;
-(void)_ubiquityDidChangeForItemAtURL:(id)arg1 ;
-(void)_itemDidChangeAtURL:(id)arg1 ;
-(void)_setFileProvider:(id)arg1 ;
-(id)retainAccess;
-(void)releaseAccess:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(void)coordinateReadingItemAtURL:(id)arg1 options:(unsigned)arg2 writingItemAtURL:(id)arg3 options:(unsigned)arg4 error:(id*)arg5 byAccessor:(/*^block*/id)arg6 ;
-(void)coordinateWritingItemAtURL:(id)arg1 options:(unsigned)arg2 error:(id*)arg3 byAccessor:(/*^block*/id)arg4 ;
-(void)coordinateWritingItemAtURL:(id)arg1 options:(unsigned)arg2 writingItemAtURL:(id)arg3 options:(unsigned)arg4 error:(id*)arg5 byAccessor:(/*^block*/id)arg6 ;
-(id)initWithFilePresenter:(id)arg1 ;
-(void)coordinateReadingItemAtURL:(id)arg1 options:(unsigned)arg2 error:(id*)arg3 byAccessor:(/*^block*/id)arg4 ;
-(void)itemAtURL:(id)arg1 didMoveToURL:(id)arg2 ;
-(void)__coordinateWritingItemAtURL:(id)arg1 options:(unsigned)arg2 purposeID:(id)arg3 byAccessor:(/*^block*/id)arg4 ;
-(void)__coordinateReadingItemAtURL:(id)arg1 options:(unsigned)arg2 purposeID:(id)arg3 byAccessor:(/*^block*/id)arg4 ;
-(void)__coordinateWritingItemAtURL:(id)arg1 options:(unsigned)arg2 writingItemAtURL:(id)arg3 options:(unsigned)arg4 purposeID:(id)arg5 byAccessor:(/*^block*/id)arg6 ;
@end


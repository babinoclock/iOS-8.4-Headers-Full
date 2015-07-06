/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:55 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/BRCTransferOperation.h>

@class NSMutableDictionary;

@interface BRCDownloadVersionsOperation : BRCTransferOperation {

	NSMutableDictionary* _readers;
	/*^block*/id _perEntryCompletionBlock;

}

@property (copy) id perEntryCompletionBlock;              //@synthesize perEntryCompletionBlock=_perEntryCompletionBlock - In the implementation block
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(void)setPerEntryCompletionBlock:(id)arg1 ;
-(void)addEntry:(id)arg1 ;
-(id)initWithSyncContext:(id)arg1 forNonLocalVersion:(char)arg2 ;
-(id)perEntryCompletionBlock;
-(void)__doneWithEntry:(id)arg1 error:(id)arg2 ;
-(void)__main:(id)arg1 ;
-(void)addReaderID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelReaderID:(id)arg1 ;
@end


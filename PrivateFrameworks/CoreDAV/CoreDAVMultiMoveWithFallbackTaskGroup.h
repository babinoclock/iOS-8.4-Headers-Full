/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:08 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>

@class NSSet, NSURL, NSDictionary, NSMutableSet, NSMutableDictionary, NSMutableArray;

@interface CoreDAVMultiMoveWithFallbackTaskGroup : CoreDAVTaskGroup {

	NSSet* _sourceURLs;
	NSURL* _destinationURL;
	int _overwrite;
	char _useFallback;
	NSDictionary* _sourceEntityDataPayloads;
	NSDictionary* _sourceEntityDataContentTypes;
	NSDictionary* _sourceEntityETags;
	NSMutableSet* _destinationURLs;
	NSMutableDictionary* _destinationEntityETags;
	NSMutableArray* _outstandingSourceURLsToMove;

}

@property (nonatomic,readonly) NSSet * sourceURLs;                                        //@synthesize sourceURLs=_sourceURLs - In the implementation block
@property (nonatomic,readonly) NSURL * destinationURL;                                    //@synthesize destinationURL=_destinationURL - In the implementation block
@property (nonatomic,readonly) NSDictionary * sourceEntityETags;                          //@synthesize sourceEntityETags=_sourceEntityETags - In the implementation block
@property (nonatomic,readonly) NSDictionary * sourceEntityDataPayloads;                   //@synthesize sourceEntityDataPayloads=_sourceEntityDataPayloads - In the implementation block
@property (nonatomic,readonly) NSDictionary * sourceEntityDataContentTypes;               //@synthesize sourceEntityDataContentTypes=_sourceEntityDataContentTypes - In the implementation block
@property (nonatomic,readonly) char useFallback;                                          //@synthesize useFallback=_useFallback - In the implementation block
@property (nonatomic,readonly) int overwrite;                                             //@synthesize overwrite=_overwrite - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * destinationEntityETags;              //@synthesize destinationEntityETags=_destinationEntityETags - In the implementation block
@property (nonatomic,readonly) NSMutableSet * destinationURLs;                            //@synthesize destinationURLs=_destinationURLs - In the implementation block
@property (nonatomic,retain) NSMutableArray * outstandingSourceURLsToMove;                //@synthesize outstandingSourceURLsToMove=_outstandingSourceURLsToMove - In the implementation block
-(NSURL *)destinationURL;
-(void)dealloc;
-(id)description;
-(void)startTaskGroup;
-(int)overwrite;
-(char)useFallback;
-(NSSet *)sourceURLs;
-(id)filenameFromURL:(id)arg1 ;
-(void)processOutstandingTasks;
-(NSMutableArray *)outstandingSourceURLsToMove;
-(id)fullDestinationURLFromSourceURL:(id)arg1 ;
-(NSDictionary *)sourceEntityETags;
-(void)_completedMoveTask:(id)arg1 sourceURL:(id)arg2 ;
-(NSMutableDictionary *)destinationEntityETags;
-(id)_eTagFromTaskResponseHeaders:(id)arg1 ;
-(NSDictionary *)sourceEntityDataPayloads;
-(NSDictionary *)sourceEntityDataContentTypes;
-(void)_completedPutTask:(id)arg1 sourceURL:(id)arg2 ;
-(NSMutableSet *)destinationURLs;
-(void)_setTagsForDestinationEntityAtURL:(id)arg1 fromTaskResponseHeaders:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)initWithSourceURLs:(id)arg1 destinationURL:(id)arg2 overwrite:(char)arg3 useFallback:(char)arg4 sourceEntityDataPayloads:(id)arg5 sourceEntityDataContentTypes:(id)arg6 sourceEntityETags:(id)arg7 accountInfoProvider:(id)arg8 taskManager:(id)arg9 ;
-(void)setOutstandingSourceURLsToMove:(NSMutableArray *)arg1 ;
@end


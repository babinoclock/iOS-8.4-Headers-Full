/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:55 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/BRCLocalItem.h>

@class BRCAliasItem, BRCDocumentItem;

@interface BRCDirectoryItem : BRCLocalItem

@property (nonatomic,readonly) BRCAliasItem * asAlias; 
@property (nonatomic,readonly) BRCDirectoryItem * asDirectory; 
@property (nonatomic,readonly) BRCDocumentItem * asDocument; 
-(char)changedAtRelativePath:(id)arg1 scanPackage:(char)arg2 ;
-(char)_insertInDB:(id)arg1 dbRowID:(unsigned long long)arg2 ;
-(char)_updateInDB:(id)arg1 diffs:(unsigned long long)arg2 ;
-(char)isDirectory;
-(char)_deleteFromDB:(id)arg1 diffs:(unsigned long long)arg2 keepAliases:(char)arg3 ;
-(char)updateFromFSAtPath:(id)arg1 parentID:(id)arg2 ;
-(BRCDirectoryItem *)asDirectory;
-(void)markLostDirectoryAsAlmostDead;
-(char)updateLocationAndMetaFromFSAtPath:(id)arg1 parentID:(id)arg2 ;
-(char)evictWithGroup:(id)arg1 error:(id*)arg2 ;
-(void)startDownloadWithOptions:(unsigned)arg1 group:(id)arg2 ;
-(float)prepareEditSyncUpWithOperation:(id)arg1 defaults:(id)arg2 ;
-(char)hasDeadChildren;
-(unsigned)markChildrenLost;
-(char)hasLostChildren;
-(void)_retryPostponedIfNeededForDiffs:(unsigned long long)arg1 ;
-(char)hasLiveChildren;
@end


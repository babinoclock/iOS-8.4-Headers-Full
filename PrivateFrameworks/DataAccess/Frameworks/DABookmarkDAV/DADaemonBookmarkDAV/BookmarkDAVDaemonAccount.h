/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:21 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DABookmarkDAV.framework/DADaemonBookmarkDAV.bundle/DADaemonBookmarkDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DABookmarkDAV/BookmarkDAVAccount.h>
#import <DADaemonBookmarkDAV/DADataclassLockWatcher.h>
#import <DADaemonBookmarkDAV/DABabysittable.h>

@class BookmarkDAVSyncDriver, NSString, NSDictionary;

@interface BookmarkDAVDaemonAccount : BookmarkDAVAccount <DADataclassLockWatcher, DABabysittable> {

	BookmarkDAVSyncDriver* _syncDriver;

}

@property (nonatomic,readonly) NSString * pushKey; 
@property (nonatomic,readonly) NSDictionary * pushTransport; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)pushKey;
-(void)discoveryTask:(id)arg1 gotAccountInfo:(id)arg2 error:(id)arg3 ;
-(id)waiterID;
-(void)getRootFolderWithConsumer:(id)arg1 ;
-(void)synchronizeBookmarkTreeWithConsumer:(id)arg1 hasRemoteChanges:(char)arg2 ;
-(NSDictionary *)pushTransport;
-(id)initWithBackingAccountInfo:(id)arg1 ;
-(void)discoverInitialPropertiesWithConsumer:(id)arg1 ;
@end


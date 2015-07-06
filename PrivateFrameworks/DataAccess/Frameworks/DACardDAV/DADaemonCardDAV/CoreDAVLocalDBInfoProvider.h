/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:22 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DADaemonCardDAV.bundle/DADaemonCardDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CoreDAVLocalDBInfoProvider <CoreDAVTaskGroupDelegate>
@optional
-(char)syncPutTask:(id)arg1 completedWithNewETag:(id)arg2 parentTaskGroup:(id)arg3 error:(id)arg4;
-(char)syncPutTask:(id)arg1 completedWithNewETag:(id)arg2 error:(id)arg3;
-(char)setLocalETag:(id)arg1 forItemWithURL:(id)arg2 inFolderWithURL:(id)arg3;
-(char)syncPostTask:(id)arg1 postedData:(id)arg2 parentTaskGroup:(id)arg3 error:(id)arg4;
-(char)syncPostTask:(id)arg1 data:(id)arg2 error:(id)arg3;
-(char)syncBulkChangeTask:(id)arg1 parentTaskGroup:(id)arg2 completedWithError:(id)arg3;
-(char)syncBulkChangeTask:(id)arg1 error:(id)arg2;
-(char)syncDeleteTask:(id)arg1 parentTaskGroup:(id)arg2 completedWithError:(id)arg3;
-(char)syncDeleteTask:(id)arg1 error:(id)arg2;

@required
-(void)containerSyncTask:(id)arg1 completedWithNewCTag:(id)arg2 newSyncToken:(id)arg3 addedOrModified:(id)arg4 removed:(id)arg5 error:(id)arg6;
-(void)containerSyncTask:(id)arg1 retrievedAddedOrModifiedActions:(id)arg2 removed:(id)arg3;
-(id)copyLocalETagsForURLs:(id)arg1 inFolderWithURL:(id)arg2;
-(id)copyAllLocalURLsInFolderWithURL:(id)arg1;

@end


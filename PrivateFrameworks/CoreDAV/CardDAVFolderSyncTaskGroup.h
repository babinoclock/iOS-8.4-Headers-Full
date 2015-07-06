/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:07 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVContainerSyncTaskGroup.h>

@interface CardDAVFolderSyncTaskGroup : CoreDAVContainerSyncTaskGroup {

	char _isInitialSync;

}

@property (assign,nonatomic) char isInitialSync;              //@synthesize isInitialSync=_isInitialSync - In the implementation block
-(id)dataContentType;
-(Class)bulkChangeTaskClass;
-(id)copyMultiGetTaskWithURLs:(id)arg1 ;
-(id)copyGetTaskWithURL:(id)arg1 ;
-(id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 syncItemOrder:(char)arg5 context:(id)arg6 accountInfoProvider:(id)arg7 taskManager:(id)arg8 appSpecificDataItemClass:(Class)arg9 ;
-(id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 context:(void*)arg5 accountInfoProvider:(id)arg6 taskManager:(id)arg7 appSpecificDataItemClass:(Class)arg8 ;
-(void)setIsInitialSync:(char)arg1 ;
-(char)isInitialSync;
@end


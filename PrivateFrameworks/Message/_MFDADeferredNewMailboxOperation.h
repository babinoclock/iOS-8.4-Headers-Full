/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:25 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Message/MFOfflineCacheOperation.h>
#import <Message/MFDADeferredFolderChangeOperation.h>

@class NSString;

@interface _MFDADeferredNewMailboxOperation : MFOfflineCacheOperation <MFDADeferredFolderChangeOperation> {

	NSString* _displayName;
	NSString* _parentFolderID;
	NSString* _temporaryFolderID;

}
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)folderChangeResult;
-(void)applyToFolderMap:(id)arg1 ;
-(char)performWithAccount:(id)arg1 offlineCache:(id)arg2 ;
-(id)initWithDisplayName:(id)arg1 parentFolderID:(id)arg2 temporaryFolderID:(id)arg3 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:09 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface IMDAttachmentStore : NSObject
+(id)sharedInstance;
-(char)storeAttachment:(id)arg1 associateWithMessageWithGUID:(id)arg2 ;
-(id)attachmentWithGUID:(id)arg1 ;
-(char)updateAttachment:(id)arg1 ;
-(char)removeAttachment:(id)arg1 fromMessageWithGUID:(id)arg2 ;
-(char)deleteAttachmentsWithGUIDs:(id)arg1 ;
-(char)deleteAttachmentDataForTransfer:(id)arg1 ;
-(char)deleteAttachmentWithGUID:(id)arg1 ;
@end


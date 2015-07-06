/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:24 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MFLock, NSMutableDictionary;

@interface MFWebAttachmentSource : NSObject {

	MFLock* _attachmentsLock;
	NSMutableDictionary* _attachmentsByURL;
	NSMutableDictionary* _removedAttachmentsByURL;

}

@property (assign) char keepRemovedAttachments; 
+(id)allSources;
+(id)_setOfAllSources;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)attachmentForURL:(id)arg1 ;
-(char)setAttachment:(id)arg1 forURL:(id)arg2 ;
-(id)attachmentForURL:(id)arg1 includeRemoved:(char)arg2 ;
-(char)keepRemovedAttachments;
-(void)setKeepRemovedAttachments:(char)arg1 ;
-(void)removeAttachmentForURL:(id)arg1 ;
@end


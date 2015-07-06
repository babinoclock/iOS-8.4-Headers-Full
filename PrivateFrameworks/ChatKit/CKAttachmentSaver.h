/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:45 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface CKAttachmentSaver : NSObject {

	unsigned _errorCount;
	NSMutableArray* _attachments;

}
-(void)dealloc;
-(void)_saveNextAttachment;
-(void)_done;
-(void)_saveCompletionForVideoWithPath:(id)arg1 error:(id)arg2 context:(void*)arg3 ;
-(void)_saveCompletionForImage:(id)arg1 error:(id)arg2 context:(void*)arg3 ;
-(void)_pop;
-(void)_saveCompletion:(id)arg1 ;
-(id)initWithAttachments:(id)arg1 ;
-(void)runToCompletion;
@end


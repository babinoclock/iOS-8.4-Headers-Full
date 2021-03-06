/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:25 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Message/MFAttachmentDataProvider.h>

@class NSData, MFMimePart, MFMailMessage, NSString;

@interface MFRFC822AttachmentDataProvider : NSObject <MFAttachmentDataProvider> {

	NSData* _messageData;
	MFMimePart* _parentPart;
	MFMailMessage* _message;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(char)fetchDataForAttachment:(id)arg1 withDataConsumer:(id)arg2 error:(id*)arg3 ;
-(id)initWithMessageData:(id)arg1 parentPart:(id)arg2 ;
-(id)messageForAttachment:(id)arg1 ;
-(id)fetchLocalDataForAttachment:(id)arg1 ;
@end


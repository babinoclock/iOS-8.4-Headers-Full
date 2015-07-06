/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:29 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AssistantServices/AFSiriModelObject.h>

@class AFContactAddress, NSArray, NSString, NSURL, NSDate;

@interface AFMessage : AFSiriModelObject {

	char _outbound;
	AFContactAddress* _senderAddress;
	NSArray* _recipientAddresses;
	NSString* _subjectText;
	NSString* _bodyText;
	NSURL* _attachmentURL;
	NSDate* _sendDate;
	NSString* _chatIdentifier;

}
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setBodyText:(id)arg1 ;
-(id)bodyText;
-(id)_aceContextObjectValue;
-(id)attachmentURL;
-(char)isOutbound;
-(id)subjectText;
-(id)senderAddress;
-(void)setOutbound:(char)arg1 ;
-(void)setSenderAddress:(id)arg1 ;
-(void)setSubjectText:(id)arg1 ;
-(void)setAttachmentURL:(id)arg1 ;
-(id)chatIdentifier;
-(void)setChatIdentifier:(id)arg1 ;
-(id)recipientAddresses;
-(void)setRecipientAddresses:(id)arg1 ;
-(void)setSendDate:(id)arg1 ;
-(id)sendDate;
@end


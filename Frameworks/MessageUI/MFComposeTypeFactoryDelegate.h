/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:40 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MFComposeTypeFactoryDelegate <NSObject>
@optional
-(void)addSignature:(char)arg1;

@required
-(id)sendingEmailAddress;
-(id)bodyField;
-(id)toRecipients;
-(id)ccRecipients;
-(id)savedHeaders;
-(void)setCcRecipients:(id)arg1;
-(void)setBccRecipients:(id)arg1;
-(void)setSendingEmailAddress:(id)arg1 addIfNotPresent:(char)arg2;
-(id)sendingAccountProxy;
-(id)bccRecipients;
-(id)accountProxyGenerator;
-(void)setSavedHeaders:(id)arg1;
-(char)hasAnyHiddenTrailingEmptyQuote;
-(void)setToRecipients:(id)arg1;
-(id)attachments;
-(void)setSubject:(id)arg1;
-(id)subject;

@end


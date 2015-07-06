/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:23 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Message/MFWebAttachmentSource.h>

@class NSURL, MFMimeBody, MFMimePart, NSData, MFLock, NSMutableDictionary, MFAttachmentManager;

@interface MFWebMessageDocument : MFWebAttachmentSource {

	unsigned _uniqueId;
	NSURL* _baseURL;
	MFMimeBody* _mimeBody;
	MFMimePart* _htmlPart;
	NSData* _htmlData;
	MFLock* _lock;
	NSMutableDictionary* _partsByURL;
	NSMutableDictionary* _partsByFilename;
	unsigned long _preferredEncoding;
	MFAttachmentManager* _attachmentManager;

}

@property (readonly) NSURL * baseURL;                                              //@synthesize baseURL=_baseURL - In the implementation block
@property (readonly) MFMimeBody * mimeBody;                                        //@synthesize mimeBody=_mimeBody - In the implementation block
@property (readonly) MFMimePart * mimePart;                                        //@synthesize htmlPart=_htmlPart - In the implementation block
@property (readonly) NSData * htmlData;                                            //@synthesize htmlData=_htmlData - In the implementation block
@property (assign) unsigned long preferredEncoding;                                //@synthesize preferredEncoding=_preferredEncoding - In the implementation block
@property (nonatomic,retain) MFAttachmentManager * attachmentManager;              //@synthesize attachmentManager=_attachmentManager - In the implementation block
+(id)sourceForURL:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSURL *)baseURL;
-(MFMimeBody *)mimeBody;
-(unsigned long)preferredEncoding;
-(void)setPreferredEncoding:(unsigned long)arg1 ;
-(MFMimePart *)mimePart;
-(id)initWithMimePart:(id)arg1 ;
-(id)_initWithMimePart:(id)arg1 htmlData:(id)arg2 ;
-(id)attachmentForURL:(id)arg1 ;
-(id)mimePartForURL:(id)arg1 ;
-(NSData *)htmlData;
-(MFAttachmentManager *)attachmentManager;
-(id)initWithMimeBody:(id)arg1 ;
-(id)initWithMimePart:(id)arg1 htmlData:(id)arg2 encoding:(unsigned long)arg3 ;
-(id)attachmentsInDocument;
-(id)preferredCharacterSet;
-(id)attachmentForCID:(id)arg1 ;
-(void)setAttachmentManager:(MFAttachmentManager *)arg1 ;
-(id)fileWrapper;
@end


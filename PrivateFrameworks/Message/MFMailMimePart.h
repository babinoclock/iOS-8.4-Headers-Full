/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:25 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MIME/MFMimePart.h>

@interface MFMailMimePart : MFMimePart
+(char)isRecognizedClassForContent:(id)arg1 ;
+(Class)attachmentClass;
-(id)fileWrapperForcingDownload:(char)arg1 ;
-(void)configureFileWrapper:(id)arg1 ;
-(id)contentToOffset:(unsigned)arg1 resultOffset:(unsigned*)arg2 downloadIfNecessary:(char)arg3 asHTML:(char)arg4 isComplete:(char*)arg5 ;
-(id)htmlContentToOffset:(unsigned)arg1 resultOffset:(unsigned*)arg2 downloadIfNecessary:(char)arg3 ;
-(id)fileWrapperForDecodedObject:(id)arg1 withFileData:(id*)arg2 ;
-(char)_shouldContinueDecodingProcess;
-(id)decodeTextRichtext;
-(id)decodeTextEnriched;
-(id)decodeTextHtml;
-(id)htmlContentToOffset:(unsigned)arg1 resultOffset:(unsigned*)arg2 ;
-(id)htmlContent;
-(id)decodeTextPlain;
-(id)decodeTextCalendar;
-(id)decodeMultipartAppledouble;
-(id)storeData:(id)arg1 inMessage:(id)arg2 isComplete:(char)arg3 ;
-(id)decodeMessageDelivery_status;
-(id)decodeMessageRfc822;
-(id)decodeMessagePartial;
-(id)decodeMessageExternal_body;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:15 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MIME/MFBaseFilterDataConsumer.h>

@interface MFQuotedPrintableEncoder : MFBaseFilterDataConsumer {

	unsigned long _line;
	unsigned long _matchedFrom;
	unsigned char _lastHorizontalWhitespace;
	char _forTextPart;
	char _lastWasNewLine;
	char _forHeader;

}

@property (assign,nonatomic) char forTextPart;              //@synthesize forTextPart=_forTextPart - In the implementation block
@property (assign,nonatomic) char forHeader;                //@synthesize forHeader=_forHeader - In the implementation block
+(unsigned)requiredSizeToEncodeHeaderBytes:(const char*)arg1 length:(unsigned)arg2 ;
-(void)done;
-(int)appendData:(id)arg1 ;
-(void)setForHeader:(char)arg1 ;
-(char)forTextPart;
-(char)forHeader;
-(void)setForTextPart:(char)arg1 ;
@end


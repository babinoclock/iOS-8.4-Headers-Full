/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:24 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableString, NSMutableArray;

@interface MFPlainTextDocument : NSObject {

	NSMutableString* _text;
	NSMutableArray* _fragments;

}
-(void)dealloc;
-(id)string;
-(void)getFormatFlowedString:(id*)arg1 insertedTrailingSpaces:(char*)arg2 encoding:(unsigned long)arg3 ;
-(id)quotedString:(unsigned long)arg1 ;
-(unsigned)fragmentCount;
-(void)getString:(id*)arg1 quoteLevel:(unsigned*)arg2 ofFragmentAtIndex:(unsigned)arg3 ;
-(void)appendString:(id)arg1 withQuoteLevel:(unsigned)arg2 ;
-(id)archivedRepresentation;
-(void)appendArchivedRepresentation:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:58 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <CoreFoundation/NSOutputStream.h>

@class NSOutputStream, NSError;

@interface SSGzipOutputStream : NSOutputStream {

	NSOutputStream* _actualOutputStream;
	z_stream_s* _stream;
	NSError* _streamError;
	char* _streamOutBuffer;
	unsigned _streamOutBufferSize;
	unsigned _streamContentLength;

}
-(unsigned)streamStatus;
-(id)initToMemory;
-(void)dealloc;
-(id)init;
-(void)close;
-(char)hasSpaceAvailable;
-(void)open;
-(int)write:(const char*)arg1 maxLength:(unsigned)arg2 ;
-(id)streamError;
-(id)propertyForKey:(id)arg1 ;
-(char)setProperty:(id)arg1 forKey:(id)arg2 ;
-(id)initToFileAtPath:(id)arg1 append:(char)arg2 ;
-(int)_consumeStreamOutput:(char)arg1 ;
-(void)_setStreamError:(int)arg1 context:(id)arg2 ;
-(unsigned)streamContentLength;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:37 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSStream.h>

@interface NSOutputStream : NSStream

@property (readonly) char hasSpaceAvailable; 
+(id)outputStreamToMemory;
+(id)outputStreamToBuffer:(char*)arg1 capacity:(unsigned)arg2 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)outputStreamWithURL:(id)arg1 append:(char)arg2 ;
+(id)outputStreamToFileAtPath:(id)arg1 append:(char)arg2 ;
-(SCD_Struct_NS11)_cfStreamError;
-(unsigned long)_cfTypeID;
-(char)hasSpaceAvailable;
-(int)write:(const char*)arg1 maxLength:(unsigned)arg2 ;
@end


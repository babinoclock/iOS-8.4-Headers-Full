/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:19 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSString.h>

@interface NSPlaceholderString : NSString
-(id)initWithCString:(const char*)arg1 length:(unsigned)arg2 ;
-(id)initWithFormat:(id)arg1 locale:(id)arg2 arguments:(void*)arg3 ;
-(id)initWithCStringNoCopy:(char*)arg1 length:(unsigned)arg2 freeWhenDone:(char)arg3 ;
-(id)retain;
-(void)dealloc;
-(id)init;
-(id)autorelease;
-(unsigned)retainCount;
-(id)initWithBytes:(const void*)arg1 length:(unsigned)arg2 encoding:(unsigned)arg3 ;
-(unsigned)length;
-(char)_tryRetain;
-(char)_isDeallocating;
-(id)initWithString:(id)arg1 ;
-(unsigned short)characterAtIndex:(unsigned)arg1 ;
-(id)initWithData:(id)arg1 encoding:(unsigned)arg2 ;
-(id)initWithCString:(const char*)arg1 encoding:(unsigned)arg2 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned)arg2 encoding:(unsigned)arg3 freeWhenDone:(char)arg4 ;
-(id)initWithCharactersNoCopy:(unsigned short*)arg1 length:(unsigned)arg2 freeWhenDone:(char)arg3 ;
-(id)initWithCharacters:(const unsigned short*)arg1 length:(unsigned)arg2 ;
-(id)initWithCString:(const char*)arg1 ;
-(oneway void)release;
@end


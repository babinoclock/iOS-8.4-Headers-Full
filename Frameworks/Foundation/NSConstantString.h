/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:55 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSSimpleCString.h>

@interface NSConstantString : NSSimpleCString
-(const char*)cString;
-(const char*)_fastCStringContents:(char)arg1 ;
-(unsigned)cStringLength;
-(unsigned)fastestEncoding;
-(unsigned)smallestEncoding;
-(id)initWithCharactersNoCopy:(unsigned short*)arg1 length:(unsigned)arg2 ;
-(const char*)lossyCString;
-(id)retain;
-(char)isEqualToString:(id)arg1 ;
-(void)dealloc;
-(id)copy;
-(id)autorelease;
-(char)isEqual:(id)arg1 ;
-(unsigned)retainCount;
-(unsigned)hash;
-(unsigned)length;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)_tryRetain;
-(char)_isDeallocating;
-(int)compare:(id)arg1 options:(unsigned)arg2 range:(NSRange)arg3 ;
-(unsigned short)characterAtIndex:(unsigned)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(oneway void)release;
-(void)finalize;
-(char)canBeConvertedToEncoding:(unsigned)arg1 ;
@end


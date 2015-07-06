/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:55 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSMutableString.h>

@interface NSBigMutableString : NSMutableString {

	struct {
		unsigned isStorage : 1;
		unsigned isUnicode : 1;
		unsigned hasBOM : 1;
		unsigned swap : 1;
		unsigned immutable : 1;
		unsigned  : 27;
	}  flags;
	unsigned length;
	SCD_Union_NS2* contents;

}
+(void)initialize;
-(id)_newSubstringWithRange:(NSRange)arg1 zone:(NSZone*)arg2 ;
-(char)_isCString;
-(id)_createSubstringWithRange:(NSRange)arg1 ;
-(void)_checkForInvalidMutationWithSelector:(SEL)arg1 ;
-(char)_getData:(id*)arg1 encoding:(unsigned*)arg2 ;
-(char)_setData:(id)arg1 encoding:(unsigned)arg2 ;
-(char)_copyStorage:(_CFStorage*)arg1 encoding:(unsigned*)arg2 ;
-(char)_setStorage:(CFStorageRef)arg1 encoding:(unsigned)arg2 ;
-(id)initWithStorage:(CFStorageRef)arg1 length:(unsigned)arg2 isUnicode:(char)arg3 ;
-(void)_markAsImmutable;
-(id)_newSmallImmutableSubstringWithRange:(NSRange)arg1 zone:(NSZone*)arg2 ;
-(id)_newBigSubstringWithRange:(NSRange)arg1 wantsMutable:(char)arg2 zone:(NSZone*)arg3 ;
-(char)_isMarkedAsImmutable;
-(void)dealloc;
-(unsigned)length;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithString:(id)arg1 ;
-(unsigned short)characterAtIndex:(unsigned)arg1 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
@end


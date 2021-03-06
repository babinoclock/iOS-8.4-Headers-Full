/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:21 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSString.h>

@class NSString;

@interface NSPinyinString : NSString {

	NSString* _string;
	unsigned _syllableCount;
	unsigned _score;
	unsigned _rangeCount;
	unsigned _replacementCount;
	unsigned _transpositionCount;
	unsigned _insertionCount;
	unsigned _deletionCount;
	unsigned _firstModificationIndex;
	NSRange* _ranges;
	char _lastSyllableIsPartial;

}
+(id)_alternativesForInputString:(id)arg1 ;
+(id)_prefixesForInputString:(id)arg1 ;
+(id)_correctionsForInputString:(id)arg1 ;
+(id)alternativesForInputString:(id)arg1 ;
+(id)prefixesForInputString:(id)arg1 ;
-(id)initWithString:(id)arg1 syllableCount:(unsigned)arg2 lastSyllableIsPartial:(char)arg3 score:(unsigned)arg4 replacementCount:(unsigned)arg5 transpositionCount:(unsigned)arg6 insertionCount:(unsigned)arg7 deletionCount:(unsigned)arg8 indexOfFirstModification:(unsigned)arg9 rangeCount:(unsigned)arg10 ranges:(NSRange*)arg11 ;
-(unsigned)syllableCount;
-(char)lastSyllableIsPartial;
-(unsigned)numberOfNonPinyinRanges;
-(unsigned)numberOfReplacements;
-(unsigned)numberOfTranspositions;
-(unsigned)numberOfInsertions;
-(unsigned)numberOfDeletions;
-(unsigned)indexOfFirstModification;
-(NSRange)nonPinyinRangeAtIndex:(unsigned)arg1 ;
-(id)nonPinyinIndexSet;
-(id)initWithString:(id)arg1 syllableCount:(unsigned)arg2 lastSyllableIsPartial:(char)arg3 score:(unsigned)arg4 replacementCount:(unsigned)arg5 transpositionCount:(unsigned)arg6 insertionCount:(unsigned)arg7 deletionCount:(unsigned)arg8 rangeCount:(unsigned)arg9 ranges:(NSRange*)arg10 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned)length;
-(id)string;
-(Class)classForCoder;
-(unsigned short)characterAtIndex:(unsigned)arg1 ;
-(unsigned)score;
@end


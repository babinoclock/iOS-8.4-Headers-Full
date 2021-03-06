/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:21 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSTextCheckingResult.h>

@class NSRegularExpression, NSArray;

@interface NSRegularExpressionCheckingResult : NSTextCheckingResult

@property (readonly) NSRegularExpression * regularExpression; 
@property (readonly) NSArray * rangeArray; 
-(id)resultByAdjustingRangesWithOffset:(int)arg1 ;
-(NSRegularExpression *)regularExpression;
-(id)initWithRanges:(NSRange*)arg1 count:(unsigned)arg2 regularExpression:(id)arg3 ;
-(NSArray *)rangeArray;
-(id)initWithRangeArray:(id)arg1 regularExpression:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)resultType;
@end


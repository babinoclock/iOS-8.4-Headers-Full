/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:25 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppSupport/AppSupport-Structs.h>
#import <AppSupport/NSCopying.h>
#import <AppSupport/NSCoding.h>

@class NSString;

@interface CPRegularExpression : NSObject <NSCopying, NSCoding> {

	NSString* _expressionString;
	void* _reserved;

}
+(void)initialize;
+(id)regularExpressionWithString:(id)arg1 ;
+(const char*)getBytesForString:(id)arg1 lossByte:(unsigned char)arg2 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithExpressionString:(id)arg1 ;
-(id)initWithExpressionString:(id)arg1 options:(unsigned)arg2 ;
-(id)expressionString;
-(unsigned)numberOfSubexpressions;
-(NSRange)matchedRangeForCString:(const char*)arg1 range:(NSRange)arg2 subexpressionRanges:(NSRange*)arg3 count:(unsigned)arg4 ;
-(NSRange)matchedRangeForString:(id)arg1 range:(NSRange)arg2 subexpressionRanges:(NSRange*)arg3 count:(unsigned)arg4 ;
@end


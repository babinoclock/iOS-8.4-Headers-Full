/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:23 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSFormatter.h>

@interface NSByteCountFormatter : NSFormatter {

	unsigned _allowedUnits;
	char _countStyle;
	char _allowsNonnumericFormatting;
	char _includesUnit;
	char _includesCount;
	char _includesActualByteCount;
	char _adaptive;
	char _zeroPadsFractionDigits;
	int _formattingContext;
	int _reserved[5];

}

@property (assign) unsigned allowedUnits; 
@property (assign) int countStyle; 
@property (assign) char allowsNonnumericFormatting;              //@synthesize allowsNonnumericFormatting=_allowsNonnumericFormatting - In the implementation block
@property (assign) char includesUnit;                            //@synthesize includesUnit=_includesUnit - In the implementation block
@property (assign) char includesCount;                           //@synthesize includesCount=_includesCount - In the implementation block
@property (assign) char includesActualByteCount;                 //@synthesize includesActualByteCount=_includesActualByteCount - In the implementation block
@property (getter=isAdaptive) char adaptive;                     //@synthesize adaptive=_adaptive - In the implementation block
@property (assign) char zeroPadsFractionDigits;                  //@synthesize zeroPadsFractionDigits=_zeroPadsFractionDigits - In the implementation block
@property (assign) int formattingContext; 
+(id)stringFromByteCount:(long long)arg1 countStyle:(int)arg2 ;
-(int)formattingContext;
-(char)isPartialStringValid:(id*)arg1 proposedSelectedRange:(NSRange*)arg2 originalString:(id)arg3 originalSelectedRange:(NSRange)arg4 errorDescription:(id*)arg5 ;
-(unsigned)allowedUnits;
-(int)countStyle;
-(char)allowsNonnumericFormatting;
-(char)includesUnit;
-(char)includesCount;
-(char)includesActualByteCount;
-(char)isAdaptive;
-(char)zeroPadsFractionDigits;
-(void)setAdaptive:(char)arg1 ;
-(void)setIncludesUnit:(char)arg1 ;
-(void)setIncludesCount:(char)arg1 ;
-(void)setIncludesActualByteCount:(char)arg1 ;
-(void)setZeroPadsFractionDigits:(char)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)_options;
-(id)stringForObjectValue:(id)arg1 ;
-(void)setAllowsNonnumericFormatting:(char)arg1 ;
-(void)setCountStyle:(int)arg1 ;
-(id)stringFromByteCount:(long long)arg1 ;
-(char)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(void)setFormattingContext:(int)arg1 ;
-(void)setAllowedUnits:(unsigned)arg1 ;
@end


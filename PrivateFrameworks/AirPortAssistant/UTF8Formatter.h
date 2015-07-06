/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:24 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirPortAssistant/APFormatter.h>

@interface UTF8Formatter : APFormatter {

	unsigned _maxByteCount;

}
+(id)utf8Formatter:(unsigned)arg1 ;
+(id)afpSet;
+(id)utf8Formatter;
+(id)utf8FormatterWithMaxByteCount:(unsigned)arg1 maxLength:(unsigned)arg2 ;
+(id)afpFormatter:(unsigned)arg1 ;
-(char)isPartialStringValid:(id)arg1 newEditingString:(id*)arg2 errorDescription:(id*)arg3 ;
-(id)initWithMaxByteCount:(unsigned)arg1 maxLength:(unsigned)arg2 ;
-(id)initAFPFormatterWithLength:(unsigned)arg1 ;
-(void)setMaxByteCount:(unsigned)arg1 ;
-(unsigned)maxByteCount;
@end


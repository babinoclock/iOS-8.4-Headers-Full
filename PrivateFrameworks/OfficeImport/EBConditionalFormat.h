/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:41 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EBConditionalFormat : NSObject
+(int)convertXlConditionalFmtTypeEnumToED:(int)arg1 ;
+(int)convertXlConditionalFmtOperatorEnumToED:(int)arg1 ;
+(BOOL)validXlCf:(XlCf*)arg1 ;
+(int)convertEDConditionalFmtTypeEnumToXl:(int)arg1 ;
+(int)convertEDConditionalFmtOperatorEnumToXl:(int)arg1 ;
+(void)readXlConditionalFormat:(XlConditionalFormat*)arg1 toEDConditionalFormatting:(id)arg2 state:(id)arg3 ;
@end


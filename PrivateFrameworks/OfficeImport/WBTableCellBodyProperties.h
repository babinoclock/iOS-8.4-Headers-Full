/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:44 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface WBTableCellBodyProperties : NSObject
+(void)readFrom:(WrdTableProperties*)arg1 tracked:(WrdTableProperties*)arg2 properties:(id)arg3 index:(unsigned)arg4 ;
+(void)mapWordProperties:(WrdTableProperties*)arg1 toProperties:(id)arg2 index:(unsigned)arg3 ;
+(void)mapProperties:(id)arg1 toWordProperties:(WrdTableProperties*)arg2 index:(unsigned)arg3 ;
+(void)write:(id)arg1 wrdProperties:(WrdTableProperties*)arg2 tracked:(WrdTableProperties*)arg3 index:(unsigned)arg4 ;
+(id)formattingChangeDate:(const WrdDateTimeRef)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:44 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface WBTableRow : NSObject
+(void)readFrom:(id)arg1 textRuns:(id)arg2 to:(id)arg3 index:(unsigned)arg4 row:(id)arg5 ;
+(void)readCellsFrom:(id)arg1 textRuns:(id)arg2 level:(int)arg3 to:(id)arg4 properties:(WrdTableProperties*)arg5 tracked:(WrdTableProperties*)arg6 ;
+(void)collectCellProperties:(WrdTableProperties*)arg1 tracked:(WrdTableProperties*)arg2 for:(id)arg3 ;
@end


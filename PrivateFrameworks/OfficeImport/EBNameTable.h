/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:42 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EBNameTable : NSObject
+(id)edNameFromXlName:(XlName*)arg1 name:(OcText*)arg2 state:(id)arg3 ;
+(XlName*)xlNameFromEDName:(id)arg1 state:(id)arg2 ;
+(void)readFromState:(id)arg1 ;
+(XlNameTable*)createXlNameTableFromNamesCollection:(id)arg1 state:(id)arg2 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:38 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface OAVStroke : NSObject
+(void)initialize;
+(int)readPresetDashStyle:(id)arg1 ;
+(int)readLineEndType:(id)arg1 ;
+(int)readLineEndWidth:(id)arg1 ;
+(int)readLineEndLength:(id)arg1 ;
+(int)readCapStyle:(id)arg1 ;
+(int)readCompoundType:(id)arg1 ;
+(id)targetFgColorWithManager:(id)arg1 ;
+(id)readFromManager:(id)arg1 ;
+(void)readFillStyleFromManager:(id)arg1 toStroke:(id)arg2 ;
+(void)readDashStyleFromManager:(id)arg1 toStroke:(id)arg2 ;
+(void)readJoinStyleFromManager:(id)arg1 toStroke:(id)arg2 ;
+(void)readLineEnd:(id)arg1 type:(id)arg2 width:(id)arg3 length:(id)arg4 ;
@end


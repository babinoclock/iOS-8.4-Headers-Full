/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:36 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAXStroke : NSObject
+(id)readStrokeFromXmlNode:(xmlNode*)arg1 packagePart:(id)arg2 drawingState:(id)arg3 ;
+(id)lineCapEnumMap;
+(id)compoundLineEnumMap;
+(id)penAlignmentEnumMap;
+(id)readPresetDashFromXmlNode:(xmlNode*)arg1 ;
+(id)readCustomDashFromXmlNode:(xmlNode*)arg1 drawingState:(id)arg2 ;
+(void)readLineEnd:(id)arg1 fromXmlNode:(xmlNode*)arg2 ;
+(id)lineEndTypeEnumMap;
+(id)lineEndWidthEnumMap;
+(id)lineEndLengthEnumMap;
+(id)presetDashEnumMap;
@end


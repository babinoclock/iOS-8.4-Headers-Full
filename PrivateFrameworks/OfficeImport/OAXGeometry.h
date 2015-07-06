/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:36 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAXGeometry : NSObject
+(id)readPresetGeometryFromXmlNode:(xmlNode*)arg1 drawingState:(id)arg2 ;
+(id)readCustomGeometryFromXmlNode:(xmlNode*)arg1 hasImplicitFormulas:(char)arg2 drawingState:(id)arg3 ;
+(void)readAdjustValuesFromCustomGeometryXmlNode:(xmlNode*)arg1 toCustomGeometry:(id)arg2 adjustValueNameToIndexMap:(id)arg3 drawingState:(id)arg4 ;
+(void)addFormulasFromFile:(id)arg1 toCustomGeometry:(id)arg2 formulaNameToIndexMap:(id)arg3 drawingState:(id)arg4 ;
+(void)readFormulasFromCustomGeometryXmlNode:(xmlNode*)arg1 toCustomGeometry:(id)arg2 adjustValueNameToIndexMap:(id)arg3 formulaNameToIndexMap:(id)arg4 drawingState:(id)arg5 ;
+(void)readTextRectFromCustomGeometryXmlNode:(xmlNode*)arg1 toCustomGeometry:(id)arg2 formulaNameToIndexMap:(id)arg3 drawingState:(id)arg4 ;
+(void)readPathsFromCustomGeometryXmlNode:(xmlNode*)arg1 toCustomGeometry:(id)arg2 formulaNameToIndexMap:(id)arg3 drawingState:(id)arg4 ;
+(id)shapeTypeEnumMap;
+(void)writePath:(id)arg1 coordSpace:(CsRect<int>)arg2 to:(id)arg3 ;
+(id)stringWritingShapeType:(int)arg1 ;
+(int)adjustValueWithGuideXmlNode:(xmlNode*)arg1 ;
+(id)stringForShapeType:(int)arg1 ;
+(id)readFromParentXmlNode:(xmlNode*)arg1 drawingState:(id)arg2 ;
+(int)shapeTypeForString:(id)arg1 ;
+(void)write:(id)arg1 to:(id)arg2 ;
+(id)formulaTypeEnumMap;
+(id)formulaKeywordEnumMap;
+(OADAdjustCoord)readAdjustCoordFromXmlNode:(xmlNode*)arg1 name:(const char*)arg2 formulaNameToIndexMap:(id)arg3 ;
+(id)pathFillModeEnumMap;
+(void)writeShapePathPoint:(OADAdjustPoint)arg1 origin:(CsPoint<int>)arg2 to:(id)arg3 ;
@end


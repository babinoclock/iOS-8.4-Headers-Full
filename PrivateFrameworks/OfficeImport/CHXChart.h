/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:41 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface CHXChart : NSObject
+(id)readFromXmlDocument:(xmlDoc*)arg1 chartStyleId:(int)arg2 state:(id)arg3 ;
+(void)readDefaultTextPropertiesFromXmlNode:(xmlNode*)arg1 chart:(id)arg2 state:(id)arg3 ;
+(void)readChartFromXmlNode:(xmlNode*)arg1 chart:(id)arg2 state:(id)arg3 ;
+(id)readFromXmlDocument:(xmlDoc*)arg1 state:(id)arg2 ;
+(int)chdDisplayBlanksAsEnumFromXmlElement:(xmlNode*)arg1 ;
@end


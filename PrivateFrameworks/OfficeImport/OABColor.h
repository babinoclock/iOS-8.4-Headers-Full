/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:36 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OABColor : NSObject
+(int)oadMapColorIndexWithEshSchemeColorIndex:(unsigned short)arg1 ;
+(int)readSystemColorID:(int)arg1 ;
+(EshColor)propertyColor:(int)arg1 colorPropertiesManager:(id)arg2 ;
+(id)readColor:(const EshColor*)arg1 colorPropertiesManager:(id)arg2 colorPalette:(id)arg3 ;
+(int)readColorAdjustmentType:(int)arg1 ;
+(int)writeSystemColorID:(int)arg1 ;
+(unsigned short)eshSchemeColorIndexWithOADMapColorIndex:(int)arg1 ;
@end


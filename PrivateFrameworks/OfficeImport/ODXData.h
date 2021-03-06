/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:38 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface ODXData : NSObject
+(id)readPointListFromNode:(xmlNode*)arg1 pointIdMap:(id)arg2 state:(id)arg3 ;
+(void)readConnectionListFromNode:(xmlNode*)arg1 pointIdMap:(id)arg2 state:(id)arg3 ;
+(void)associatePresentationsInIdMap:(id)arg1 ;
+(id)readPointFromNode:(xmlNode*)arg1 pointIdMap:(id)arg2 state:(id)arg3 ;
+(int)readPointTypeFromNode:(xmlNode*)arg1 ;
+(void)readConnectionFromNode:(xmlNode*)arg1 pointIdMap:(id)arg2 state:(id)arg3 ;
+(int)readConnectionTypeFromNode:(xmlNode*)arg1 ;
+(void)readNode:(xmlNode*)arg1 toDiagram:(id)arg2 state:(id)arg3 ;
+(id)readModelIdentifierFromNode:(xmlNode*)arg1 attributeName:(const char*)arg2 ;
@end


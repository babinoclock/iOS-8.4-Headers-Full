/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:59 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HDSampleEntity.h>

@interface HDCorrelationSampleEntity : HDSampleEntity
+(id)createTableSQL;
+(id)codableObjectsFromObjectCollection:(id)arg1 ;
+(Class)_associatedDataObjectClass;
+(id)_tableValuesFromDataObject:(id)arg1 ;
+(char)isBackedByTable;
+(char)acceptsObject:(id)arg1 ;
+(Class)propertyApplierClass;
+(id)deleteStatementsForRelatedEntitiesInDatabase:(id)arg1 ;
+(id)_objectsWithIDs:(id)arg1 healthDaemon:(id)arg2 ;
-(char)deleteFromDatabase:(id)arg1 error:(id*)arg2 ;
@end


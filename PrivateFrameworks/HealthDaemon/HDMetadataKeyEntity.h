/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:59 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HDHealthEntity.h>

@interface HDMetadataKeyEntity : HDHealthEntity
+(id)createTableSQL;
+(int)protectionClass;
+(id)_propertySettersForResult;
+(id)_entityForKey:(id)arg1 database:(id)arg2 ;
+(id)_insertEntityWithKey:(id)arg1 database:(id)arg2 ;
+(id)entityForKey:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 ;
+(id)insertEntityWithKey:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 ;
+(id)resultForKeyID:(id)arg1 healthDatabase:(id)arg2 ;
+(id)_keyForPersistentID:(id)arg1 database:(id)arg2 ;
+(id)databaseTable;
-(id)resultWithDatabase:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:58 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDSyncEntity.h>

@class NSString;

@interface HDAssociationSyncEntity : NSObject <HDSyncEntity>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)syncEntityType;
+(id)syncObjectsWithStore:(id)arg1 syncAnchorRange:(HDSyncAnchorRange)arg2 lastSyncAnchor:(long long*)arg3 healthDaemon:(id)arg4 error:(id*)arg5 ;
+(long long)nextSyncAnchorWithStore:(id)arg1 startSyncAnchor:(long long)arg2 healthDaemon:(id)arg3 error:(id*)arg4 ;
+(id)decodeSyncObjectWithData:(id)arg1 ;
+(char)receiveSyncObjects:(id)arg1 syncStore:(id)arg2 healthDaemon:(id)arg3 error:(id*)arg4 ;
+(long long)finalAnchorForNanoSyncRestoreWithStore:(id)arg1 deviceSourceIdentifier:(id)arg2 nowDate:(id)arg3 healthDaemon:(id)arg4 error:(id*)arg5 ;
+(id)objectsForNanoSyncRestoreWithStore:(id)arg1 deviceSourceIdentifier:(id)arg2 nowDate:(id)arg3 syncAnchorRange:(HDSyncAnchorRange)arg4 lastSyncAnchor:(long long*)arg5 healthDaemon:(id)arg6 error:(id*)arg7 ;
+(unsigned)syncObjectLimitForNanoSyncMessage;
+(int)nanoSyncObjectType;
@end


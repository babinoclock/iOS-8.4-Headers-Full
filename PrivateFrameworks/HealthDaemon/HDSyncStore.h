/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:57 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString;


@protocol HDSyncStore <NSObject>
@property (nonatomic,readonly) int provenance; 
@property (nonatomic,readonly) NSString * syncStoreIdentifier; 
@optional
-(void)syncWillBeginWithContext:(id)arg1;
-(void)syncDidFinishWithContext:(id)arg1 success:(char)arg2 error:(id)arg3;

@required
-(unsigned)syncObjectLimitForEntityClass:(Class)arg1;
-(int)provenance;
-(id)newChangeWithSyncEntityClass:(Class)arg1;
-(void)sendChange:(id)arg1 withContext:(id)arg2 completion:(/*^block*/id)arg3;
-(id)syncEntities;
-(NSString *)syncStoreIdentifier;

@end


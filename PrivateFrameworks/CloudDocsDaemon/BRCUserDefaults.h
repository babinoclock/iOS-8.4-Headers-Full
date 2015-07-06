/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:55 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSMutableDictionary, NSString, NSArray, BRCSyncOperationThrottleParams;

@interface BRCUserDefaults : NSObject {

	BRCUserDefaults* _globalContainerUserDefault;
	NSDictionary* _serverContainerConfigurationDict;
	NSMutableDictionary* _cache;
	NSString* _containerIdentifer;

}

@property (nonatomic,readonly) unsigned maxXattrBlobSize; 
@property (nonatomic,readonly) unsigned maxRecordCountInFetchRecordsOperation; 
@property (nonatomic,readonly) unsigned maxRecordCountInModifyRecordsOperation; 
@property (nonatomic,readonly) unsigned maxRecordCountInAppContainerModifyRecordsOperation; 
@property (nonatomic,readonly) unsigned maxRecordCountInQuerySharedRecordsOperation; 
@property (nonatomic,readonly) unsigned maxRelativePathDepth; 
@property (nonatomic,readonly) unsigned maxSyncPathDepth; 
@property (nonatomic,readonly) unsigned treeEnumeratorBatchSize; 
@property (nonatomic,readonly) NSArray * packageExtensions; 
@property (nonatomic,readonly) NSArray * shareableExtensions; 
@property (nonatomic,readonly) double lockedFileScanInterval; 
@property (nonatomic,readonly) unsigned short stageFileUmask; 
@property (nonatomic,readonly) unsigned short stageDirectoryUmask; 
@property (nonatomic,readonly) unsigned short stageInPackageDirectoryUmask; 
@property (nonatomic,readonly) unsigned short stageInPackageFileUmask; 
@property (nonatomic,readonly) NSObject*<OS_xpc_object> configurationUpdateXPCActivity; 
@property (nonatomic,readonly) NSObject*<OS_xpc_object> forcedSyncXPCActivity; 
@property (nonatomic,readonly) NSArray * syncThrottles; 
@property (nonatomic,readonly) NSDictionary * containerScanThrottleParams; 
@property (nonatomic,readonly) NSDictionary * lostItemThrottleParams; 
@property (nonatomic,readonly) NSDictionary * applyThrottleParams; 
@property (nonatomic,readonly) NSDictionary * downloadThrottleParams; 
@property (nonatomic,readonly) NSDictionary * uploadThrottleParams; 
@property (nonatomic,readonly) double quotaFetchPacerDelay; 
@property (nonatomic,readonly) double appsFetchPacerDelay; 
@property (nonatomic,readonly) BRCSyncOperationThrottleParams * syncDownThrottle; 
@property (nonatomic,readonly) BRCSyncOperationThrottleParams * syncUpThrottle; 
@property (nonatomic,readonly) NSDictionary * syncAppContainerThrottleParams; 
@property (nonatomic,readonly) float syncUpMinimalBudget; 
@property (nonatomic,readonly) float syncUpDailyBudget; 
@property (nonatomic,readonly) float syncUpHourlyBudget; 
@property (nonatomic,readonly) float syncUpMinutelyBudget; 
@property (nonatomic,readonly) float syncUpInitialItemCost; 
@property (nonatomic,readonly) float syncUpStructureCreateCost; 
@property (nonatomic,readonly) float syncUpStructureEditCost; 
@property (nonatomic,readonly) float syncUpStructureDeleteCost; 
@property (nonatomic,readonly) float syncUpDataCreateCost; 
@property (nonatomic,readonly) float syncUpDataEditCost; 
@property (nonatomic,readonly) float syncUpDataDeleteCost; 
@property (nonatomic,readonly) float syncUpDocumentCreateCost; 
@property (nonatomic,readonly) float syncUpDocumentEditCost; 
@property (nonatomic,readonly) float syncUpDocumentDeleteCost; 
@property (nonatomic,readonly) unsigned long long sharedDbSyncDownCoalesceNanoseconds; 
@property (nonatomic,readonly) NSDictionary * operationFailureThrottleParams; 
@property (nonatomic,readonly) NSDictionary * containerResetThrottleParams; 
@property (nonatomic,readonly) NSDictionary * containerAliasRemovalThrottleParams; 
@property (nonatomic,readonly) char dbTraced; 
@property (nonatomic,readonly) char dbProfiled; 
@property (nonatomic,readonly) int dbBatchSize; 
@property (nonatomic,readonly) double dbBatchDelay; 
@property (nonatomic,readonly) char shouldContainerBeGreedy; 
@property (nonatomic,readonly) unsigned long long uploadMaxFileSize; 
@property (nonatomic,readonly) unsigned long long uploadMaxInPkgFileSize; 
@property (nonatomic,readonly) unsigned uploadBatchRecordsCount; 
@property (nonatomic,readonly) unsigned uploadBatchCount; 
@property (nonatomic,readonly) unsigned downloadBatchRecordsCount; 
@property (nonatomic,readonly) unsigned downloadBatchCount; 
@property (nonatomic,readonly) int logLevel; 
@property (nonatomic,readonly) double systemReachabilityLatency; 
@property (nonatomic,readonly) double systemPowerLatency; 
@property (nonatomic,readonly) double systemLowDiskLatency; 
@property (nonatomic,readonly) double writerIOsCancelDelay; 
@property (nonatomic,readonly) double readerIOsCancelDelay; 
@property (nonatomic,readonly) int readerMaxConcurrentIOs; 
@property (nonatomic,readonly) int writerMaxConcurrentIOs; 
@property (nonatomic,readonly) NSDictionary * readerThrottleParams; 
@property (nonatomic,readonly) int writerApplyBatchSize; 
@property (nonatomic,readonly) int readerScanBatchSize; 
@property (nonatomic,readonly) double readerLostItemBackoff; 
@property (nonatomic,readonly) double fseventsLatency; 
@property (nonatomic,readonly) double fseventsResetBackoff; 
@property (nonatomic,readonly) int transferQueueMinConcurrentOperations; 
@property (nonatomic,readonly) int transferQueueMaxConcurrentOperations; 
@property (nonatomic,readonly) double transferQueueTransferBudget; 
@property (nonatomic,readonly) char sessionZombiesEnabled; 
@property (nonatomic,readonly) NSObject*<OS_xpc_object> stageGCXPCActivity; 
@property (nonatomic,readonly) NSString * serverConfigurationURL; 
@property (nonatomic,readonly) unsigned publishURLTimeout; 
@property (nonatomic,readonly) unsigned minEvictableFilesize; 
@property (nonatomic,readonly) unsigned logoutTimeout; 
@property (nonatomic,readonly) double foregroundGracePeriod; 
@property (nonatomic,readonly) char forceBatchFailureWhenReceivingAssetTokenExpiration; 
@property (nonatomic,readonly) unsigned long long accessTimeDeltaInLowUrgency; 
@property (nonatomic,readonly) unsigned long long accessTimeDeltaInMedUrgency; 
@property (nonatomic,readonly) unsigned long long accessTimeDeltaInHighUrgency; 
@property (nonatomic,readonly) unsigned statementCacheMaxCountForServerTruth; 
@property (nonatomic,readonly) unsigned statementCacheMaxCountForClientTruth; 
@property (nonatomic,readonly) unsigned copyShareIDsBatchSize; 
@property (nonatomic,readonly) unsigned aliasDeletionBatchSize; 
+(void)reset;
+(id)defaultsForContainerIdentifier:(id)arg1 ;
+(void)loadCachedServerConfigFromDB:(id)arg1 ;
+(void)saveServerConfigToDB:(id)arg1 ;
+(void)setServerConfigurationURL:(id)arg1 whenLoaded:(/*^block*/id)arg2 ;
+(id)_userDefaultsManager;
+(id)defaultsForMetadataContainer;
-(char)dbTraced;
-(unsigned)statementCacheMaxCountForServerTruth;
-(unsigned)statementCacheMaxCountForClientTruth;
-(char)dbProfiled;
-(double)dbBatchDelay;
-(int)dbBatchSize;
-(unsigned)logoutTimeout;
-(NSArray *)shareableExtensions;
-(unsigned)maxRelativePathDepth;
-(int)writerApplyBatchSize;
-(int)writerMaxConcurrentIOs;
-(int)logLevel;
-(unsigned)aliasDeletionBatchSize;
-(unsigned)maxSyncPathDepth;
-(unsigned)maxXattrBlobSize;
-(BRCSyncOperationThrottleParams *)syncUpThrottle;
-(float)syncUpMinimalBudget;
-(NSString *)serverConfigurationURL;
-(NSObject*<OS_xpc_object>)forcedSyncXPCActivity;
-(unsigned long long)sharedDbSyncDownCoalesceNanoseconds;
-(unsigned)minEvictableFilesize;
-(float)syncUpStructureDeleteCost;
-(float)syncUpInitialItemCost;
-(float)syncUpStructureEditCost;
-(float)syncUpStructureCreateCost;
-(float)syncUpDocumentDeleteCost;
-(float)syncUpDataDeleteCost;
-(float)syncUpDocumentEditCost;
-(float)syncUpDataEditCost;
-(float)syncUpDocumentCreateCost;
-(float)syncUpDataCreateCost;
-(float)syncUpDailyBudget;
-(float)syncUpHourlyBudget;
-(float)syncUpMinutelyBudget;
-(double)foregroundGracePeriod;
-(char)shouldContainerBeGreedy;
-(double)readerIOsCancelDelay;
-(double)writerIOsCancelDelay;
-(NSArray *)syncThrottles;
-(unsigned long long)accessTimeDeltaInHighUrgency;
-(unsigned long long)accessTimeDeltaInLowUrgency;
-(unsigned long long)accessTimeDeltaInMedUrgency;
-(double)readerLostItemBackoff;
-(unsigned short)stageInPackageFileUmask;
-(unsigned short)stageInPackageDirectoryUmask;
-(unsigned)maxRecordCountInQuerySharedRecordsOperation;
-(NSObject*<OS_xpc_object>)stageGCXPCActivity;
-(double)lockedFileScanInterval;
-(unsigned short)stageDirectoryUmask;
-(unsigned short)stageFileUmask;
-(int)readerMaxConcurrentIOs;
-(double)quotaFetchPacerDelay;
-(unsigned long long)uploadMaxInPkgFileSize;
-(unsigned long long)uploadMaxFileSize;
-(int)readerScanBatchSize;
-(NSArray *)packageExtensions;
-(NSDictionary *)containerScanThrottleParams;
-(NSDictionary *)containerResetThrottleParams;
-(NSDictionary *)containerAliasRemovalThrottleParams;
-(NSDictionary *)lostItemThrottleParams;
-(NSDictionary *)operationFailureThrottleParams;
-(NSDictionary *)syncAppContainerThrottleParams;
-(char)sessionZombiesEnabled;
-(unsigned)uploadBatchCount;
-(unsigned)uploadBatchRecordsCount;
-(double)transferQueueTransferBudget;
-(unsigned)treeEnumeratorBatchSize;
-(unsigned)publishURLTimeout;
-(unsigned)copyShareIDsBatchSize;
-(NSDictionary *)readerThrottleParams;
-(NSDictionary *)applyThrottleParams;
-(NSDictionary *)downloadThrottleParams;
-(NSDictionary *)uploadThrottleParams;
-(id)initAsGlobalContainerWithServerConfiguration:(id)arg1 ;
-(id)initWithServerConfiguration:(id)arg1 globalContainerUserDefault:(id)arg2 containerIdentfier:(id)arg3 ;
-(NSObject*<OS_xpc_object>)configurationUpdateXPCActivity;
-(id)objectForKey:(id)arg1 inheritFromGlobal:(char)arg2 validateWithBlock:(/*^block*/id)arg3 ;
-(float)floatForKey:(id)arg1 inheritFromGlobal:(char)arg2 min:(float)arg3 max:(float)arg4 byDefault:(float)arg5 ;
-(char)boolForKey:(id)arg1 inheritFromGlobal:(char)arg2 byDefault:(char)arg3 ;
-(unsigned long long)unsignedLongLongForKey:(id)arg1 min:(unsigned long long)arg2 max:(unsigned long long)arg3 byDefault:(unsigned long long)arg4 ;
-(unsigned)unsignedIntForKey:(id)arg1 min:(unsigned)arg2 max:(unsigned)arg3 byDefault:(unsigned)arg4 ;
-(id)_defaultShareableExtensions;
-(int)intForKey:(id)arg1 min:(int)arg2 max:(int)arg3 byDefault:(int)arg4 ;
-(double)doubleForKey:(id)arg1 min:(double)arg2 max:(double)arg3 byDefault:(double)arg4 ;
-(unsigned short)_umaskForKey:(id)arg1 ;
-(id)xpcActivityDictionaryForKey:(id)arg1 byDefault:(id)arg2 ;
-(float)floatForKey:(id)arg1 min:(float)arg2 max:(float)arg3 byDefault:(float)arg4 ;
-(float)_defaultSyncUpDailyBudget;
-(float)_defaultSyncUpHourlyBudget;
-(float)_defaultSyncUpMinutelyBudget;
-(char)boolForKey:(id)arg1 byDefault:(char)arg2 ;
-(unsigned)maxRecordCountInFetchRecordsOperation;
-(unsigned)maxRecordCountInModifyRecordsOperation;
-(unsigned)maxRecordCountInAppContainerModifyRecordsOperation;
-(double)appsFetchPacerDelay;
-(BRCSyncOperationThrottleParams *)syncDownThrottle;
-(unsigned)downloadBatchRecordsCount;
-(unsigned)downloadBatchCount;
-(double)systemReachabilityLatency;
-(double)systemPowerLatency;
-(double)systemLowDiskLatency;
-(double)fseventsLatency;
-(double)fseventsResetBackoff;
-(int)transferQueueMinConcurrentOperations;
-(int)transferQueueMaxConcurrentOperations;
-(char)forceBatchFailureWhenReceivingAssetTokenExpiration;
@end


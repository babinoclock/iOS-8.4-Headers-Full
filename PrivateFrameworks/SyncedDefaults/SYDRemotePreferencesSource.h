/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:00 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/SyncedDefaults
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <SyncedDefaults/SyncedDefaults-Structs.h>
@class NSMutableDictionary, SYDClient, NSObject;

@interface SYDRemotePreferencesSource : NSObject {

	long _generationCount;
	long _lastGenerationFromDisk;
	CFStringRef preferenceID;
	CFURLRef urlOnDisk;
	CFDictionaryRef cache;
	long long storageChangeCount;
	long long initialSyncChangeCount;
	unsigned char isInitialSync;
	CFSetRef dirtyKeys;
	CFDictionaryRef configurationDictionary;
	NSMutableDictionary* externalChanges;
	SYDClient* client;
	/*^block*/id registrationBlock;
	NSObject*<OS_dispatch_queue> registrationQueue;
	NSObject*<OS_dispatch_queue> _protectionQueue;
	NSObject*<OS_dispatch_source> _memoryWarningSource;
	double _lastAccess;
	char _forceNextSynchronization;

}
+(id)SYDRemotePreferencesSourceDidChangeNotification;
+(id)SYDRemotePreferencesSourceConfigurationDidChangeNotification;
+(void)initialize;
+(void)noteAccountChanges:(id)arg1 ;
+(void)resetAllApplicationsWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)migrateSyncedDefaultsForBundleIdentifier:(id)arg1 ;
-(CFDictionaryRef)copyDictionary;
-(CFArrayRef)copyKeyList;
-(id)initWithApplicationID:(CFStringRef)arg1 storeID:(CFStringRef)arg2 shared:(char)arg3 ;
-(id)initWithApplicationID:(CFStringRef)arg1 storeID:(CFStringRef)arg2 shared:(char)arg3 additionalSource:(char)arg4 ;
-(id)initWithApplicationID:(CFStringRef)arg1 shared:(char)arg2 ;
-(void)discardExternalChangesForChangeCount:(long long)arg1 ;
-(void*)getValueForKey:(CFStringRef)arg1 ;
-(unsigned char)synchronizeForced:(unsigned char)arg1 ;
-(unsigned char)hasExternalChanges;
-(id)copyExternalChangesWithChangeCount:(long long*)arg1 ;
-(void)scheduleRemoteSynchronization;
-(void)synchronizationWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned char)_synchronizeForced:(unsigned char)arg1 ;
-(void)updateConfiguration;
-(void)registerForSynchronizedDefaults;
-(void)unregisterForSynchronizedDefaults;
-(long)maximumKeyCount;
-(long)maximumKeyLength;
-(long)maximumDataLengthPerKey;
-(long)maximumTotalDataLength;
-(void)setValue:(void*)arg1 forKey:(CFStringRef)arg2 ;
-(void)dealloc;
-(unsigned char)synchronize;
-(long)generationCount;
-(unsigned char)isInitialSync;
-(long)configurationValueForKey:(CFStringRef)arg1 ;
-(void)_createMemoryWarningSource;
-(void)_forceRegistrationNow;
-(void)_cachePlistFromDisk;
-(void)_storeConfiguration:(CFDictionaryRef)arg1 ;
-(id)_warningSource;
-(CFDictionaryRef)copyConfigurationDictionary;
-(id)serverSideDebugDescription;
-(void)_didReceiveMemoryWarning;
-(void)finalize;
@end

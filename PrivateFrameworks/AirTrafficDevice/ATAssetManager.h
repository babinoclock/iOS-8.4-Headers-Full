/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:24 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirTrafficDevice/ATAssetLinkControllerObserver.h>
#import <AirTrafficDevice/ATMessageLinkRequestHandler.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSDictionary, NSMutableSet, NSMutableDictionary, NSHashTable, NSMutableArray, NSString;

@interface ATAssetManager : NSObject <ATAssetLinkControllerObserver, ATMessageLinkRequestHandler> {

	NSObject*<OS_dispatch_queue> _queue;
	NSDictionary* _assetClients;
	NSDictionary* _legacyAssetClients;
	NSMutableSet* _allAssets;
	NSMutableDictionary* _remainingAssetsByDataClass;
	NSMutableDictionary* _totalAssetCountByDataClass;
	NSHashTable* _observers;
	NSMutableArray* _assets;
	NSMutableDictionary* _assetsByDataclass;
	NSMutableDictionary* _assetsByStoreID;
	NSMutableArray* _completedStoreAssets;
	unsigned _completedAssets;
	unsigned _totalAssetCount;
	NSObject*<OS_dispatch_source> _signalSource;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(unsigned)currentAsset;
-(void)dealloc;
-(id)init;
-(void)reset;
-(char)isEmpty;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)messageLink:(id)arg1 didReceiveRequest:(id)arg2 ;
-(void)_loadAssetClients;
-(void)_dumpStatusInformation;
-(id)legacyAssetsForDataClass:(id)arg1 ;
-(void)_finishDataClassIfDone:(id)arg1 ;
-(void)_addAssets:(id)arg1 forDataClass:(id)arg2 ;
-(void)_finishAsset:(id)arg1 forDataClass:(id)arg2 ;
-(id)_assetForDataclass:(id)arg1 withIdentifier:(id)arg2 ;
-(unsigned)currentAssetForDataclass:(id)arg1 ;
-(unsigned)totalAssetCountForDataclass:(id)arg1 ;
-(id)restoreAssetsForDataclass:(id)arg1 ;
-(unsigned)totalAssetCountForDataClasses:(id)arg1 ;
-(void)assetLinkController:(id)arg1 didFinishAsset:(id)arg2 ;
-(void)assetLinkController:(id)arg1 didUpdateAsset:(id)arg2 ;
-(void)enqueueLegacyAssetsForDataClass:(id)arg1 ;
-(void)prioritizeAssetForDataClass:(id)arg1 withIdentifier:(id)arg2 ;
-(void)cancelAssetForDataClass:(id)arg1 withIdentifier:(id)arg2 ;
-(unsigned)totalAssetCount;
-(id)assetProgressForAllDataclasses;
-(void)_updateAsset:(id)arg1 withProgress:(float)arg2 ;
-(unsigned)awaitingStoreCompletion;
-(void)mapStoreIDToAsset:(id)arg1 ;
-(id)assetForStoreID:(long long)arg1 ;
-(id)assetForDataclass:(id)arg1 identifier:(id)arg2 ;
-(id)allDataclasses;
-(id)completedStoreAssets;
-(id)storeAssetsForDataclass:(id)arg1 ;
-(id)bypassedRestoresForDataclass:(id)arg1 ;
-(id)assetsForDataclasses:(id)arg1 ;
-(id)restoreAssetsForDataclasses:(id)arg1 ;
-(unsigned)remainingSyncAssetCountForDataClasses:(id)arg1 ;
-(unsigned)remainingRestoreAssetCountForDataClasses:(id)arg1 ;
-(unsigned)completedAssetCountForDataClasses:(id)arg1 ;
-(char)dataclassIsEmpty:(id)arg1 ;
-(id)assets;
@end


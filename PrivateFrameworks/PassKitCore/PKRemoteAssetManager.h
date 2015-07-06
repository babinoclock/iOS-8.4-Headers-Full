/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:49 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSURL, NSURLSession, NSObject, NSMutableDictionary;

@interface PKRemoteAssetManager : NSObject {

	NSURL* _directoryURL;
	NSURLSession* _urlSession;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _manifestItemsByRelativeURL;

}
-(void)dealloc;
-(id)initWithFileURL:(id)arg1 queue:(id)arg2 ;
-(id)remoteAssetManifests;
-(char)assetExistsLocally:(id)arg1 ;
-(void)downloadRemoteAssetsWithScreenScale:(float)arg1 suffix:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)deviceSpecificItemsForScreenScale:(float)arg1 suffix:(id)arg2 ;
-(id)itemWithRelativePath:(id)arg1 ;
-(void)_flushBundleCaches;
-(char)addRemoteAssetData:(id)arg1 forManifestItem:(id)arg2 error:(id*)arg3 ;
-(id)deviceSpecificItems;
-(void)downloadRemoteAssetsWithCompletion:(/*^block*/id)arg1 ;
-(void)cancelDownloads;
@end


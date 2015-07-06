/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:25 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirTrafficDevice/ATMessageLinkObserver.h>
#import <AirTrafficDevice/ATAssetLink.h>

@protocol ATAssetLinkDelegate, OS_dispatch_queue, ATLegacyAssetLinkProgressDelegate;
@class NSMutableSet, NSMutableDictionary, ATLegacyMessageLink, NSMutableArray, NSObject, NSArray, NSString;

@interface ATLegacyAssetLink : NSObject <ATMessageLinkObserver, ATAssetLink> {

	NSMutableSet* _unqueuedAssets;
	NSMutableDictionary* _enqueuedAssetsByDataClass;
	ATLegacyMessageLink* _messageLink;
	char _open;
	id<ATAssetLinkDelegate> _delegate;
	NSMutableArray* _readyDataClasses;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _supportedDataClasses;
	id<ATLegacyAssetLinkProgressDelegate> _progressDelegate;

}

@property (nonatomic,copy) NSArray * supportedDataClasses;                                               //@synthesize supportedDataClasses=_supportedDataClasses - In the implementation block
@property (nonatomic,copy) NSArray * readyDataClasses; 
@property (assign,nonatomic,__weak) id<ATLegacyAssetLinkProgressDelegate> progressDelegate;              //@synthesize progressDelegate=_progressDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isOpen,nonatomic,readonly) char open;                                                  //@synthesize open=_open - In the implementation block
@property (assign,nonatomic,__weak) id<ATAssetLinkDelegate> delegate;                                    //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<ATAssetLinkDelegate>)arg1 ;
-(id<ATAssetLinkDelegate>)delegate;
-(void)close;
-(unsigned)priority;
-(void)messageLinkWasClosed:(id)arg1 ;
-(id)enqueueAssets:(id)arg1 force:(char)arg2 ;
-(char)canEnqueueAsset:(id)arg1 ;
-(void)cancelAssets:(id)arg1 ;
-(void)prioritizeAsset:(id)arg1 ;
-(unsigned)maximumBatchSize;
-(char)linkIsReady;
-(id)initWithMessageLink:(id)arg1 ;
-(void)_handleFileCompleteMessage:(id)arg1 ;
-(void)_handleFileErrorMessage:(id)arg1 ;
-(void)_handleFileProgressMessage:(id)arg1 ;
-(void)_enqueueAndRequestAssets;
-(NSArray *)supportedDataClasses;
-(void)_finishAsset:(id)arg1 withError:(id)arg2 ;
-(id)_assetsForDataClass:(id)arg1 identifier:(id)arg2 ;
-(id)_assetManifestForDataclasses:(id)arg1 ;
-(void)setReadyDataClasses:(NSArray *)arg1 ;
-(NSArray *)readyDataClasses;
-(void)setSupportedDataClasses:(NSArray *)arg1 ;
-(char)open;
-(char)isOpen;
-(id<ATLegacyAssetLinkProgressDelegate>)progressDelegate;
-(void)setProgressDelegate:(id<ATLegacyAssetLinkProgressDelegate>)arg1 ;
@end


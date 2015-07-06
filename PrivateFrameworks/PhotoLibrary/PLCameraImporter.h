/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:55 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <PhotoLibrary/ICDeviceDelegate.h>
#import <PhotoLibrary/ICCameraDeviceDelegate.h>

@class NSMutableDictionary, NSMutableArray, PLMutableCameraImportQueue, PLCameraImportQueue, ICCameraDevice, PLImportFileManager, NSString;

@interface PLCameraImporter : NSObject <ICDeviceDelegate, ICCameraDeviceDelegate> {

	id _delegate;
	NSMutableDictionary* _itemsMapping;
	NSMutableArray* _items;
	PLMutableCameraImportQueue* _thumbnailQueue;
	PLCameraImportQueue* _downloadQueue;
	PLCameraImportQueue* _importQueue;
	PLCameraImportQueue* _deleteQueue;
	NSMutableArray* _orphanItems;
	NSMutableArray* _coalescedDeletedItems;
	char _importInProgress;
	NSMutableDictionary* _parentFolderMapping;
	char _autosplitEvents;
	int _eventSplitGranularity;
	ICCameraDevice* _camera;
	PLImportFileManager* _importFileManager;
	char _stopAfterNextItemImport;
	char _importItemInProgress;
	char _isAppleDevice;
	NSString* importSessionIdentifier;

}

@property (assign,nonatomic) id<PLCameraImporterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * itemsMapping;                 //@synthesize itemsMapping=_itemsMapping - In the implementation block
@property (nonatomic,retain) NSMutableArray * items;                             //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) ICCameraDevice * camera;                            //@synthesize camera=_camera - In the implementation block
@property (nonatomic,copy) NSString * importSessionIdentifier; 
@property (assign,nonatomic) char isAppleDevice;                                 //@synthesize isAppleDevice=_isAppleDevice - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isImporting;
-(void)removeItems:(id)arg1 ;
-(char)deviceIsLocked;
-(void)dealloc;
-(void)setDelegate:(id<PLCameraImporterDelegate>)arg1 ;
-(id<PLCameraImporterDelegate>)delegate;
-(NSMutableArray *)items;
-(void)setItems:(NSMutableArray *)arg1 ;
-(void)didReceiveImportNotification:(id)arg1 ;
-(void)setImportSessionIdentifier:(NSString *)arg1 ;
-(char)isAppleDevice;
-(id)importItemForCameraFile:(id)arg1 ;
-(NSMutableDictionary *)itemsMapping;
-(void)_addImportItemFromCameraFile:(id)arg1 ;
-(void)_deleteImportItemFromDisk:(id)arg1 ;
-(void)_didFinishDeletingItems:(id)arg1 ;
-(void)didReceiveThumbnail:(CGImageRef)arg1 forImportItem:(id)arg2 error:(id)arg3 ;
-(void)importImportItem:(id)arg1 ;
-(void)_clearImportItemsForDownload:(id)arg1 ;
-(void)_separateItems:(id)arg1 intoEventsWithGranularity:(int)arg2 ;
-(void)didDownloadFile:(id)arg1 error:(id)arg2 options:(id)arg3 contextInfo:(void*)arg4 ;
-(void)didImportImportItem:(id)arg1 error:(id)arg2 ;
-(NSString *)importSessionIdentifier;
-(void)_didFinishImportingItems:(id)arg1 ;
-(void)_photoLibraryFinishedImportForPhoto:(id)arg1 atPath:(id)arg2 error:(id)arg3 ;
-(void)_downloadImportItems:(id)arg1 ;
-(void)_deleteImportItemsFromDiskInBackground:(id)arg1 ;
-(void)_stopImport;
-(void)_deleteImportItems:(id)arg1 ;
-(void)_removeImportItemsAtPathsInBackground:(id)arg1 ;
-(void)didDisconnectFromCamera:(id)arg1 error:(id)arg2 ;
-(void)didConnectToCamera:(id)arg1 error:(id)arg2 ;
-(void)addImportItemsFromCameraFiles:(id)arg1 ;
-(void)camaraDidEnumerateContents;
-(void)cameraDidError:(id)arg1 ;
-(void)removeImportItemsForCameraFiles:(id)arg1 ;
-(void)_coalescedRemoveImportItems;
-(void)didReceiveThumbnail:(CGImageRef)arg1 forCameraFile:(id)arg2 error:(id)arg3 ;
-(void)didReceiveMetadata:(id)arg1 forCameraFile:(id)arg2 error:(id)arg3 ;
-(void)didRemoveDevice:(id)arg1 ;
-(void)device:(id)arg1 didOpenSessionWithError:(id)arg2 ;
-(void)deviceDidBecomeReady:(id)arg1 ;
-(void)device:(id)arg1 didCloseSessionWithError:(id)arg2 ;
-(void)device:(id)arg1 didEncounterError:(id)arg2 ;
-(void)cameraDevice:(id)arg1 didAddItems:(id)arg2 ;
-(void)cameraDevice:(id)arg1 didRemoveItems:(id)arg2 ;
-(void)cameraDevice:(id)arg1 didReceiveThumbnail:(CGImageRef)arg2 forItem:(id)arg3 error:(id)arg4 ;
-(void)cameraDevice:(id)arg1 didReceiveMetadata:(id)arg2 forItem:(id)arg3 error:(id)arg4 ;
-(id)initWithDevice:(id)arg1 delegate:(id)arg2 ;
-(id)cameraName;
-(id)cameraKind;
-(void)ejectCamera;
-(unsigned)estimatedNumberOfItems;
-(unsigned)contentPercentCompleted;
-(id)allImportItems;
-(void)readImportItems;
-(void)readMetadataForImportItems:(id)arg1 ;
-(void)readThumbnailsForImportItems:(id)arg1 ;
-(unsigned long long)approximateBytesRequiredToImportItem:(id)arg1 ;
-(void)importItems:(id)arg1 ;
-(void)stopImport;
-(void)setItemsMapping:(NSMutableDictionary *)arg1 ;
-(void)setIsAppleDevice:(char)arg1 ;
-(ICCameraDevice *)camera;
-(void)setCamera:(ICCameraDevice *)arg1 ;
@end

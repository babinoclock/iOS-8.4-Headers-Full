/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:51 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewController.h>
#import <StoreKitUI/SSDownloadManagerObserver.h>
#import <StoreKitUI/SKUIDownloadsChildViewControllerDelegate.h>

@class SKUIImageDataConsumer, SSDownloadManager, NSArray, NSMutableDictionary, NSCache, SKUIIPhoneDownloadsViewController, SKUIIPadDownloadsViewController, UIImage, NSString;

@interface SKUIDownloadsViewController : SKUIViewController <SSDownloadManagerObserver, SKUIDownloadsChildViewControllerDelegate> {

	SKUIImageDataConsumer* _consumer;
	SSDownloadManager* _downloadManager;
	NSArray* _downloads;
	NSMutableDictionary* _imageOperations;
	NSCache* _images;
	SKUIIPhoneDownloadsViewController* _iphoneViewController;
	SKUIIPadDownloadsViewController* _ipadViewController;
	UIImage* _nullImage;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)_sizeClassForSize:(CGSize)arg1 ;
-(void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2 ;
-(void)downloadManagerDownloadsDidChange:(id)arg1 ;
-(void)dealloc;
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(id)childViewController:(id)arg1 artworkForDownload:(id)arg2 ;
-(void)childViewController:(id)arg1 performActionForDownload:(id)arg2 ;
-(void)childViewController:(id)arg1 removeDownloads:(id)arg2 ;
-(void)_reloadView;
-(void)_reloadManagerFromServer;
-(void)_reloadBadge;
-(void)_reloadViewControllerWithSize:(CGSize)arg1 ;
-(void)_setArtwork:(id)arg1 forURLString:(id)arg2 ;
@end

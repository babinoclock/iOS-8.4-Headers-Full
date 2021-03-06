/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:20 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MPUMediaDownloadObserver.h>
#import <MediaPlayerUI/MPStoreDownloadManagerObserver.h>

@class MPStoreDownload, NSString;

@interface MPUMatchMediaDownloadObserver : MPUMediaDownloadObserver <MPStoreDownloadManagerObserver> {

	MPStoreDownload* _storeDownload;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)downloadManager:(id)arg1 downloadDidProgress:(id)arg2 ;
-(char)isPurchasing;
-(void)dealloc;
-(void)cancelDownload;
-(id)initWithStoreDownload:(id)arg1 ;
-(void)_onQueue_invalidate;
-(char)isCurrentlyPlayable;
-(char)canCancel;
-(void)pauseDownload;
-(void)resumeDownload;
-(double)rawDownloadProgress;
-(double)rawDownloadTotal;
-(double)downloadProgress;
-(char)isRestoreDownload;
-(char)isPaused;
@end


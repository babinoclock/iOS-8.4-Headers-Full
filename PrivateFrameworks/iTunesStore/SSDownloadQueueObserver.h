/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:26 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SSDownloadQueueObserver <NSObject>
@optional
-(void)downloadQueueNetworkUsageChanged:(id)arg1;
-(void)downloadQueue:(id)arg1 downloadStatusChangedAtIndex:(int)arg2;

@required
-(void)downloadQueue:(id)arg1 changedWithRemovals:(id)arg2;

@end


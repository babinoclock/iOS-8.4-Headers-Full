/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:04 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PLPreheatItemSource <NSObject>
@optional
-(void)preheatImageDataAtIndexes:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)imageDataAtIndex:(unsigned)arg1 width:(int*)arg2 height:(int*)arg3 bytesPerRow:(int*)arg4 dataWidth:(int*)arg5 dataHeight:(int*)arg6 dataOffset:(int*)arg7;

@required
-(id)preheatItemForAsset:(id)arg1 format:(int)arg2 optimalSourcePixelSize:(CGSize)arg3 options:(unsigned)arg4;
-(id)originalPreheatItemForAsset:(id)arg1 optimalSourcePixelSize:(CGSize)arg2 options:(unsigned)arg3;

@end


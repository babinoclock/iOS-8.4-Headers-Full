/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:16 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Radio/Radio-Structs.h>
@class NSOperationQueue;

@interface RadioImageCache : NSObject {

	NSOperationQueue* _imageRequestQueue;

}
+(id)sharedCache;
+(CFURLCacheRef)_sharedCFURLCache;
+(CFURLStorageSessionRef)_newSharedCacheStorageSession;
-(void)dealloc;
-(id)init;
-(id)_init;
-(id)_requestForRadioArtwork:(id)arg1 ;
-(id)_cachedResponseForRequest:(id)arg1 ;
-(id)cachedImageDataForStation:(id)arg1 withExactSize:(CGSize)arg2 MIMEType:(id*)arg3 ;
-(void)loadImageForStation:(id)arg1 withSize:(CGSize)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_removeAllCachedImages;
-(id)cachedImageDataForRadioArtwork:(id)arg1 MIMEType:(id*)arg2 ;
-(void)loadImageForRadioArtwork:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:55 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <QuartzCore/CALayer.h>

@protocol OS_dispatch_queue, PLTileProcessor;
@class NSData, PLCache, NSMutableSet, NSMutableDictionary, NSObject, CALayer;

@interface PLTiledLayer : CALayer {

	NSData* _jpegData;
	jpegDecoder* _decoders;
	int _decoderCount;
	int _tilePixelSize;
	CGSize _fullSize;
	long _err;
	PLCache* _tileCache;
	iosPoolOpaqueRef _surfacePool;
	NSMutableSet* _visibleTileIds;
	NSMutableDictionary* _subLayers;
	NSObject*<OS_dispatch_queue> _decodeQueue;
	NSObject*<OS_dispatch_queue> _filterQueue;
	unsigned _requestId;
	int _zoomLevel;
	CALayer* _placeholderLayer;
	CGImageRef _placeholderImage;
	float _zoomStartScale;
	int _lock;
	id<PLTileProcessor> _tileProcessor;
	unsigned long _currentProcessingID;
	unsigned long _nextProcessingID;
	CGRect _lastVisibleRect;
	float _lastZoomScale;
	char _showTileBorders;

}

@property (assign,nonatomic,__weak) id<PLTileProcessor> tileProcessor; 
@property (nonatomic,readonly) CGSize jpegImageSize; 
-(void)dealloc;
-(void)removeAllTiles;
-(void)flushCache;
-(float)zoomStartScaleForImage:(CGSize)arg1 placeholderImageSize:(CGSize)arg2 ;
-(void)prepareForDecoding;
-(id<PLTileProcessor>)tileProcessor;
-(void)setVisibleRectangle:(CGRect)arg1 zoomScale:(float)arg2 ;
-(void)updateSubLayers:(id)arg1 ;
-(char)visibleTileRegionHasChanged:(CGRect)arg1 level:(int)arg2 ;
-(void)decodeImageRectangle:(CGRect)arg1 forLevel:(int)arg2 requestId:(unsigned)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setVisibleRectangle:(CGRect)arg1 zoomScale:(float)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setTileProcessor:(id<PLTileProcessor>)arg1 ;
-(id)initWithJPEGData:(id)arg1 placeholderImage:(CGImageRef)arg2 ;
-(void)setTileProcessingEnabled:(char)arg1 withProcessingID:(unsigned long)arg2 placeholderImage:(CGImageRef)arg3 ;
-(CGSize)jpegImageSize;
@end


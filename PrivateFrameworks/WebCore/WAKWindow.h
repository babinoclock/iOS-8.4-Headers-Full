/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:21 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <WebCore/WAKResponder.h>

@class CALayer, WAKView;

@interface WAKWindow : WAKResponder {

	CALayer* _hostLayer;
	LegacyTileCache* _tileCache;
	CGRect _frozenVisibleRect;
	CALayer* _rootLayer;
	CGSize _screenSize;
	CGSize _availableScreenSize;
	float _screenScale;
	CGRect _frame;
	WAKView* _contentView;
	WAKView* _responderView;
	WAKView* _nextResponder;
	char _visible;
	char _useOrientationDependentFontAntialiasing;
	char _entireWindowVisibleForTesting;
	TCMalloc_SpinLock _exposedScrollViewRectLock;
	CGRect _exposedScrollViewRect;

}

@property (assign,nonatomic) char useOrientationDependentFontAntialiasing;              //@synthesize useOrientationDependentFontAntialiasing=_useOrientationDependentFontAntialiasing - In the implementation block
@property (assign,nonatomic) CGImageRef contentReplacementImage; 
+(void)setOrientationProvider:(id)arg1 ;
+(char)hasLandscapeOrientation;
+(id)currentEvent;
-(oneway void)release;
-(oneway void)_webcore_releaseOnWebThread;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setNeedsDisplay;
-(CGRect)frame;
-(id)description;
-(id)firstResponder;
-(void)sendEvent:(id)arg1 ;
-(char)isKeyWindow;
-(void)makeKeyWindow;
-(id)contentView;
-(void)setContentView:(id)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(id)recursiveDescription;
-(void)setVisible:(char)arg1 ;
-(CGRect)visibleRect;
-(void)layoutTilesNow;
-(void)willRotate;
-(void)didRotate;
-(char)isVisible;
-(void)close;
-(void)setContentRect:(CGRect)arg1 ;
-(void)setCurrentTileScale:(float)arg1 ;
-(void)setZoomedOutTileScale:(float)arg1 ;
-(void)removeAllNonVisibleTiles;
-(void)setTilesOpaque:(char)arg1 ;
-(void)removeAllTiles;
-(void)setUseOrientationDependentFontAntialiasing:(char)arg1 ;
-(void)setTilingDirection:(int)arg1 ;
-(void)setExposedScrollViewRect:(CGRect)arg1 ;
-(void)displayRect:(CGRect)arg1 ;
-(void)removeForegroundTiles;
-(char)makeFirstResponder:(id)arg1 ;
-(void)setAcceleratedDrawingEnabled:(char)arg1 ;
-(CGRect)exposedScrollViewRect;
-(void)sendEventSynchronously:(id)arg1 ;
-(void)sendMouseMoveEvent:(id)arg1 contentChange:(int*)arg2 ;
-(void)setRootLayer:(id)arg1 ;
-(void)setScreenSize:(CGSize)arg1 ;
-(void)setAvailableScreenSize:(CGSize)arg1 ;
-(float)screenScale;
-(void)setScreenScale:(float)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(void)layoutTilesNowForRect:(CGRect)arg1 ;
-(void)setContentReplacementImage:(CGImageRef)arg1 ;
-(void)layoutTiles;
-(id)rootLayer;
-(void)setTilingMode:(int)arg1 ;
-(char)tilesOpaque;
-(void)setKeepsZoomedOutTiles:(char)arg1 ;
-(char)keepsZoomedOutTiles;
-(void)dumpTiles;
-(CGSize)screenSize;
-(CGSize)availableScreenSize;
-(LegacyTileCache*)tileCache;
-(CGPoint)convertBaseToScreen:(CGPoint)arg1 ;
-(CGPoint)convertScreenToBase:(CGPoint)arg1 ;
-(id)hostLayer;
-(CGRect)extendedVisibleRect;
-(char)useOrientationDependentFontAntialiasing;
-(CGRect)_visibleRectRespectingMasksToBounds:(char)arg1 ;
-(void)freezeVisibleRect;
-(void)unfreezeVisibleRect;
-(id)_newFirstResponderAfterResigning;
-(int)keyViewSelectionDirection;
-(void)setFrame:(CGRect)arg1 display:(char)arg2 ;
-(void)setEntireWindowVisibleForTesting:(char)arg1 ;
-(int)tilingMode;
-(int)tilingDirection;
-(float)zoomedOutTileScale;
-(float)currentTileScale;
-(char)hasPendingDraw;
-(CGImageRef)contentReplacementImage;
-(void)setTileBordersVisible:(char)arg1 ;
-(void)setTilePaintCountsVisible:(char)arg1 ;
-(void)setTileControllerShouldUseLowScaleTiles:(char)arg1 ;
@end


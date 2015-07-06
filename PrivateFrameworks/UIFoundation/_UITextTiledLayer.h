/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:07 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSMutableArray;

@interface _UITextTiledLayer : CALayer {

	NSMutableArray* _reusableTiles;
	CGRect _gridBounds;
	struct {
		unsigned disableTiling : 1;
		unsigned ditchAllTiles : 1;
		unsigned suspendLayout : 4;
	}  _tcTiledLayerFlags;
	CGSize _tileSize;

}

@property (assign,nonatomic) char usesTiledLayers; 
@property (assign,nonatomic) CGSize tileSize;                   //@synthesize tileSize=_tileSize - In the implementation block
-(void)dealloc;
-(id)init;
-(void)setBounds:(CGRect)arg1 ;
-(void)renderInContext:(CGContextRef)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(void)setTileSize:(CGSize)arg1 ;
-(CGSize)tileSize;
-(void)layoutSublayers;
-(void)setUsesTiledLayers:(char)arg1 ;
-(char)usesTiledLayers;
-(void)drawDirtyLayer:(id)arg1 intoContext:(CGContextRef)arg2 ;
-(void)_buildTilesForRect:(CGRect)arg1 ;
-(void)_cullAndAddLayers:(CGRect)arg1 ;
-(void)_hideAndShowTiles:(CGRect)arg1 visibleBounds:(CGRect)arg2 ;
-(void)_validateTiles;
-(void)suspendTiling;
-(void)resumeTiling;
@end


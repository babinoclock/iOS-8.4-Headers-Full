/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:51 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ChatKit/ChatKit-Structs.h>
@class CKTiledLayoutGeneratorScanState;

@interface CKTiledLayoutGenerator : NSObject {

	int _cacheTailLocation;
	int _cacheHeadLocation;
	SCD_Struct_CK8 _cachedTileInfo[20];
	id _cachedBatchID[20];
	char _scannedBatchHasCaption;
	char _shouldStop;
	int _tileCount;
	/*^block*/id _tileImageSizeBlock;
	/*^block*/id _tileMinimumSizeBlock;
	/*^block*/id _tileHasCaptionBlock;
	/*^block*/id _tileCaptionSizeBlock;
	/*^block*/id _tileBatchIDBlock;
	int _numberOfMagneticGuidelines;
	float _roundingScale;
	/*^block*/id _parsedFrameBlock;
	int _scanLocation;
	id _scannedBatchID;
	int _scanSpecialSequenceCount;
	CGSize _interTileSpacing;
	CGSize _noCaptionSpacing;
	UIEdgeInsets _captionPadding;

}

@property (assign,nonatomic) int tileCount;                                            //@synthesize tileCount=_tileCount - In the implementation block
@property (assign,nonatomic) CGSize interTileSpacing;                                  //@synthesize interTileSpacing=_interTileSpacing - In the implementation block
@property (nonatomic,copy) id tileImageSizeBlock;                                      //@synthesize tileImageSizeBlock=_tileImageSizeBlock - In the implementation block
@property (nonatomic,copy) id tileMinimumSizeBlock;                                    //@synthesize tileMinimumSizeBlock=_tileMinimumSizeBlock - In the implementation block
@property (assign,nonatomic) UIEdgeInsets captionPadding;                              //@synthesize captionPadding=_captionPadding - In the implementation block
@property (assign,nonatomic) CGSize noCaptionSpacing;                                  //@synthesize noCaptionSpacing=_noCaptionSpacing - In the implementation block
@property (nonatomic,copy) id tileHasCaptionBlock;                                     //@synthesize tileHasCaptionBlock=_tileHasCaptionBlock - In the implementation block
@property (nonatomic,copy) id tileCaptionSizeBlock;                                    //@synthesize tileCaptionSizeBlock=_tileCaptionSizeBlock - In the implementation block
@property (nonatomic,copy) id tileBatchIDBlock;                                        //@synthesize tileBatchIDBlock=_tileBatchIDBlock - In the implementation block
@property (assign,nonatomic) int numberOfMagneticGuidelines;                           //@synthesize numberOfMagneticGuidelines=_numberOfMagneticGuidelines - In the implementation block
@property (assign,nonatomic) float roundingScale;                                      //@synthesize roundingScale=_roundingScale - In the implementation block
@property (assign,nonatomic) id parsedFrameBlock;                                      //@synthesize parsedFrameBlock=_parsedFrameBlock - In the implementation block
@property (assign,nonatomic) CKTiledLayoutGeneratorScanState * scanState; 
@property (assign,nonatomic) int scanLocation;                                         //@synthesize scanLocation=_scanLocation - In the implementation block
@property (nonatomic,retain) id scannedBatchID;                                        //@synthesize scannedBatchID=_scannedBatchID - In the implementation block
@property (assign,nonatomic) char scannedBatchHasCaption;                              //@synthesize scannedBatchHasCaption=_scannedBatchHasCaption - In the implementation block
@property (assign,nonatomic) int scanSpecialSequenceCount;                             //@synthesize scanSpecialSequenceCount=_scanSpecialSequenceCount - In the implementation block
@property (nonatomic,readonly) char isAtEnd; 
@property (assign,nonatomic) char shouldStop;                                          //@synthesize shouldStop=_shouldStop - In the implementation block
-(void)setInterTileSpacing:(CGSize)arg1 ;
-(void)setCaptionPadding:(UIEdgeInsets)arg1 ;
-(void)setNoCaptionSpacing:(CGSize)arg1 ;
-(void)setTileCount:(int)arg1 ;
-(void)setTileImageSizeBlock:(id)arg1 ;
-(void)setTileMinimumSizeBlock:(id)arg1 ;
-(void)setTileHasCaptionBlock:(id)arg1 ;
-(void)setTileCaptionSizeBlock:(id)arg1 ;
-(void)setTileBatchIDBlock:(id)arg1 ;
-(CGSize)interTileSpacing;
-(UIEdgeInsets)captionPadding;
-(CGSize)noCaptionSpacing;
-(void)setNumberOfMagneticGuidelines:(int)arg1 ;
-(void)setRoundingScale:(float)arg1 ;
-(void)enumerateFramesWithBlock:(/*^block*/id)arg1 ;
-(void)setParsedFrameBlock:(id)arg1 ;
-(void)willParseTiles;
-(void)parseTiles;
-(void)didParseTiles;
-(char)parseNextTiles;
-(char)shouldStop;
-(void)setScannedBatchID:(id)arg1 ;
-(void)setScannedBatchHasCaption:(char)arg1 ;
-(id)scannedBatchID;
-(char)scannedBatchHasCaption;
-(int)scanSpecialSequenceCount;
-(void)setScanSpecialSequenceCount:(int)arg1 ;
-(int)tileCount;
-(id)tileImageSizeBlock;
-(id)tileMinimumSizeBlock;
-(id)tileHasCaptionBlock;
-(id)tileBatchIDBlock;
-(char)scanTile:(SCD_Struct_CK9*)arg1 passingTest:(/*^block*/id)arg2 ;
-(char)scanTile:(SCD_Struct_CK9*)arg1 ofType:(int)arg2 ;
-(id)tileCaptionSizeBlock;
-(id)parsedFrameBlock;
-(void)setShouldStop:(char)arg1 ;
-(int)numberOfMagneticGuidelines;
-(float)roundingScale;
-(CKTiledLayoutGeneratorScanState *)scanState;
-(void)setScanState:(CKTiledLayoutGeneratorScanState *)arg1 ;
-(char)scanAnyTile:(SCD_Struct_CK9*)arg1 ;
-(char)scanTileWithPortraitImage:(SCD_Struct_CK9*)arg1 ;
-(char)scanTileWithLandscapeImage:(SCD_Struct_CK9*)arg1 ;
-(char)scanTileWithHorizontalPanorama:(SCD_Struct_CK9*)arg1 ;
-(char)scanTileWithSquareImage:(SCD_Struct_CK9*)arg1 ;
-(char)scanTile:(SCD_Struct_CK9*)arg1 type:(int*)arg2 ;
-(CGSize)captionSizeForTileAtIndex:(int)arg1 proposedSize:(CGSize)arg2 ;
-(void)parsedFrame:(CGRect)arg1 type:(int)arg2 forTileAtIndex:(int)arg3 ;
-(float)valueByRounding:(float)arg1 usingMagneticGuidelines:(char)arg2 ;
-(id)init;
-(char)isAtEnd;
-(void)setScanLocation:(int)arg1 ;
-(int)scanLocation;
@end


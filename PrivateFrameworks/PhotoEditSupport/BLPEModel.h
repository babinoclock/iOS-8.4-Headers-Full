/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:53 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PhotoEditSupport/PhotoEditSupport-Structs.h>
@class BLPixelImageBuffer, NSMutableDictionary, CIFilter;

@interface BLPEModel : NSObject {

	BLPixelImageBuffer* _sourceImageBuffer;
	char _sourceImageDidChange;
	char _processingFX;
	NSMutableDictionary* _TiltShiftProcessingCache;
	NSMutableDictionary* _AdaptiveGradientProcessingCache;
	NSMutableDictionary* _InkProcessingCache;
	char _liveInteraction;
	CIFilter* _vintageFilter;
	CIFilter* _photoFiltersFilter;
	CIFilter* _duotoneFilter;
	CIFilter* _auraFilter;
	CIFilter* _blackAndWhiteFilter;
	CIFilter* _dramaFilter;
	CIFilter* _warmAndCoolFilter;

}

@property (assign,nonatomic) char liveInteraction;                        //@synthesize liveInteraction=_liveInteraction - In the implementation block
@property (nonatomic,retain) CIFilter * vintageFilter;                    //@synthesize vintageFilter=_vintageFilter - In the implementation block
@property (nonatomic,retain) CIFilter * photoFiltersFilter;               //@synthesize photoFiltersFilter=_photoFiltersFilter - In the implementation block
@property (nonatomic,retain) CIFilter * duotoneFilter;                    //@synthesize duotoneFilter=_duotoneFilter - In the implementation block
@property (nonatomic,retain) CIFilter * auraFilter;                       //@synthesize auraFilter=_auraFilter - In the implementation block
@property (nonatomic,retain) CIFilter * blackAndWhiteFilter;              //@synthesize blackAndWhiteFilter=_blackAndWhiteFilter - In the implementation block
@property (nonatomic,retain) CIFilter * dramaFilter;                      //@synthesize dramaFilter=_dramaFilter - In the implementation block
@property (nonatomic,retain) CIFilter * warmAndCoolFilter;                //@synthesize warmAndCoolFilter=_warmAndCoolFilter - In the implementation block
-(void)dealloc;
-(id)initWithSourceImage:(id)arg1 ;
-(char)canRenderCIImageWithGroupIndex:(int)arg1 amount:(float)arg2 withOptionsObject:(id)arg3 ;
-(void)updateSourceImage:(id)arg1 ;
-(id)imageWithGroupIndex:(int)arg1 amount:(float)arg2 withOptionsObject:(id)arg3 analysisDictionary:(id)arg4 destRect:(CGRect)arg5 padding:(float)arg6 ;
-(void)updateSourceImageBuffer:(id)arg1 ;
-(id)ciImageWithGroupIndex:(int)arg1 amount:(float)arg2 withOptionsObject:(id)arg3 analysisDictionary:(id)arg4 destRect:(CGRect)arg5 padding:(float)arg6 ;
-(id)ciImageProcessFX_CI:(id)arg1 groupIndex:(int)arg2 amount:(float)arg3 withOptionsObject:(id)arg4 analysisDictionary:(id)arg5 destRect:(CGRect)arg6 padding:(float)arg7 ;
-(void)setWarmAndCoolFilter:(CIFilter *)arg1 ;
-(void)setBlackAndWhiteFilter:(CIFilter *)arg1 ;
-(void)setDramaFilter:(CIFilter *)arg1 ;
-(void)setDuotoneFilter:(CIFilter *)arg1 ;
-(void)setVintageFilter:(CIFilter *)arg1 ;
-(void)setPhotoFiltersFilter:(CIFilter *)arg1 ;
-(void)setAuraFilter:(CIFilter *)arg1 ;
-(void)releaseCachedFilters;
-(char)needTiltShiftProcessingCacheForGroupIndex:(int)arg1 andAmount:(float)arg2 ;
-(char)needAdaptiveGradientProcessingCacheForGroupIndex:(int)arg1 andAmount:(float)arg2 ;
-(char)needInkProcessingCacheForGroupIndex:(int)arg1 andAmount:(float)arg2 ;
-(id)processFX_CI:(id)arg1 groupIndex:(int)arg2 amount:(float)arg3 withOptionsObject:(id)arg4 analysisDictionary:(id)arg5 destRect:(CGRect)arg6 padding:(float)arg7 ;
-(id)imageWithAdaptiveGradientV1:(id)arg1 cache:(id)arg2 groupIndex:(int)arg3 withCenter:(CGPoint)arg4 withSize:(float)arg5 withAngle:(float)arg6 gradientRect:(CGRect)arg7 liveInteraction:(char)arg8 ;
-(id)imageWithAdaptiveGradientV2:(id)arg1 cache:(id)arg2 groupIndex:(int)arg3 withCenter:(CGPoint)arg4 withSize:(float)arg5 withAngle:(float)arg6 gradientRect:(CGRect)arg7 liveInteraction:(char)arg8 ;
-(id)processFX_NonCI:(id)arg1 tiltShiftCache:(id)arg2 groupIndex:(int)arg3 amount:(float)arg4 withOptionsObject:(id)arg5 analysisDictionary:(id)arg6 destRect:(CGRect)arg7 padding:(float)arg8 ;
-(id)imageWithInk:(id)arg1 cache:(id)arg2 groupIndex:(int)arg3 withOptionsObject:(id)arg4 gradientRect:(CGRect)arg5 padding:(float)arg6 liveInteraction:(char)arg7 ;
-(id)ciImageWithInk:(id)arg1 cache:(id)arg2 groupIndex:(int)arg3 withOptionsObject:(id)arg4 gradientRect:(CGRect)arg5 padding:(float)arg6 liveInteraction:(char)arg7 ;
-(CIFilter *)vintageFilter;
-(CIFilter *)photoFiltersFilter;
-(CIFilter *)duotoneFilter;
-(CIFilter *)auraFilter;
-(CIFilter *)blackAndWhiteFilter;
-(CIFilter *)dramaFilter;
-(CIFilter *)warmAndCoolFilter;
-(id)initWithSourceImageBuffer:(id)arg1 ;
-(id)thumbImageWithGroupIndex:(int)arg1 amount:(float)arg2 version:(int)arg3 ;
-(char)liveInteraction;
-(void)setLiveInteraction:(char)arg1 ;
@end


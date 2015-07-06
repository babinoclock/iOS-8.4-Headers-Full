/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:32 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MKOverlay;
#import <MapKit/MapKit-Structs.h>
@interface MKOverlayRenderer : NSObject {

	id<MKOverlay> _overlay;
	SCD_Struct_MK2 _boundingMapRect;
	id _renderer;
	float _contentScaleFactor;
	float _alpha;

}

@property (nonatomic,readonly) id<MKOverlay> overlay;              //@synthesize overlay=_overlay - In the implementation block
@property (assign) float alpha;                                    //@synthesize alpha=_alpha - In the implementation block
@property (readonly) float contentScaleFactor; 
-(CGPoint)pointForMapPoint:(SCD_Struct_MK1)arg1 ;
-(void)set_boundingMapRect:(SCD_Struct_MK2)arg1 ;
-(id)_mk_overlayLayer;
-(id)_mk_overlayView;
-(void)set_renderer:(id)arg1 ;
-(void)drawMapRect:(SCD_Struct_MK2)arg1 zoomScale:(float)arg2 inContext:(CGContextRef)arg3 ;
-(SCD_Struct_MK2)mapRectForRect:(CGRect)arg1 ;
-(void)setNeedsDisplayInMapRect:(SCD_Struct_MK2)arg1 ;
-(SCD_Struct_MK1)_originMapPoint;
-(SCD_Struct_MK2)_boundingMapRect;
-(char)canDrawMapRect:(SCD_Struct_MK2)arg1 zoomScale:(float)arg2 ;
-(CGRect)rectForMapRect:(SCD_Struct_MK2)arg1 ;
-(SCD_Struct_MK1)mapPointForPoint:(CGPoint)arg1 ;
-(void)setNeedsDisplayInMapRect:(SCD_Struct_MK2)arg1 zoomScale:(float)arg2 ;
-(id)_renderer;
-(void)dealloc;
-(void)setNeedsDisplay;
-(float)alpha;
-(void)setAlpha:(float)arg1 ;
-(id)init;
-(void)setContentScaleFactor:(float)arg1 ;
-(float)contentScaleFactor;
-(id<MKOverlay>)overlay;
-(id)initWithOverlay:(id)arg1 ;
-(char)overlay:(id)arg1 canDrawKey:(const SCD_Struct_MK13*)arg2 ;
-(void)overlay:(id)arg1 drawKey:(const SCD_Struct_MK13*)arg2 inContext:(CGContextRef)arg3 ;
@end


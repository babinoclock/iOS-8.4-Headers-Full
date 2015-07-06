/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:40 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/MFDeviceDriver.h>

@interface MFPhoneDeviceDriver : NSObject <MFDeviceDriver> {

	CGRect m_canvas;
	CGRect m_viewBox;
	CGAffineTransform m_viewBoxTransform;
	CGAffineTransform m_worldToDeviceTransform;
	CGAffineTransform m_combinedTransform;

}
+(int)getROP:(id)arg1 ;
-(void)dealloc;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(id)initWithCanvas:(CGRect)arg1 ;
-(id)createPath;
-(CGRect)getCanvas;
-(int)textOut:(id)arg1 :(int*)arg2 :(int*)arg3 :(id)arg4 ;
-(int)extTextOut:(id)arg1 :(int*)arg2 :(int*)arg3 :(id)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9 :(int*)arg10 :(int)arg11 ;
-(int)rectangle:(id)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 ;
-(int)ellipse:(id)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 ;
-(int)setViewBox:(double)arg1 :(double)arg2 :(double)arg3 :(double)arg4 ;
-(int)lineTo:(id)arg1 :(double)arg2 :(double)arg3 ;
-(int)polygon:(id)arg1 :(CGPoint*)arg2 :(int)arg3 ;
-(int)polyPolygon:(id)arg1 :(CGPoint*)arg2 :(int*)arg3 :(int)arg4 ;
-(int)polyline:(id)arg1 :(CGPoint*)arg2 :(int)arg3 ;
-(int)polyPolyline:(id)arg1 :(CGPoint*)arg2 :(int*)arg3 :(int)arg4 ;
-(int)arc:(id)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9 ;
-(int)pie:(id)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9 ;
-(int)angleArc:(id)arg1 :(int)arg2 :(int)arg3 :(unsigned)arg4 :(double)arg5 :(double)arg6 ;
-(int)arcTo:(id)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9 ;
-(int)chord:(id)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9 ;
-(int)bezierTo:(id)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 ;
-(int)bezier:(id)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9 ;
-(int)roundRect:(id)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(double)arg6 :(double)arg7 ;
-(id)createRegionWithRects:(id)arg1 :(id)arg2 ;
-(id)createSolidBrush:(id)arg1 ;
-(id)createHatchBrush:(id)arg1 :(int)arg2 ;
-(id)createNullBrush;
-(id)createFont:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(BOOL)arg6 :(BOOL)arg7 :(BOOL)arg8 :(int)arg9 :(int)arg10 :(unsigned char)arg11 :(int)arg12 :(int)arg13 :(int)arg14 :(id)arg15 ;
-(id)createFontIndirectW:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(BOOL)arg6 :(BOOL)arg7 :(BOOL)arg8 :(int)arg9 :(int)arg10 :(unsigned char)arg11 :(int)arg12 :(int)arg13 :(int)arg14 :(id)arg15 :(id)arg16 :(id)arg17 :(unsigned)arg18 :(unsigned)arg19 :(unsigned)arg20 :(unsigned)arg21 :(unsigned)arg22 ;
-(id)createPen:(int)arg1 :(int)arg2 :(id)arg3 :(double*)arg4 ;
-(id)createPatternBrush:(id)arg1 usePaletteForBilevel:(char)arg2 ;
-(id)createPen;
-(id)createFont:(int)arg1 ;
-(id)createRegionWithPath:(id)arg1 ;
-(int)removeClip;
-(int)excludeClipRect:(CGRect)arg1 ;
-(int)intersectClipRect:(CGRect)arg1 ;
-(int)setMetaRgn;
-(id)createDIBitmap:(id)arg1 :(const char*)arg2 :(unsigned)arg3 :(int)arg4 ;
-(id)createDIBitmap:(id)arg1 :(const char*)arg2 :(unsigned)arg3 :(const char*)arg4 :(unsigned)arg5 :(int)arg6 ;
-(id)createBitmap:(id)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(const char*)arg6 :(unsigned)arg7 ;
-(int)patBlt:(id)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(unsigned)arg6 ;
-(int)bitBlt:(id)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(id)arg6 :(int)arg7 :(int)arg8 :(unsigned)arg9 :(CGAffineTransform*)arg10 :(unsigned)arg11 ;
-(int)stretchBlt:(id)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(id)arg6 :(int)arg7 :(int)arg8 :(int)arg9 :(int)arg10 :(unsigned)arg11 :(CGAffineTransform*)arg12 :(unsigned)arg13 ;
-(int)maskBlt:(id)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(id)arg6 :(int)arg7 :(int)arg8 :(id)arg9 :(int)arg10 :(int)arg11 :(unsigned)arg12 :(CGAffineTransform*)arg13 :(unsigned)arg14 ;
-(int)plgBlt:(id)arg1 :(CGPoint*)arg2 :(id)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(id)arg8 :(int)arg9 :(int)arg10 :(CGAffineTransform*)arg11 :(unsigned)arg12 ;
-(void)drawBezierPath:(id)arg1 dc:(id)arg2 fill:(char)arg3 stroke:(char)arg4 ;
-(void)concatTransforms;
-(void)updateViewBoxTransform;
-(int)activateTransform:(CGAffineTransform)arg1 ;
@end


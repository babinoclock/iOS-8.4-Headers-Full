/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:34 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/NSCopying.h>
#import <OfficeImport/NSCoding.h>

@interface OITSDBezierPath : NSObject <NSCopying, NSCoding> {

	int sfr_elementCount;
	int sfr_elementMax;
	PATHSEGMENT* sfr_head;
	float* sfr_elementLength;
	float sfr_totalLength;
	int sfr_lastSubpathIndex;
	void* sfr_extraSegments;
	float sfr_lineWidth;
	CGRect sfr_controlPointBounds;
	float sfr_miterLimit;
	float sfr_flatness;
	float* sfr_dashedLinePattern;
	unsigned sfr_dashedLineCount;
	float sfr_dashedLinePhase;
	void* sfr_path;
	int sfr_extraSegmentCount;
	int sfr_extraSegmentMax;
	struct {
		unsigned sfr_flags : 8;
		unsigned sfr_pathState : 2;
		unsigned sfr_calculatedLengths : 1;
		unsigned sfr_unused : 21;
	}  sfr_bpFlags;

}
+(void)initialize;
+(id)bezierPath;
+(id)bezierPathWithRect:(CGRect)arg1 ;
+(id)bezierPathWithOvalInRect:(CGRect)arg1 ;
+(id)bezierPathWithRoundedRect:(CGRect)arg1 cornerRadius:(float)arg2 ;
+(id)bezierPathWithCGPath:(CGPathRef)arg1 ;
+(float)lineWidth;
+(void)setLineWidth:(float)arg1 ;
+(unsigned)lineCapStyle;
+(void)setLineCapStyle:(unsigned)arg1 ;
+(unsigned)lineJoinStyle;
+(void)setLineJoinStyle:(unsigned)arg1 ;
+(float)miterLimit;
+(void)setMiterLimit:(float)arg1 ;
+(float)flatness;
+(void)setFlatness:(float)arg1 ;
+(void)fillRect:(CGRect)arg1 ;
+(unsigned)windingRule;
+(void)setWindingRule:(unsigned)arg1 ;
+(id)bezierPathWithStart:(CGPoint)arg1 end:(CGPoint)arg2 ;
+(void)strokeRect:(CGRect)arg1 ;
+(void)clipRect:(CGRect)arg1 ;
+(void)strokeLineFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 ;
+(void)setDefaultMiterLimit:(float)arg1 ;
+(float)defaultMiterLimit;
+(void)setDefaultFlatness:(float)arg1 ;
+(float)defaultFlatness;
+(void)setDefaultWindingRule:(unsigned)arg1 ;
+(unsigned)defaultWindingRule;
+(void)setDefaultLineCapStyle:(unsigned)arg1 ;
+(unsigned)defaultLineCapStyle;
+(void)setDefaultLineJoinStyle:(unsigned)arg1 ;
+(unsigned)defaultLineJoinStyle;
+(void)setDefaultLineWidth:(float)arg1 ;
+(float)defaultLineWidth;
-(const char*)cString;
-(void)dealloc;
-(CGRect)bounds;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(float)length;
-(void)moveToPoint:(CGPoint)arg1 ;
-(void)closePath;
-(void)addClip;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)removeAllPoints;
-(id)bezierPathByReversingPath;
-(char)isEmpty;
-(CGPoint)currentPoint;
-(char)containsPoint:(CGPoint)arg1 ;
-(void)setLineDash:(const float*)arg1 count:(int)arg2 phase:(float)arg3 ;
-(void)getLineDash:(float*)arg1 count:(int*)arg2 phase:(float*)arg3 ;
-(void)fill;
-(void)stroke;
-(void)lineToPoint:(CGPoint)arg1 ;
-(void)appendBezierPath:(id)arg1 ;
-(void)appendBezierPathWithRect:(CGRect)arg1 ;
-(void)appendBezierPathWithOvalInRect:(CGRect)arg1 ;
-(void)appendBezierPathWithArcWithCenter:(CGPoint)arg1 radius:(float)arg2 startAngle:(float)arg3 endAngle:(float)arg4 clockwise:(char)arg5 ;
-(float)lineWidth;
-(void)setLineWidth:(float)arg1 ;
-(unsigned)lineCapStyle;
-(void)setLineCapStyle:(unsigned)arg1 ;
-(unsigned)lineJoinStyle;
-(void)setLineJoinStyle:(unsigned)arg1 ;
-(float)miterLimit;
-(void)setMiterLimit:(float)arg1 ;
-(float)flatness;
-(void)setFlatness:(float)arg1 ;
-(int)elementCount;
-(unsigned)elementAtIndex:(int)arg1 ;
-(unsigned)windingRule;
-(void)setWindingRule:(unsigned)arg1 ;
-(void)_deviceMoveToPoint:(CGPoint)arg1 ;
-(void)_deviceLineToPoint:(CGPoint)arg1 ;
-(void)_deviceCurveToPoint:(CGPoint)arg1 controlPoint1:(CGPoint)arg2 controlPoint2:(CGPoint)arg3 ;
-(void)_deviceClosePath;
-(void)subdivideBezierWithFlatness:(float)arg1 startPoint:(CGPoint)arg2 controlPoint1:(CGPoint)arg3 controlPoint2:(CGPoint)arg4 endPoint:(CGPoint)arg5 ;
-(void)flattenIntoPath:(id)arg1 ;
-(void)curveToPoint:(CGPoint)arg1 controlPoint1:(CGPoint)arg2 controlPoint2:(CGPoint)arg3 ;
-(void)_doPath;
-(char)isFlat;
-(unsigned)elementAtIndex:(int)arg1 associatedPoints:(CGPoint*)arg2 ;
-(CGRect)controlPointBounds;
-(unsigned)elementAtIndex:(int)arg1 allPoints:(CGPoint*)arg2 ;
-(float)calculateLengthOfElement:(int)arg1 ;
-(void)calculateLengths;
-(void)_appendToPath:(id)arg1 ;
-(void)appendBezierPathWithArcWithCenter:(CGPoint)arg1 radius:(float)arg2 startAngle:(float)arg3 endAngle:(float)arg4 ;
-(void)transformUsingAffineTransform:(CGAffineTransform)arg1 ;
-(void)_appendArcSegmentWithCenter:(CGPoint)arg1 radius:(double)arg2 angle1:(double)arg3 angle2:(double)arg4 ;
-(void)relativeMoveToPoint:(CGPoint)arg1 ;
-(void)relativeLineToPoint:(CGPoint)arg1 ;
-(void)relativeCurveToPoint:(CGPoint)arg1 controlPoint1:(CGPoint)arg2 controlPoint2:(CGPoint)arg3 ;
-(id)bezierPathByFlatteningPath;
-(id)_copyFlattenedPath;
-(CGPathRef)cgPath;
-(char)isRectangular;
-(char)isCircular;
-(char)isClockwise;
-(float)lengthOfElement:(int)arg1 ;
-(float)lengthToElement:(int)arg1 ;
-(void)setAssociatedPoints:(CGPoint*)arg1 atIndex:(int)arg2 ;
-(void)appendBezierPathWithPoints:(CGPoint*)arg1 count:(int)arg2 ;
-(void)appendBezierPathWithArcFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 radius:(float)arg3 ;
-(id)initWithCString:(const char*)arg1 ;
-(void)appendBezierPathWithArcWithEllipseBounds:(CGRect)arg1 startRadialVector:(CGPoint)arg2 endRadialVector:(CGPoint)arg3 angleSign:(int)arg4 startNewPath:(char)arg5 ;
-(void)appendBezierPathWithArcWithEllipseBounds:(CGRect)arg1 startAngle:(float)arg2 swingAngle:(float)arg3 angleType:(int)arg4 startNewPath:(char)arg5 ;
-(void)_addPathSegment:(int)arg1 point:(CGPoint)arg2 ;
-(void)attachBezierPath:(id)arg1 ;
-(void)finalize;
@end


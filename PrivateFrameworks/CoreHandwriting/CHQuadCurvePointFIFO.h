/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:11 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHPointFIFO.h>

@class NSMutableArray, UIView;

@interface CHQuadCurvePointFIFO : CHPointFIFO {

	NSMutableArray* _prevPoints;
	CGPathRef _path;
	float _lineWidth;
	UIView* _view;

}

@property (nonatomic,retain) NSMutableArray * prevPoints;              //@synthesize prevPoints=_prevPoints - In the implementation block
@property (assign,nonatomic) CGPathRef path;                           //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) float lineWidth;                          //@synthesize lineWidth=_lineWidth - In the implementation block
@property (nonatomic,retain) UIView * view;                            //@synthesize view=_view - In the implementation block
-(void)dealloc;
-(UIView *)view;
-(void)flush;
-(CGPathRef)path;
-(void)setView:(UIView *)arg1 ;
-(float)lineWidth;
-(void)setLineWidth:(float)arg1 ;
-(void)setPath:(CGPathRef)arg1 ;
-(void)addPoint:(CGPoint)arg1 ;
-(void)clear;
-(id)initWithFIFO:(id)arg1 strokeView:(id)arg2 ;
-(void)setPrevPoints:(NSMutableArray *)arg1 ;
-(NSMutableArray *)prevPoints;
@end


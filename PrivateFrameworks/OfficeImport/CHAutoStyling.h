/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:40 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CHAutoStyling <NSObject>
@optional
-(void)setAutoChartFillIsHollow:(char)arg1;
-(void)setAutoChartStrokeIsHollow:(char)arg1;

@required
-(id)autoStrokeForSeriesIndex:(unsigned)arg1;
-(void)resolveAxisGraphicProperties:(id)arg1;
-(void)resolveMinorGridLinesGraphicProperties:(id)arg1;
-(void)resolveMajorGridLinesGraphicProperties:(id)arg1;
-(void)resolveWallGraphicProperties:(id)arg1;
-(void)resolveFloorGraphicProperties:(id)arg1;
-(void)resolveGraphicPropertiesOfErrorBar:(id)arg1 forSeriesIndex:(unsigned)arg2;
-(void)resolveLegendGraphicProperties:(id)arg1;
-(void)resolvePlotAreaGraphicProperties:(id)arg1;
-(void)resolveGraphicPropertiesOfSeries:(id)arg1 forSeriesIndex:(unsigned)arg2;
-(void)resolveChartAreaGraphicProperties:(id)arg1;
-(id)autoTextFill;
-(void)resolveMarker:(id)arg1 withSeriesGraphicProperties:(id)arg2 forSeriesIndex:(unsigned)arg3;
-(void)resolveGraphicPropertiesOfSeries:(id)arg1 forSeriesIndex:(unsigned)arg2 isLine:(BOOL)arg3;
-(void)resolveGraphicPropertiesOfTrendline:(id)arg1 forSeriesIndex:(unsigned)arg2;

@end


/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:41 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/CHAutoStyling.h>
#import <OfficeImport/CHAutoStyling.h>

@class NSString;

@interface CHXAutoStyling : CHAutoStyling <CHAutoStyling> {

	char __autoChartFillIsHollow;
	char __autoChartStrokeIsHollow;

}

@property (assign) char _autoChartFillIsHollow;                     //@synthesize _autoChartFillIsHollow=__autoChartFillIsHollow - In the implementation block
@property (assign) char _autoChartStrokeIsHollow;                   //@synthesize _autoChartStrokeIsHollow=__autoChartStrokeIsHollow - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)colorWithSchemeColorId:(int)arg1 transformType:(int)arg2 transformValue:(float)arg3 ;
+(int)styleRowWithStyleId:(int)arg1 ;
+(int)styleColumnWithStyleId:(int)arg1 ;
+(id)colorWithSchemeColorId:(int)arg1 tint:(float)arg2 ;
+(id)colorWithSchemeColorId:(int)arg1 shade:(float)arg2 ;
+(int)styleIdWithStyleRow:(int)arg1 styleColumn:(int)arg2 ;
-(id)autoStrokeForSeriesIndex:(unsigned)arg1 ;
-(void)resolveAxisGraphicProperties:(id)arg1 ;
-(void)resolveMinorGridLinesGraphicProperties:(id)arg1 ;
-(void)resolveMajorGridLinesGraphicProperties:(id)arg1 ;
-(void)resolveWallGraphicProperties:(id)arg1 ;
-(void)resolveFloorGraphicProperties:(id)arg1 ;
-(void)resolveGraphicPropertiesOfErrorBar:(id)arg1 forSeriesIndex:(unsigned)arg2 ;
-(void)resolveLegendGraphicProperties:(id)arg1 ;
-(void)resolvePlotAreaGraphicProperties:(id)arg1 ;
-(void)resolveGraphicPropertiesOfSeries:(id)arg1 forSeriesIndex:(unsigned)arg2 ;
-(int)styleId;
-(int)styleColumn;
-(id)autoColorOfFirstColumnSeriesWithIndex:(unsigned)arg1 seriesCount:(unsigned)arg2 ;
-(char)_autoChartFillIsHollow;
-(id)autoChartAreaFillColor;
-(unsigned long)autoFloorAndChartAreaStrokeIndex;
-(id)autoChartAreaAndDataTableAndFloorStrokeColor;
-(unsigned long)autoFloorAndWallsFillIndex;
-(id)autoFloorAndWallsAndPlotArea2DFillColor;
-(id)autoAxisAndMajorGridColor;
-(id)autoMinorGridColor;
-(id)autoColorOfSeriesWithIndex:(unsigned)arg1 ;
-(int)styleRow;
-(void)setDefaultErrorBarPropertiesInGraphicProperties:(id)arg1 ;
-(void)set_autoChartFillIsHollow:(char)arg1 ;
-(void)set_autoChartStrokeIsHollow:(char)arg1 ;
-(id)autoOtherStrokeColor;
-(char)_autoChartStrokeIsHollow;
-(void)setAutoChartFillIsHollow:(char)arg1 ;
-(void)setAutoChartStrokeIsHollow:(char)arg1 ;
-(void)resolveChartAreaGraphicProperties:(id)arg1 ;
-(id)autoTextFill;
-(void)resolveMarker:(id)arg1 withSeriesGraphicProperties:(id)arg2 forSeriesIndex:(unsigned)arg3 ;
-(void)resolveGraphicPropertiesOfSeries:(id)arg1 forSeriesIndex:(unsigned)arg2 isLine:(BOOL)arg3 ;
-(void)resolveGraphicPropertiesOfTrendline:(id)arg1 forSeriesIndex:(unsigned)arg2 ;
@end

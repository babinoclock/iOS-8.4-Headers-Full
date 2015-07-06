/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:38 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Stocks/Stocks-Structs.h>
#import <UIKit/UIView.h>
#import <Stocks/StockGraphViewContainer.h>

@protocol SPChartViewDelegate;
@class StockGraphView, NSMutableArray, ChartLabelInfoManager, StockChartData, Stock, StockChartDisplayMode;

@interface SPChartView : UIView <StockGraphViewContainer> {

	int _selectedInterval;
	StockGraphView* _graph;
	NSMutableArray* _xAxisLabels;
	NSMutableArray* _yAxisLabels;
	ChartLabelInfoManager* _labelInfoManager;
	char _showsHorizontalLines;
	char _glanceGraph;
	char _compactGraph;
	StockChartData* _chartData;
	Stock* _stock;
	id<SPChartViewDelegate> _delegate;
	StockChartDisplayMode* _currentDisplayMode;

}

@property (assign,nonatomic) char showsHorizontalLines;                                 //@synthesize showsHorizontalLines=_showsHorizontalLines - In the implementation block
@property (assign,nonatomic) char glanceGraph;                                          //@synthesize glanceGraph=_glanceGraph - In the implementation block
@property (assign,nonatomic) char compactGraph;                                         //@synthesize compactGraph=_compactGraph - In the implementation block
@property (nonatomic,retain) StockChartData * chartData;                                //@synthesize chartData=_chartData - In the implementation block
@property (nonatomic,retain) Stock * stock;                                             //@synthesize stock=_stock - In the implementation block
@property (assign,nonatomic,__weak) id<SPChartViewDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) StockChartDisplayMode * currentDisplayMode;              //@synthesize currentDisplayMode=_currentDisplayMode - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id<SPChartViewDelegate>)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id<SPChartViewDelegate>)delegate;
-(StockChartData *)chartData;
-(void)setChartData:(StockChartData *)arg1 ;
-(void)clearData;
-(void)setYAxisLabelCount:(unsigned)arg1 ;
-(void)setShowsHorizontalLines:(char)arg1 ;
-(void)_prepareYAxisLabelsAndPositions;
-(void)_prepareXAxisLabelsAndPositions;
-(void)_setHourLabels;
-(void)_setDayLabelsWithInterval:(unsigned)arg1 realTimePositions:(char)arg2 ;
-(void)_setMonthAndYearLabels;
-(CGRect)lineGraphFrame;
-(StockChartDisplayMode *)currentDisplayMode;
-(void)_prepareXAxisLabelsForLabelInfoArray:(id)arg1 ;
-(char)showsHorizontalLines;
-(CGRect)graphViewFrameForMode:(id)arg1 ;
-(float)lineGraphBottomPadding;
-(float)widestYLabelWidthForMode:(id)arg1 ;
-(void)stockGraphViewReadyForDisplay:(id)arg1 ;
-(char)glanceGraph;
-(void)setGlanceGraph:(char)arg1 ;
-(char)compactGraph;
-(void)setCompactGraph:(char)arg1 ;
-(Stock *)stock;
-(void)setStock:(Stock *)arg1 ;
@end


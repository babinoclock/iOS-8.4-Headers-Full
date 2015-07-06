/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:40 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class CHDChart;

@interface CHBState : NSObject {

	CHDChart* mChart;
	CFArrayRef mXlChartDataSeriesCollection;
	int mXlSeriesCount;
	int mXlCurrentSeriesIndex;
	BOOL mHasPrimaryMixedArea;
	BOOL mHasPrimaryMixedColumn;
	BOOL mHasPrimaryMixedLine;
	BOOL mHasSecondaryMixedArea;
	BOOL mHasSecondaryMixedColumn;
	BOOL mHasSecondaryMixedLine;

}
-(void)dealloc;
-(id)init;
-(id)workbook;
-(void)setChart:(id)arg1 ;
-(id)chart;
-(int)xlSeriesCount;
-(XlChartDataSeries*)xlChartDataSeriesAtIndex:(int)arg1 ;
-(void)setXlCurrentSeriesIndex:(int)arg1 ;
-(void)deleteXlChartDataSeriesCollection;
-(void)readAndCacheXlChartDataSeries;
-(BOOL)hasPrimaryMixedArea;
-(BOOL)hasSecondaryMixedArea;
-(BOOL)hasPrimaryMixedColumn;
-(BOOL)hasSecondaryMixedColumn;
-(BOOL)hasPrimaryMixedLine;
-(XlChartDataSeries*)xlCurrentChartDataSeries;
-(int)xlCurrentChartDataSeriesIndex;
-(void)setHasPrimaryMixedArea:(BOOL)arg1 ;
-(void)setHasPrimaryMixedColumn:(BOOL)arg1 ;
-(void)setHasPrimaryMixedLine:(BOOL)arg1 ;
-(void)setHasSecondaryMixedArea:(BOOL)arg1 ;
-(void)setHasSecondaryMixedColumn:(BOOL)arg1 ;
-(BOOL)hasSecondaryMixedLine;
-(void)setHasSecondaryMixedLine:(BOOL)arg1 ;
-(unsigned)chartGroupIndexForType:(int)arg1 isForPrimary:(BOOL)arg2 ;
-(id)resources;
@end


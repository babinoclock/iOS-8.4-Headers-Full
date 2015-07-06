/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:41 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/CHDChartType.h>

@interface CHDPie2DType : CHDChartType {

	int mFirstSliceAngle;
	BOOL mDoughnutType;
	BOOL mPieOfPieType;
	BOOL mBarOfPieType;

}
-(id)contentFormat;
-(BOOL)isDoughnutType;
-(id)initWithChart:(id)arg1 ;
-(void)setFirstSliceAngle:(int)arg1 ;
-(void)setDoughnutType:(BOOL)arg1 ;
-(void)setPieOfPieType:(BOOL)arg1 ;
-(void)setBarOfPieType:(BOOL)arg1 ;
-(int)defaultLabelPosition;
-(int)firstSliceAngle;
-(BOOL)isPieOfPieType;
-(BOOL)isBarOfPieType;
-(BOOL)hasExplosion;
@end


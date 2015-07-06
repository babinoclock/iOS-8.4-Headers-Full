/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:41 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/CHDAxis.h>

@interface CHDDateAxis : CHDAxis {

	BOOL mAutomatic;
	double mMajorUnitValue;
	double mMinorUnitValue;
	int mMinorTimeUnit;
	int mMajorTimeUnit;
	int mBaseTimeUnit;

}
-(id)initWithResources:(id)arg1 ;
-(void)setMajorUnitValue:(double)arg1 ;
-(void)setMinorUnitValue:(double)arg1 ;
-(double)minorUnitValue;
-(double)majorUnitValue;
-(BOOL)isDate;
-(BOOL)isAutomatic;
-(void)setAutomatic:(BOOL)arg1 ;
-(int)majorTimeUnit;
-(void)setMajorTimeUnit:(int)arg1 ;
-(int)minorTimeUnit;
-(void)setMinorTimeUnit:(int)arg1 ;
-(int)baseTimeUnit;
-(void)setBaseTimeUnit:(int)arg1 ;
@end


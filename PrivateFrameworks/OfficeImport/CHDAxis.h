/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:40 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/EDKeyedObject.h>

@class CHDTitle, OADGraphicProperties, EDResources, NSString;

@interface CHDAxis : NSObject <EDKeyedObject> {

	BOOL mReverseOrder;
	BOOL mSecondary;
	BOOL mDateTimeFormattingFlag;
	BOOL mLineVisible;
	BOOL mDeleted;
	BOOL mAutoMinimumValue;
	BOOL mAutoMaximumValue;
	BOOL mAutoCrossValue;
	BOOL mContentFormatDerived;
	int mAxisId;
	unsigned mContentFormatId;
	unsigned mFontIndex;
	double mScalingMaximum;
	double mScalingMinimum;
	int mOrientation;
	double mCrossAxisId;
	double mCrossesAt;
	int mMajorTickMark;
	int mMinorTickMark;
	int mAxisPosition;
	int mAxisType;
	int mTickLabelPosition;
	CHDTitle* mTitle;
	OADGraphicProperties* mMinorGridLinesGraphicProperties;
	OADGraphicProperties* mMajorGridLinesGraphicProperties;
	OADGraphicProperties* mAxisGraphicProperties;
	int mCrossBetween;
	int mCrosses;
	double mTickLabelRotation;
	BOOL mIsAutoRotation;
	unsigned mTickLabelColorIndex;
	EDResources* mResources;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setTitle:(id)arg1 ;
-(NSString *)description;
-(int)key;
-(int)orientation;
-(id)title;
-(void)setFont:(id)arg1 ;
-(id)font;
-(void)setOrientation:(int)arg1 ;
-(unsigned)contentFormatId;
-(id)contentFormat;
-(int)axisPosition;
-(BOOL)isSecondary;
-(id)majorGridLinesGraphicProperties;
-(double)scalingMinimum;
-(double)scalingMaximum;
-(BOOL)isDateTimeFormattingFlag;
-(void)setSecondary:(BOOL)arg1 ;
-(void)setAxisId:(int)arg1 ;
-(void)setAxisType:(int)arg1 ;
-(void)setAxisPosition:(int)arg1 ;
-(void)setContentFormatId:(unsigned)arg1 ;
-(void)setFontIndex:(unsigned)arg1 ;
-(void)setLineVisible:(BOOL)arg1 ;
-(void)setDeleted:(BOOL)arg1 ;
-(void)setAxisGraphicProperties:(id)arg1 ;
-(void)setMajorTickMark:(int)arg1 ;
-(void)setMinorTickMark:(int)arg1 ;
-(void)setTickLabelPosition:(int)arg1 ;
-(void)setTickLabelAutoRotation:(BOOL)arg1 ;
-(void)setTickLabelRotationAngle:(double)arg1 ;
-(void)setTickLabelColorIndex:(unsigned)arg1 ;
-(void)setMinorGridLinesGraphicProperties:(id)arg1 ;
-(void)setMajorGridLinesGraphicProperties:(id)arg1 ;
-(id)initWithResources:(id)arg1 ;
-(void)setReverseOrder:(BOOL)arg1 ;
-(void)setCrossesAt:(double)arg1 ;
-(void)setCrossBetween:(int)arg1 ;
-(void)setScalingMaximum:(double)arg1 ;
-(void)setScalingMinimum:(double)arg1 ;
-(BOOL)isReverseOrder;
-(double)crossesAt;
-(int)crossBetween;
-(unsigned)fontIndex;
-(BOOL)isAutoCrossValue;
-(BOOL)isAutoMaximumValue;
-(BOOL)isAutoMinimumValue;
-(void)adjustAxisPositionForHorizontalChart;
-(int)axisId;
-(BOOL)isLineVisible;
-(BOOL)isHorizontalPosition;
-(id)defaultDateTimeContentFormat;
-(void)setContentFormat:(id)arg1 ;
-(BOOL)isContentFormatDerivedFromDataPoints;
-(void)setIsContentFormatDerivedFromDataPoints:(BOOL)arg1 ;
-(double)crossAxisId;
-(void)setCrossAxisId:(double)arg1 ;
-(int)majorTickMark;
-(int)minorTickMark;
-(int)axisType;
-(int)tickLabelPosition;
-(BOOL)isTickLabelVisible;
-(id)minorGridLinesGraphicProperties;
-(id)axisGraphicProperties;
-(int)crosses;
-(void)setCrosses:(int)arg1 ;
-(BOOL)isDate;
-(void)setDateTimeFormattingFlag:(BOOL)arg1 ;
-(double)tickLabelRotationAngle;
-(BOOL)isTickLabelAutoRotation;
-(unsigned)tickLabelColorIndex;
-(id)tickLabelColor;
-(BOOL)isDeleted;
@end


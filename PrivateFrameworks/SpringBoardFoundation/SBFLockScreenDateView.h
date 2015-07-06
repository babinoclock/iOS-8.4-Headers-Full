/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:36 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <UIKit/UIView.h>

@protocol SBFLockScreenDateFormatter;
@class UILabel, _UILegibilityLabel, NSString, UIColor, NSDate, _UILegibilitySettings;

@interface SBFLockScreenDateView : UIView {

	UILabel* _timeLabel;
	UILabel* _dateLabel;
	char _useLegibilityLabels;
	_UILegibilityLabel* _legibilityTimeLabel;
	_UILegibilityLabel* _legibilityDateLabel;
	float _timeAlpha;
	float _dateAlpha;
	NSString* _customSubtitleText;
	UIColor* _customSubtitleColor;
	NSDate* _date;
	id<SBFLockScreenDateFormatter> _formatter;
	_UILegibilitySettings* _legibilitySettings;
	float _timeStrength;
	float _dateStrength;
	UIColor* _textColor;
	float _dateAlphaPercentage;

}

@property (assign,getter=isDateHidden,nonatomic) char dateHidden; 
@property (nonatomic,retain) NSDate * date;                                           //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) id<SBFLockScreenDateFormatter> formatter;                //@synthesize formatter=_formatter - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (assign,nonatomic) float timeStrength;                                      //@synthesize timeStrength=_timeStrength - In the implementation block
@property (assign,nonatomic) float dateStrength;                                      //@synthesize dateStrength=_dateStrength - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                                     //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) float dateAlphaPercentage;                               //@synthesize dateAlphaPercentage=_dateAlphaPercentage - In the implementation block
+(float)defaultHeight;
-(id<SBFLockScreenDateFormatter>)formatter;
-(void)setFormatter:(id<SBFLockScreenDateFormatter>)arg1 ;
-(void)_updateLabels;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(NSDate *)date;
-(void)setTextColor:(UIColor *)arg1 ;
-(UIColor *)textColor;
-(void)setDate:(NSDate *)arg1 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)_addLabels;
-(void)_useLegibilityLabels:(char)arg1 ;
-(void)updateFormat;
-(id)_dateText;
-(void)_updateLegibilityLabelsWithUpdatedDateString:(char)arg1 ;
-(id)_dateColor;
-(void)_setDateAlpha:(float)arg1 ;
-(id)_timeFont;
-(id)_dateFont;
-(void)_updateLabelAlpha;
-(float)_effectiveDateAlpha;
-(float)dateAlphaPercentage;
-(void)_layoutTimeLabel;
-(void)_layoutDateLabel;
-(void)setDateStrength:(float)arg1 ;
-(void)setTimeStrength:(float)arg1 ;
-(void)setDateAlphaPercentage:(float)arg1 ;
-(char)isDateHidden;
-(void)setDateHidden:(char)arg1 ;
-(void)setContentAlpha:(float)arg1 withDateVisible:(char)arg2 ;
-(void)setCustomSubtitleText:(id)arg1 withColor:(id)arg2 ;
-(float)timeBaselineOffsetFromOrigin;
-(float)dateBaselineOffsetFromOrigin;
-(float)timeStrength;
-(float)dateStrength;
@end


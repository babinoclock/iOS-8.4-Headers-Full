/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:27 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UIView.h>
#import <MobileTimer/Clock.h>

@protocol WorldClockCellViewDelegate;
@class NSTimeZone, AnalogClockView, DigitalClockLabel, UILabel;

@interface WorldClockCellView : UIView <Clock> {

	NSTimeZone* _timeZone;
	int _nowInMinutes;
	char _editing;
	char _started;
	id<WorldClockCellViewDelegate> _delegate;
	int _style;
	AnalogClockView* _analogClock;
	DigitalClockLabel* _digitalClock;
	UILabel* _nameLabel;
	UILabel* _combinedLabel;

}

@property (assign,nonatomic) id<WorldClockCellViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int style;                                            //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) AnalogClockView * analogClock;                      //@synthesize analogClock=_analogClock - In the implementation block
@property (nonatomic,readonly) DigitalClockLabel * digitalClock;                   //@synthesize digitalClock=_digitalClock - In the implementation block
@property (nonatomic,readonly) UILabel * nameLabel;                                //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,readonly) UILabel * combinedLabel;                            //@synthesize combinedLabel=_combinedLabel - In the implementation block
@property (nonatomic,readonly) char started;                                       //@synthesize started=_started - In the implementation block
@property (nonatomic,readonly) int runMode; 
+(float)defaultCellHeight;
+(id)combinedStringFromDate:(id)arg1 withTimezoneOffset:(int)arg2 dayText:(id*)arg3 hourText:(id*)arg4 usesSeparateLines:(char)arg5 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<WorldClockCellViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<WorldClockCellViewDelegate>)delegate;
-(void)setTimeZone:(id)arg1 ;
-(void)stop;
-(int)style;
-(void)setStyle:(int)arg1 ;
-(void)setStyle:(int)arg1 animated:(char)arg2 ;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)start;
-(double)updateInterval;
-(UILabel *)nameLabel;
-(char)started;
-(double)coarseUpdateInterval;
-(void)significantTimeChange:(id)arg1 ;
-(void)localeChange:(id)arg1 ;
-(id)stringFromDate:(id)arg1 withTimezoneOffset:(int)arg2 ;
-(void)updateTimeContinuously:(int)arg1 ;
-(int)runMode;
-(AnalogClockView *)analogClock;
-(DigitalClockLabel *)digitalClock;
-(UILabel *)combinedLabel;
-(void)updateTime;
@end


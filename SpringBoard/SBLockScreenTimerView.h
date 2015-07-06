/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:57 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@class NSDate, SBLockScreenTimerDialView, UILabel, _UILegibilityLabel;

@interface SBLockScreenTimerView : UIView {

	NSDate* _endDate;
	SBLockScreenTimerDialView* _timerDial;
	UILabel* _layoutLabel;
	_UILegibilityLabel* _timerLabel;

}
+(id)_timerFont;
+(float)interItemSpacing;
-(void)setTimerHidden:(char)arg1 ;
-(void)updateTimerLabel;
-(void)setLegibilitySettings:(id)arg1 textStrength:(float)arg2 dialStrength:(float)arg3 ;
-(id)_newTimerDialForSettings:(id)arg1 strength:(float)arg2 ;
-(id)_newLegibilityLabelForSettings:(id)arg1 strength:(float)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(float)baselineOffsetFromBottom;
-(void)setEndDate:(id)arg1 ;
@end


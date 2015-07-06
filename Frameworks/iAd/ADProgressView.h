/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:10 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iAd/iAd-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, ADPrerollSlider;

@interface ADProgressView : UIView {

	UILabel* _elapsedTimeLabel;
	UILabel* _remainingTimeLabel;
	ADPrerollSlider* _slider;

}

@property (nonatomic,retain) UILabel * elapsedTimeLabel;                //@synthesize elapsedTimeLabel=_elapsedTimeLabel - In the implementation block
@property (nonatomic,retain) UILabel * remainingTimeLabel;              //@synthesize remainingTimeLabel=_remainingTimeLabel - In the implementation block
@property (nonatomic,retain) ADPrerollSlider * slider;                  //@synthesize slider=_slider - In the implementation block
-(void)setSlider:(ADPrerollSlider *)arg1 ;
-(ADPrerollSlider *)slider;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setElapsedTime:(double)arg1 totalTime:(double)arg2 ;
-(void)setElapsedTimeLabel:(UILabel *)arg1 ;
-(UILabel *)elapsedTimeLabel;
-(void)setRemainingTimeLabel:(UILabel *)arg1 ;
-(UILabel *)remainingTimeLabel;
@end


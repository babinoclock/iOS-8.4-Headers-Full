/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:51 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIView.h>

@interface EKLegacyUIListHeaderCellContentView : UIView {

	double _date;
	char _indentsForDots;
	char _showWeekNumber;

}

@property (assign,nonatomic) double date; 
@property (assign,nonatomic) char indentsForDots; 
@property (assign,nonatomic) char showWeekNumber;              //@synthesize showWeekNumber=_showWeekNumber - In the implementation block
-(char)indentsForDots;
-(void)setIndentsForDots:(char)arg1 ;
-(void)setShowWeekNumber:(char)arg1 ;
-(char)showWeekNumber;
-(CGRect)_rectForOffetTextShadow:(CGRect)arg1 ;
-(id)_normalTextColor;
-(id)_normalTextShadowColor;
-(void)drawTitle:(id)arg1 withColor:(id)arg2 withShadowColor:(id)arg3 inRect:(CGRect)arg4 ;
-(id)_weekNumberFont;
-(void)drawRect:(CGRect)arg1 ;
-(double)date;
-(void)setDate:(double)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:12 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <UIKit/UISlider.h>

@class UIColor;

@interface PSSegmentableSlider : UISlider {

	UIColor* _trackMarkersColor;
	char _segmented;
	unsigned _segmentCount;

}

@property (assign,getter=isSegmented,nonatomic) char segmented;              //@synthesize segmented=_segmented - In the implementation block
@property (assign,nonatomic) unsigned segmentCount;                          //@synthesize segmentCount=_segmentCount - In the implementation block
-(void)setSegmentCount:(unsigned)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(CGRect)trackRectForBounds:(CGRect)arg1 ;
-(void)setValue:(float)arg1 animated:(char)arg2 ;
-(void)setSegmented:(char)arg1 ;
-(void)sliderTapped:(id)arg1 ;
-(unsigned)numberOfTicks;
-(float)offsetBetweenTicksForNumberOfTicks:(unsigned)arg1 ;
-(char)isSegmented;
-(unsigned)segmentCount;
@end


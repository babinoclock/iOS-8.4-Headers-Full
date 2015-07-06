/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:54 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIView.h>
#import <EventKitUI/EKCurrentTimeMarkerViewUpdating.h>

@class UIColor, UIView, NSMutableArray, EKCurrentTimeMarkerView, UIImageView, NSString;

@interface EKDayGridView : UIView <EKCurrentTimeMarkerViewUpdating> {

	float _timeInset;
	float _hourHeight;
	float _timeWidth;
	unsigned _leftBorder : 1;
	unsigned _rightBorder : 1;
	int _selected;
	float _fixedDayWidth;
	int _orientation;
	CGRect _lastBounds;
	UIColor* _backgroundColor;
	UIView* _leftBorderView;
	NSMutableArray* _middleBorderViews;
	UIView* _rightBorderView;
	NSMutableArray* _gridPatternViews;
	unsigned _daysToDisplay;
	EKCurrentTimeMarkerView* _timeMarker;
	UIImageView* _timeDot;
	char _rightBorderInsetsOccurrences;
	char _showsTimeLine;
	char _showsTimeMarker;
	char _animatesTimeMarker;
	char _usesVibrantGridDrawing;
	UIColor* _lineColor;
	int _timeMarkerDotDay;
	float _eventHorizontalInset;
	float _hoursToPadTop;
	float _hoursToPadBottom;
	float _gridHeightScale;

}

@property (assign,nonatomic) char showsLeftBorder; 
@property (assign,nonatomic) char showsRightBorder; 
@property (assign,nonatomic) char rightBorderInsetsOccurrences;                   //@synthesize rightBorderInsetsOccurrences=_rightBorderInsetsOccurrences - In the implementation block
@property (assign,nonatomic) char showsTimeLine;                                  //@synthesize showsTimeLine=_showsTimeLine - In the implementation block
@property (assign,nonatomic) char showsTimeMarker;                                //@synthesize showsTimeMarker=_showsTimeMarker - In the implementation block
@property (assign,nonatomic) char animatesTimeMarker;                             //@synthesize animatesTimeMarker=_animatesTimeMarker - In the implementation block
@property (assign,nonatomic) int timeMarkerDotDay;                                //@synthesize timeMarkerDotDay=_timeMarkerDotDay - In the implementation block
@property (assign,nonatomic) float fixedDayWidth; 
@property (assign,nonatomic) float eventHorizontalInset;                          //@synthesize eventHorizontalInset=_eventHorizontalInset - In the implementation block
@property (assign,nonatomic) float hoursToPadTop;                                 //@synthesize hoursToPadTop=_hoursToPadTop - In the implementation block
@property (assign,nonatomic) float hoursToPadBottom;                              //@synthesize hoursToPadBottom=_hoursToPadBottom - In the implementation block
@property (assign,getter=isSelected,nonatomic) char selected; 
@property (nonatomic,retain) UIColor * lineColor;                                 //@synthesize lineColor=_lineColor - In the implementation block
@property (assign,nonatomic) char usesVibrantGridDrawing;                         //@synthesize usesVibrantGridDrawing=_usesVibrantGridDrawing - In the implementation block
@property (nonatomic,readonly) EKCurrentTimeMarkerView * timeMarker;              //@synthesize timeMarker=_timeMarker - In the implementation block
@property (nonatomic,readonly) float timeWidth; 
@property (nonatomic,readonly) float timeInset; 
@property (nonatomic,readonly) float topPadding; 
@property (nonatomic,readonly) float hourHeight; 
@property (nonatomic,readonly) float widthForOccurrences; 
@property (assign,nonatomic) float gridHeightScale;                               //@synthesize gridHeightScale=_gridHeightScale - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cachedBackgroundImageForKey:(id)arg1 ;
+(void)cacheBackgroundImage:(id)arg1 forKey:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 backgroundColor:(id)arg2 opaque:(char)arg3 numberOfDaysToDisplay:(unsigned)arg4 ;
-(void)setShowsLeftBorder:(char)arg1 ;
-(char)showsLeftBorder;
-(void)setFixedDayWidth:(float)arg1 ;
-(void)setHoursToPadTop:(float)arg1 ;
-(float)positionOfSecond:(int)arg1 ;
-(float)_dayWidth;
-(float)widthForOccurrences;
-(int)secondAtPosition:(float)arg1 ;
-(float)fixedDayWidth;
-(float)hourHeight;
-(float)topPadding;
-(float)timeWidth;
-(void)setAnimatesTimeMarker:(char)arg1 ;
-(void)setShowsTimeMarker:(char)arg1 ;
-(char)showsTimeLine;
-(void)updateMarkerPosition;
-(void)setShowsTimeLine:(char)arg1 ;
-(EKCurrentTimeMarkerView *)timeMarker;
-(char)animatesTimeMarker;
-(char)showsTimeMarker;
-(void)setShowsRightBorder:(char)arg1 ;
-(void)setUsesVibrantGridDrawing:(char)arg1 ;
-(void)setGridHeightScale:(float)arg1 ;
-(char)usesVibrantGridDrawing;
-(char)showsRightBorder;
-(int)timeMarkerDotDay;
-(float)eventHorizontalInset;
-(id)timeDotImage;
-(void)_updateTimeMarker;
-(id)_generateGridImage;
-(float)timeInset;
-(void)setTimeMarkerDotDay:(int)arg1 ;
-(CGRect)rectForStartSeconds:(int)arg1 endSeconds:(int)arg2 ;
-(char)rightBorderInsetsOccurrences;
-(void)setRightBorderInsetsOccurrences:(char)arg1 ;
-(void)setEventHorizontalInset:(float)arg1 ;
-(float)hoursToPadTop;
-(float)hoursToPadBottom;
-(void)setHoursToPadBottom:(float)arg1 ;
-(float)gridHeightScale;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)addSubview:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)tintColorDidChange;
-(char)isSelected;
-(void)setSelected:(char)arg1 ;
-(void)setOrientation:(int)arg1 ;
-(float)bottomPadding;
-(UIColor *)lineColor;
-(void)setLineColor:(UIColor *)arg1 ;
@end


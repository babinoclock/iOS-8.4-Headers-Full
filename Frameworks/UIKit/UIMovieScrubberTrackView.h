/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:44 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@protocol UIMovieScrubberTrackViewDataSource, UIMovieScrubberTrackViewDelegate;
@class NSArray, NSDictionary, NSMutableDictionary, UIMovieScrubberTrackOverlayView, UIView;

@interface UIMovieScrubberTrackView : UIView {

	id<UIMovieScrubberTrackViewDataSource> _dataSource;
	id<UIMovieScrubberTrackViewDelegate> _delegate;
	NSArray* _summaryThumbnailViews;
	NSArray* _summaryThumbnailTimestamps;
	NSArray* _summaryThumbnailChildTimestamps;
	NSDictionary* _thumbnailStartXValues;
	NSDictionary* _childThumbnailViews;
	NSMutableDictionary* _thumbnailViews;
	NSArray* _timestamps;
	UIMovieScrubberTrackOverlayView* _overlayView;
	UIView* _maskContainerView;
	CGSize _thumbnailSize;
	float _zoomOriginXDelta;
	float _zoomWidthDelta;
	float _unclampedZoomWidthDelta;
	float _zoomAnimationDuration;
	double _duration;
	double _value;
	double _startValue;
	double _endValue;
	struct {
		unsigned delegateSizeOriginDelta : 1;
		unsigned delegateDidExpand : 1;
		unsigned delegateDidCollapse : 1;
		unsigned delegateWillRequestThumbs : 1;
		unsigned delegateDidRequestThumbs : 1;
		unsigned delegateZoomAnimationDuration : 1;
		unsigned delegateZoomAnimationDelay : 1;
		unsigned needsReload : 1;
		unsigned editing : 1;
		unsigned editingHandle;
		unsigned zoomIsDisabled : 1;
	}  _trackFlags;

}

@property (assign,nonatomic) id<UIMovieScrubberTrackViewDataSource> dataSource; 
@property (assign,nonatomic) id<UIMovieScrubberTrackViewDelegate> delegate; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDataSource:(id<UIMovieScrubberTrackViewDataSource>)arg1 ;
-(void)setDelegate:(id<UIMovieScrubberTrackViewDelegate>)arg1 ;
-(void)reloadData;
-(void)layoutSubviews;
-(id<UIMovieScrubberTrackViewDataSource>)dataSource;
-(id<UIMovieScrubberTrackViewDelegate>)delegate;
-(void)setValue:(double)arg1 ;
-(void)setEditing:(char)arg1 ;
-(void)animateFillFramesAway;
-(void)setStartValue:(double)arg1 ;
-(void)setEndValue:(double)arg1 ;
-(void)clear;
-(id)_createImageViewForTimestamp:(id)arg1 isSummaryThumbnail:(char)arg2 ;
-(void)_reallyReloadData;
-(void)_zoomAnimation:(id)arg1 didFinish:(id)arg2 context:(id)arg3 ;
-(void)_setOverlayViewIsZoomed:(char)arg1 minValue:(float)arg2 maxValue:(float)arg3 ;
-(void)_unzoomAnimation:(id)arg1 didFinish:(id)arg2 context:(id)arg3 ;
-(void)setThumbnailImage:(CGImageRef)arg1 forTimestamp:(id)arg2 ;
-(void)setZoomAnimationDuration:(double)arg1 ;
-(double)zoomAnimationDuration;
-(char)zoomAtPoint:(CGPoint)arg1 ;
-(void)unzoom;
@end


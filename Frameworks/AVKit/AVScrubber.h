/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:15 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKit/UISlider.h>

@class NSArray, AVLoadedTimeRangesView, UIImageView, NSString;

@interface AVScrubber : UISlider {

	NSArray* _loadedTimeRanges;
	AVLoadedTimeRangesView* _loadedTimeRangesMaxTrackView;
	UIImageView* _thumbView;
	float _touchLocationOffsetFromThumbViewCenter;
	float _beginTouchLocationInViewY;
	int _scrubbingSpeed;

}

@property (nonatomic,retain) NSArray * loadedTimeRanges; 
@property (getter=isPreciseScrubbingFeasible,nonatomic,readonly) char preciseScrubbingFeasible; 
@property (nonatomic,readonly) NSString * localizedScrubbingSpeedName; 
@property (assign,nonatomic) int scrubbingSpeed;                                                             //@synthesize scrubbingSpeed=_scrubbingSpeed - In the implementation block
+(id)keyPathsForValuesAffectingPreciseScrubbingFeasible;
+(id)keyPathsForValuesAffectingLocalizedScrubbingSpeedName;
-(NSString *)localizedScrubbingSpeedName;
-(char)isPreciseScrubbingFeasible;
-(int)scrubbingSpeed;
-(void)setScrubbingSpeed:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(char)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(char)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(id)createThumbView;
-(void)_layoutSubviewsForBoundsChange:(char)arg1 ;
-(void)_initSubviews;
-(void)setLoadedTimeRanges:(NSArray *)arg1 ;
-(NSArray *)loadedTimeRanges;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:52 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class SBApplication, UIView, SBStretchTransformer, SBAnimationStepper;

@interface SBSwitchAppGestureView : UIView {

	int m_orientation;
	SBApplication* m_startingApp;
	SBApplication* m_endingApp;
	SBApplication* m_leftwardApp;
	SBApplication* m_rightwardApp;
	int m_startingViewOrientation;
	int m_leftwardViewOrientation;
	int m_rightwardViewOrientation;
	UIView* m_startingView;
	UIView* m_leftwardView;
	UIView* m_rightwardView;
	float m_pageWidth;
	float m_percentage;
	float m_contentOffset;
	SBStretchTransformer* m_stretchTransformer;
	char m_finishingPaging;
	char m_underflowing;
	char m_overflowing;
	/*^block*/id m_completion;
	SBAnimationStepper* _wallpaperAnimationStepper;
	int _startingWallpaperStyle;
	int _leftwardWallpaperStyle;
	int _rightwardWallpaperStyle;

}

@property (assign,nonatomic) int orientation; 
@property (nonatomic,retain) SBApplication * startingApp; 
@property (nonatomic,retain) SBApplication * endingApp; 
@property (nonatomic,retain) SBApplication * leftwardApp; 
@property (nonatomic,retain) SBApplication * rightwardApp; 
@property (assign,nonatomic) int startingViewOrientation; 
@property (assign,nonatomic) int leftwardViewOrientation; 
@property (assign,nonatomic) int rightwardViewOrientation; 
@property (getter=isPagingLeftward,nonatomic,readonly) char pagingLeftward; 
@property (getter=isPagingRightward,nonatomic,readonly) char pagingRightward; 
@property (assign,getter=isUnderflowing,nonatomic) char underflowing; 
@property (assign,getter=isOverflowing,nonatomic) char overflowing; 
@property (nonatomic,retain) UIView * startingView; 
@property (nonatomic,retain) UIView * leftwardView; 
@property (nonatomic,retain) UIView * rightwardView; 
@property (assign,nonatomic) float pageWidth; 
@property (assign,nonatomic) float percentage; 
@property (assign,nonatomic) float contentOffset; 
@property (nonatomic,retain) SBStretchTransformer * stretchTransformer; 
@property (nonatomic,copy) id completion; 
@property (nonatomic,retain) SBAnimationStepper * wallpaperAnimationStepper;               //@synthesize wallpaperAnimationStepper=_wallpaperAnimationStepper - In the implementation block
@property (assign,nonatomic) int startingWallpaperStyle;                                   //@synthesize startingWallpaperStyle=_startingWallpaperStyle - In the implementation block
@property (assign,nonatomic) int leftwardWallpaperStyle;                                   //@synthesize leftwardWallpaperStyle=_leftwardWallpaperStyle - In the implementation block
@property (assign,nonatomic) int rightwardWallpaperStyle;                                  //@synthesize rightwardWallpaperStyle=_rightwardWallpaperStyle - In the implementation block
-(void)setPercentage:(float)arg1 ;
-(id)initWithInterfaceOrientation:(int)arg1 startingApp:(id)arg2 leftwardApp:(id)arg3 rightwardApp:(id)arg4 ;
-(void)beginPaging;
-(void)updatePaging:(float)arg1 ;
-(void)finishBackwardToStartWithCompletion:(/*^block*/id)arg1 ;
-(void)finishForwardToEndWithPercentage:(float)arg1 completion:(/*^block*/id)arg2 ;
-(SBApplication *)startingApp;
-(SBApplication *)endingApp;
-(void)setStartingApp:(SBApplication *)arg1 ;
-(void)setEndingApp:(SBApplication *)arg1 ;
-(void)setLeftwardApp:(SBApplication *)arg1 ;
-(void)setRightwardApp:(SBApplication *)arg1 ;
-(void)setStartingView:(UIView *)arg1 ;
-(void)setLeftwardView:(UIView *)arg1 ;
-(void)setRightwardView:(UIView *)arg1 ;
-(void)setStretchTransformer:(SBStretchTransformer *)arg1 ;
-(float)contentOffsetForApp:(id)arg1 ;
-(void)transformGestureViewContainer:(id)arg1 ;
-(id)viewForApp:(id)arg1 ;
-(UIView *)startingView;
-(void)setStartingViewOrientation:(int)arg1 ;
-(void)setStartingWallpaperStyle:(int)arg1 ;
-(SBApplication *)leftwardApp;
-(UIView *)leftwardView;
-(void)setLeftwardViewOrientation:(int)arg1 ;
-(void)setLeftwardWallpaperStyle:(int)arg1 ;
-(SBApplication *)rightwardApp;
-(UIView *)rightwardView;
-(void)setRightwardViewOrientation:(int)arg1 ;
-(void)setRightwardWallpaperStyle:(int)arg1 ;
-(void)moveToApp:(id)arg1 ;
-(void)setUnderflowing:(char)arg1 ;
-(void)setOverflowing:(char)arg1 ;
-(char)isPagingUnderflowPercentage:(float)arg1 ;
-(void)moveToContentOffset:(float)arg1 percentage:(float)arg2 animated:(char)arg3 ;
-(SBStretchTransformer *)stretchTransformer;
-(char)isPagingOverflowPercentage:(float)arg1 ;
-(char)isUnderflowing;
-(char)isOverflowing;
-(void)moveToApp:(id)arg1 animated:(char)arg2 ;
-(void)stretchTransformerAnimationDidStop:(char)arg1 ;
-(float)percentageForApp:(id)arg1 ;
-(float)scaleForPercentage:(float)arg1 ;
-(float)opacityForPercentage:(float)arg1 ;
-(SBAnimationStepper *)wallpaperAnimationStepper;
-(char)isPagingRightward;
-(int)rightwardWallpaperStyle;
-(int)leftwardWallpaperStyle;
-(void)setWallpaperAnimationStepper:(SBAnimationStepper *)arg1 ;
-(void)cleanUpWallpaperAnimation;
-(char)isPagingLeftward;
-(int)startingViewOrientation;
-(int)leftwardViewOrientation;
-(int)rightwardViewOrientation;
-(int)startingWallpaperStyle;
-(void)dealloc;
-(float)contentOffset;
-(int)orientation;
-(void)setContentOffset:(float)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)setOrientation:(int)arg1 ;
-(float)percentage;
-(float)pageWidth;
-(void)setPageWidth:(float)arg1 ;
@end


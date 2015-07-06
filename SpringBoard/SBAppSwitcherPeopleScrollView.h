/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:59 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIScrollView.h>

@class NSArray, NSDictionary, SBScrollViewLayoutInfos, NSMutableDictionary, _UILegibilitySettings, SBScrollViewItemWrapper;

@interface SBAppSwitcherPeopleScrollView : UIScrollView {

	NSArray* _wrappers;
	NSDictionary* _wrappersToViews;
	NSDictionary* _sectionsToPlaceholders;
	CGPoint _closingGestureBeginningContentOffset;
	SBScrollViewLayoutInfos* _interactiveClosingGestureBeginningLayout;
	SBScrollViewLayoutInfos* _interactiveClosingGestureTargetLayout;
	SBScrollViewLayoutInfos* _interactiveClosingGestureInterpolatedLayout;
	NSMutableDictionary* _sectionLabels;
	SBScrollViewLayoutInfos* _cachedLayoutInfos;
	_UILegibilitySettings* _legibilitySettings;
	char _lastLayoutWasCompact;
	SBScrollViewItemWrapper* _expandedItemWrapper;

}

@property (nonatomic,retain) SBScrollViewItemWrapper * expandedItemWrapper;                   //@synthesize expandedItemWrapper=_expandedItemWrapper - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                      //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (assign,nonatomic) id<SBAppSwitcherPeopleScrollViewDelegate> delegate; 
@property (nonatomic,retain) SBScrollViewLayoutInfos * cachedLayoutInfos;                     //@synthesize cachedLayoutInfos=_cachedLayoutInfos - In the implementation block
-(float)monogramSize;
-(char)useVerticallyCompactLayoutSize;
-(SBScrollViewItemWrapper *)expandedItemWrapper;
-(void)setExpandedItemWrapper:(SBScrollViewItemWrapper *)arg1 ;
-(void)updateDataVisibleOnly:(char)arg1 animated:(char)arg2 ;
-(CGPoint)presentationOffset;
-(void)removeContent;
-(void)beginInteractiveClosingOfExpandedItem;
-(void)finishInteractiveClosingOfItem;
-(void)updateInteractiveClosingWithProgress:(float)arg1 ;
-(void)cancelInteractiveClosingOfItem;
-(void)collapseExpandedItem;
-(void)expandItemWrapper:(id)arg1 ;
-(CGRect)layoutFrameForItemWrapper:(id)arg1 ;
-(id)layoutInfosWithExpandedItemWrapper:(id)arg1 ;
-(void)setCachedLayoutInfos:(SBScrollViewLayoutInfos *)arg1 ;
-(void)_layoutSectionLabels;
-(id)_labelImageParametersForLabelString:(id)arg1 ;
-(SBScrollViewLayoutInfos *)cachedLayoutInfos;
-(id)_labelForSection:(unsigned)arg1 ;
-(id)_indexPathForItem:(id)arg1 ;
-(id)_placeholderViewForSection:(int)arg1 ;
-(void)_addOrRemoveSectionLabels;
-(void)applyContentSizeForLayoutInfos:(id)arg1 ;
-(id)_indexPathsToViewsForViews:(id)arg1 ;
-(int)_sectionForPlaceholderView:(id)arg1 ;
-(void)applySubviewFramesForLayoutInfos:(id)arg1 ;
-(float)_interItemSpacing;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(id)_labelFont;
@end

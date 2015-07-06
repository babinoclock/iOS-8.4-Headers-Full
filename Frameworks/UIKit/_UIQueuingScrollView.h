/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:56 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIScrollView.h>

@protocol _UIQueuingScrollViewDelegate, _UIQueuingScrollViewDataSource;
@class NSArray, UIView, NSMutableArray;

@interface _UIQueuingScrollView : UIScrollView {

	id<_UIQueuingScrollViewDelegate> _qDelegate;
	id<_UIQueuingScrollViewDataSource> _qDataSource;
	int _navigationOrientation;
	NSArray* _views;
	NSArray* _wrapperViews;
	UIView* _pendingVisibleView;
	float _pageSpacing;
	NSMutableArray* _viewStateQueue;
	NSMutableArray* _completionStateQueue;
	char _manualScrollInProgress;
	struct {
		unsigned delegateInterestedInPendingScrolls : 1;
		unsigned delegateInterestedInCommittedScrolls : 1;
		unsigned delegateInterestedInCompletedScrolls : 1;
		unsigned delegateInterestedInBailedOutScrolls : 1;
		unsigned delegateInterestedFinishedScrolling : 1;
		unsigned delegateCanVetoSubviewLayout : 1;
		unsigned dataSourceSuppliesBeforeView : 1;
		unsigned dataSourceSuppliesAfterView : 1;
		unsigned dataSourceInterestedInFlushedViews : 1;
	}  _delegateFlags;
	CGRect _disabledScrollingRegion;

}

@property (nonatomic,readonly) UIView * visibleView; 
@property (assign,nonatomic) id<_UIQueuingScrollViewDelegate> qDelegate;                  //@synthesize qDelegate=_qDelegate - In the implementation block
@property (assign,nonatomic) id<_UIQueuingScrollViewDataSource> qDataSource;              //@synthesize qDataSource=_qDataSource - In the implementation block
@property (assign,nonatomic) float pageSpacing;                                           //@synthesize pageSpacing=_pageSpacing - In the implementation block
@property (assign,nonatomic) CGRect disabledScrollingRegion;                              //@synthesize disabledScrollingRegion=_disabledScrollingRegion - In the implementation block
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(void)scrollRectToVisible:(CGRect)arg1 animated:(char)arg2 ;
-(void)_scrollViewDidEndDraggingWithDeceleration:(char)arg1 ;
-(void)_scrollViewDidEndDecelerating;
-(unsigned)_abuttedPagingEdges;
-(char)_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)_scrollViewAnimationEnded:(id)arg1 finished:(char)arg2 ;
-(id)_visibleView;
-(void)setPageSpacing:(float)arg1 ;
-(float)pageSpacing;
-(id)initWithFrame:(CGRect)arg1 navigationOrientation:(int)arg2 ;
-(void)setQDelegate:(id<_UIQueuingScrollViewDelegate>)arg1 ;
-(void)setQDataSource:(id<_UIQueuingScrollViewDataSource>)arg1 ;
-(void)_setFrameAndApplyPageSpacing:(CGRect)arg1 ;
-(void)_invalidateOffscreenViews;
-(CGRect)disabledScrollingRegion;
-(void)setDisabledScrollingRegion:(CGRect)arg1 ;
-(UIView *)visibleView;
-(char)isPreviousScrollCompatibleWithScrollInDirection:(int)arg1 ;
-(void)setView:(id)arg1 direction:(int)arg2 animated:(char)arg3 completion:(/*^block*/id)arg4 ;
-(char)isManualScrollInProgress;
-(void)_boundsDidChangeToSize:(CGSize)arg1 ;
-(char)_isScrollInProgress:(char)arg1 ;
-(int)_navigationDirectionForActiveScroll:(char)arg1 ;
-(void)_didScrollWithAnimation:(char)arg1 force:(char)arg2 ;
-(void)_didEndManualScroll;
-(void)_didEndDraggingManualScroll;
-(void)_didEndProgrammaticScroll;
-(void)_adjustContentInsets;
-(char)_dataSourceProvidesViews;
-(id)_viewAtIndex:(int)arg1 loadingIfNecessary:(char)arg2 updatingContents:(char)arg3 animated:(char)arg4 ;
-(id)_viewBefore:(char)arg1 view:(id)arg2 ;
-(void)_flushView:(id)arg1 animated:(char)arg2 ;
-(void)_setWrappedViewAtIndex:(int)arg1 withView:(id)arg2 ;
-(id)_viewBeforeView:(id)arg1 ;
-(id)_viewAfterView:(id)arg1 ;
-(id)_dequeueViewForIndex:(int)arg1 ;
-(id)_requestViewForIndex:(int)arg1 ;
-(void)_replaceViews:(id)arg1 updatingContents:(char)arg2 adjustContentInsets:(char)arg3 animated:(char)arg4 ;
-(void)_cleanUpCompletionState:(id)arg1 didFinish:(char)arg2 didComplete:(char)arg3 ;
-(void)_notifyDelegateDidEndManualScroll:(char)arg1 toRevealView:(id)arg2 direction:(int)arg3 animated:(char)arg4 didFinish:(char)arg5 didComplete:(char)arg6 ;
-(void)_enqueueCompletionState:(id)arg1 ;
-(void)_notifyDelegateWillManuallyScroll:(char)arg1 toRevealView:(id)arg2 concealingView:(id)arg3 animated:(char)arg4 ;
-(void)_notifyDelegateDidCommitManualScroll:(char)arg1 toRevealView:(id)arg2 concealView:(id)arg3 direction:(int)arg4 animated:(char)arg5 canComplete:(char)arg6 ;
-(void)_enqueueAnimatedScrollInDirection:(int)arg1 withView:(id)arg2 completion:(/*^block*/id)arg3 ;
-(int)_navigationDirectionFromCurrentOffset;
-(char)_isDeceleratingInOppositionToNavigationDirection:(int)arg1 ;
-(void)_commitGestureDrivenScrollRevealingView:(id)arg1 concealingView:(id)arg2 inDirection:(int)arg3 canComplete:(char)arg4 ;
-(void)_notifyDelegateDidBailoutOfScrollAndRevealedView:(id)arg1 ;
-(void)_didEndScroll:(char)arg1 ;
-(void)_notifyDelegateDidFinishScrolling;
-(id<_UIQueuingScrollViewDelegate>)qDelegate;
-(id<_UIQueuingScrollViewDataSource>)qDataSource;
@end


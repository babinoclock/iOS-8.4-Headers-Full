/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:53 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIPageViewController, _UIQueuingScrollView, UIPageControl;

@interface _UIPageViewControllerContentView : UIView {

	UIPageViewController* _pageViewController;
	_UIQueuingScrollView* _scrollView;
	UIPageControl* _pageControl;

}

@property (nonatomic,readonly) _UIQueuingScrollView * scrollView;              //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,readonly) UIPageControl * pageControl;                    //@synthesize pageControl=_pageControl - In the implementation block
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(_UIQueuingScrollView *)scrollView;
-(CGRect)_scrollViewFrame;
-(float)_pageSpacing;
-(void)_setupPageControl:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 andPageViewController:(id)arg2 ;
-(void)invalidatePageViewController;
-(UIPageControl *)pageControl;
@end


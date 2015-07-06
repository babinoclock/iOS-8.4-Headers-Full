/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:49 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIPinchGestureRecognizer.h>

@class UIScrollView;

@interface UIScrollViewPinchGestureRecognizer : UIPinchGestureRecognizer {

	UIScrollView* _scrollView;
	SEL _scrollViewAction;
	unsigned _hasParentScrollView : 1;

}

@property (assign,nonatomic) UIScrollView * scrollView;              //@synthesize scrollView=_scrollView - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(float)_hysteresis;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)removeTarget:(id)arg1 action:(SEL)arg2 ;
-(UIScrollView *)scrollView;
@end


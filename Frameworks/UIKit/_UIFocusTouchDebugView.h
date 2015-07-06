/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:52 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface _UIFocusTouchDebugView : UIView {

	UIView* _touchView;
	UIView* _boundaryView;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)showCurrentTouchAtNormalizedPoint:(CGPoint)arg1 ;
-(void)showNavigationBoundaryWithinNormalizedRect:(CGRect)arg1 ;
-(void)hideCurrentTouch;
-(void)hideNavigationBoundary;
-(CGPoint)_scaleNormalizedPoint:(CGPoint)arg1 ;
-(CGRect)_scaleNormalizedRect:(CGRect)arg1 ;
@end


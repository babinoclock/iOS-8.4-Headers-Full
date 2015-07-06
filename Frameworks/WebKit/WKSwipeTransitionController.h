/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:07 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/_UINavigationInteractiveTransitionBaseDelegate.h>

@class NSString;

@interface WKSwipeTransitionController : NSObject <_UINavigationInteractiveTransitionBaseDelegate> {

	ViewGestureController* _gestureController;
	RetainPtr<_UINavigationInteractiveTransitionBase>* _backTransitionController;
	RetainPtr<_UINavigationInteractiveTransitionBase>* _forwardTransitionController;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)gestureRecognizerForInteractiveTransition:(id)arg1 WithTarget:(id)arg2 action:(SEL)arg3 ;
-(void)startInteractiveTransition:(id)arg1 ;
-(char)interactiveTransition:(id)arg1 gestureRecognizer:(id)arg2 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg3 ;
-(char)shouldBeginInteractiveTransition:(id)arg1 ;
-(char)interactiveTransition:(id)arg1 gestureRecognizer:(id)arg2 shouldReceiveTouch:(id)arg3 ;
-(void)invalidate;
-(int)directionForTransition:(id)arg1 ;
-(id)initWithViewGestureController:(ViewGestureController*)arg1 gestureRecognizerView:(id)arg2 ;
@end

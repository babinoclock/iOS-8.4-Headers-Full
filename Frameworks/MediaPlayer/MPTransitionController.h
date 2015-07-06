/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:34 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@class UIView, NSMutableSet, MPViewController, UIViewController;

@interface MPTransitionController : NSObject {

	CFDictionaryRef _observers;
	float _duration;
	UIView* _rootView;
	NSMutableSet* _persistentViewsToFadeOut;
	NSMutableSet* _viewsToFadeOut;
	NSMutableSet* _persistentViewsToFadeIn;
	NSMutableSet* _viewsToFadeIn;
	MPViewController* _fromViewController;
	int _fromInterfaceOrientation;
	MPViewController* _toViewController;
	int _toInterfaceOrientation;
	UIViewController* _toContainerViewController;

}

@property (assign,nonatomic) float duration;                                            //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) int fromInterfaceOrientation;                              //@synthesize fromInterfaceOrientation=_fromInterfaceOrientation - In the implementation block
@property (nonatomic,retain) MPViewController * fromViewController;                     //@synthesize fromViewController=_fromViewController - In the implementation block
@property (nonatomic,retain) UIView * rootView;                                         //@synthesize rootView=_rootView - In the implementation block
@property (assign,nonatomic) int toInterfaceOrientation;                                //@synthesize toInterfaceOrientation=_toInterfaceOrientation - In the implementation block
@property (nonatomic,retain) MPViewController * toViewController;                       //@synthesize toViewController=_toViewController - In the implementation block
@property (nonatomic,retain) UIViewController * toContainerViewController;              //@synthesize toContainerViewController=_toContainerViewController - In the implementation block
-(void)addObserver:(id)arg1 didEndSelector:(SEL)arg2 ;
-(void)transition:(unsigned)arg1 ;
-(void)performTransition:(unsigned)arg1 ;
-(UIView *)rootView;
-(void)setToContainerViewController:(UIViewController *)arg1 ;
-(void)fadeViewsForRestore:(char)arg1 ;
-(void)didFinishTransition:(char)arg1 ;
-(void)setToInterfaceOrientation:(int)arg1 ;
-(void)setFromInterfaceOrientation:(int)arg1 ;
-(UIViewController *)toContainerViewController;
-(void)messageObserversWithSuccess:(char)arg1 ;
-(void)willBeginTransition:(unsigned)arg1 ;
-(void)addViewToFadeIn:(id)arg1 restoreOnPop:(char)arg2 ;
-(void)addViewToFadeOut:(id)arg1 restoreOnPop:(char)arg2 ;
-(int)fromInterfaceOrientation;
-(void)setFromViewController:(MPViewController *)arg1 ;
-(void)setRootView:(UIView *)arg1 ;
-(int)toInterfaceOrientation;
-(void)setToViewController:(MPViewController *)arg1 ;
-(void)dealloc;
-(id)init;
-(float)duration;
-(void)setDuration:(float)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(MPViewController *)fromViewController;
-(MPViewController *)toViewController;
@end


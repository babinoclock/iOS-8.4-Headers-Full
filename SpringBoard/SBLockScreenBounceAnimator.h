/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:55 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIDynamicAnimatorDelegate.h>
#import <SpringBoard/_UISettingsKeyObserver.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol SBPresentingDelegate;
@class NSMutableSet, UIView, SBBouncingSystem, UIDynamicAnimator, SBBouncingItem, SBBounceBehavior, UIGestureRecognizer, NSSet, SBBounceSettings, NSString;

@interface SBLockScreenBounceAnimator : NSObject <UIDynamicAnimatorDelegate, _UISettingsKeyObserver, UIGestureRecognizerDelegate> {

	NSMutableSet* _tapExcludedViews;
	char _isAnimating;
	char _bounceEnabled;
	UIView* _view;
	SBBouncingSystem* _system;
	UIDynamicAnimator* _animator;
	SBBouncingItem* _item;
	SBBounceBehavior* _behavior;
	UIGestureRecognizer* _tapRecognizer;
	NSSet* _gestures;
	/*^block*/id _shouldBeginBlock;
	/*^block*/id _prepareBlock;
	/*^block*/id _translateBlock;
	/*^block*/id _canceledBlock;
	/*^block*/id _completedBlock;
	SBBounceSettings* _settings;
	id<SBPresentingDelegate> _presentingDelegate;

}

@property (copy) id shouldBeginBlock;                                                  //@synthesize shouldBeginBlock=_shouldBeginBlock - In the implementation block
@property (copy) id prepareBlock;                                                      //@synthesize prepareBlock=_prepareBlock - In the implementation block
@property (copy) id translateBlock;                                                    //@synthesize translateBlock=_translateBlock - In the implementation block
@property (copy) id canceledBlock;                                                     //@synthesize canceledBlock=_canceledBlock - In the implementation block
@property (copy) id completedBlock;                                                    //@synthesize completedBlock=_completedBlock - In the implementation block
@property (nonatomic,retain) SBBounceSettings * settings;                              //@synthesize settings=_settings - In the implementation block
@property (nonatomic,readonly) NSSet * tapExcludedViews; 
@property (assign,nonatomic) id<SBPresentingDelegate> presentingDelegate;              //@synthesize presentingDelegate=_presentingDelegate - In the implementation block
@property (nonatomic,readonly) NSSet * gestures; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setBounceEnabled:(char)arg1 ;
-(void)removeTapExcludedView:(id)arg1 ;
-(void)addTapExcludedView:(id)arg1 ;
-(void)setShouldBeginBlock:(id)arg1 ;
-(void)setTranslateBlock:(id)arg1 ;
-(void)setCompletedBlock:(id)arg1 ;
-(void)setCanceledBlock:(id)arg1 ;
-(NSSet *)gestures;
-(NSSet *)tapExcludedViews;
-(void)cancelGestureRecognizer:(id)arg1 ;
-(void)reenableGestureRecognizer:(id)arg1 ;
-(void)cancelAnimation;
-(void)setPrepareBlock:(id)arg1 ;
-(void)_createAnimator;
-(void)_addTapRecognizer;
-(void)_removeAnimator;
-(void)_resetAnimator;
-(void)_removeTapRecognizer;
-(void)_beginAnimating:(id)arg1 ;
-(id)shouldBeginBlock;
-(id)prepareBlock;
-(id)translateBlock;
-(id)canceledBlock;
-(id)completedBlock;
-(id<SBPresentingDelegate>)presentingDelegate;
-(void)setPresentingDelegate:(id<SBPresentingDelegate>)arg1 ;
-(void)dealloc;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(SBBounceSettings *)settings;
-(void)_handleTapGesture:(id)arg1 ;
-(char)isAnimating;
-(id)initWithView:(id)arg1 ;
-(void)dynamicAnimatorDidPause:(id)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)setSettings:(SBBounceSettings *)arg1 ;
-(void)_updateSettings;
@end


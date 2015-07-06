/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:03 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewControllerInteractiveTransitioning.h>

@class NSString, NSUUID;

@interface UIPercentDrivenInteractiveTransition : NSObject <UIViewControllerInteractiveTransitioning> {

	float _duration;
	char _didCommitAnimations;
	char __transitionInterrupted;
	float _completionSpeed;
	int _completionCurve;
	NSString* __originalFillMode;
	NSUUID* __uuid;

}

@property (readonly) float duration; 
@property (readonly) float percentComplete; 
@property (assign,nonatomic) float completionSpeed;                                                                                      //@synthesize completionSpeed=_completionSpeed - In the implementation block
@property (assign,nonatomic) int completionCurve;                                                                                        //@synthesize completionCurve=_completionCurve - In the implementation block
@property (setter=_setOriginalFillMode:,nonatomic,retain) NSString * _originalFillMode;                                                  //@synthesize _originalFillMode=__originalFillMode - In the implementation block
@property (setter=_setUuid:,nonatomic,retain) NSUUID * _uuid;                                                                            //@synthesize _uuid=__uuid - In the implementation block
@property (assign,setter=_setTransitionInterrupted:,getter=_isTransitionInterrupted,nonatomic) char _transitionInterrupted;              //@synthesize _transitionInterrupted=__transitionInterrupted - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)_resetInteractionController;
-(void)cancelInteractiveTransition;
-(void)finishInteractiveTransition;
-(void)_stopInteractiveTransition;
-(float)percentComplete;
-(void)startInteractiveTransition:(id)arg1 ;
-(void)updateInteractiveTransition:(float)arg1 ;
-(float)duration;
-(void)setCompletionSpeed:(float)arg1 ;
-(void)_setDuration:(float)arg1 ;
-(NSUUID *)_uuid;
-(int)completionCurve;
-(void)setCompletionCurve:(int)arg1 ;
-(float)completionSpeed;
-(void)_setOriginalFillMode:(id)arg1 ;
-(void)_setUuid:(id)arg1 ;
-(char)_isTransitionInterrupted;
-(void)_setTransitionInterrupted:(char)arg1 ;
-(void)_stopInteractiveTransition:(id)arg1 ;
-(void)_updateInteractiveTransition:(id)arg1 percent:(float)arg2 isFinished:(char)arg3 didComplete:(char)arg4 ;
-(void)startInteractiveTransition:(id)arg1 containerViews:(id)arg2 animation:(/*^block*/id)arg3 ;
-(NSString *)_originalFillMode;
@end


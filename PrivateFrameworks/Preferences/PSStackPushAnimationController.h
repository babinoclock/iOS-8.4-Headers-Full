/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:11 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class NSArray, NSMutableArray, UINavigationController, NSString;

@interface PSStackPushAnimationController : NSObject <UIViewControllerAnimatedTransitioning> {

	NSArray* _snapshots;
	NSMutableArray* _animationsToRunAlongsideToVC;
	char _hasStartedAnimation;
	NSArray* _viewControllers;
	UINavigationController* _navigationController;
	/*^block*/id _completionBlock;
	int _animationPreset;
	float _springDamping;
	double _startStagger;
	double _completionStagger;
	double _pushDuration;

}

@property (nonatomic,retain) NSArray * viewControllers;                                  //@synthesize viewControllers=_viewControllers - In the implementation block
@property (assign,nonatomic) UINavigationController * navigationController;              //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,copy) id completionBlock;                                           //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign,nonatomic) int animationPreset;                                        //@synthesize animationPreset=_animationPreset - In the implementation block
@property (assign,nonatomic) double startStagger;                                        //@synthesize startStagger=_startStagger - In the implementation block
@property (assign,nonatomic) double completionStagger;                                   //@synthesize completionStagger=_completionStagger - In the implementation block
@property (assign,nonatomic) double pushDuration;                                        //@synthesize pushDuration=_pushDuration - In the implementation block
@property (assign,nonatomic) float springDamping;                                        //@synthesize springDamping=_springDamping - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)controllerWithViewControllerStack:(id)arg1 navigationController:(id)arg2 ;
+(id)_snapshotOfViewController:(id)arg1 withNavigationBar:(id)arg2 prevViewController:(id)arg3 ;
+(id)_animationParametersForPreset:(int)arg1 ;
+(void)setDefaultAnimationPreset:(int)arg1 ;
+(void)resetDefaultAnimationParameters;
-(double)pushDuration;
-(void)dealloc;
-(id)init;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)animationEnded:(char)arg1 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(UINavigationController *)navigationController;
-(NSArray *)viewControllers;
-(void)setViewControllers:(NSArray *)arg1 ;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(void)animateAlongsideToViewController:(/*^block*/id)arg1 ;
-(void)_loadDefaultValues;
-(char)_shouldSkipFirstPush;
-(double)_desiredDuration;
-(double)_actualDuration;
-(void)_addAnimation:(/*^block*/id)arg1 forViewAtIndex:(unsigned)arg2 count:(unsigned)arg3 ;
-(id)_valueForAnimationParameter:(id)arg1 ;
-(int)animationPreset;
-(void)setAnimationPreset:(int)arg1 ;
-(double)startStagger;
-(void)setStartStagger:(double)arg1 ;
-(double)completionStagger;
-(void)setCompletionStagger:(double)arg1 ;
-(void)setPushDuration:(double)arg1 ;
-(float)springDamping;
-(void)setSpringDamping:(float)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:32 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
@class SUViewController;

@interface SURotationController : NSObject {

	SUViewController* _viewController;

}

@property (assign,nonatomic) SUViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
-(void)dealloc;
-(id)init;
-(void)setViewController:(SUViewController *)arg1 ;
-(SUViewController *)viewController;
-(void)finishRotationFromInterfaceOrientation:(int)arg1 ;
-(id)initWithViewController:(id)arg1 ;
-(void)animateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)prepareToRotateToInterfaceOrientation:(int)arg1 ;
-(char)orientationAffectsViewFrame;
-(CGRect)viewFrameForInterfaceOrientation:(int)arg1 ;
@end


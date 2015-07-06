/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:40 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class SKUIStackedBar, NSString;

@interface SKUIStackedPushTransition : NSObject <UIViewControllerAnimatedTransitioning> {

	float _split;
	SKUIStackedBar* _fromBar;
	SKUIStackedBar* _toBar;

}

@property (nonatomic,retain) SKUIStackedBar * fromBar;              //@synthesize fromBar=_fromBar - In the implementation block
@property (nonatomic,retain) SKUIStackedBar * toBar;                //@synthesize toBar=_toBar - In the implementation block
@property (assign,nonatomic) float split;                           //@synthesize split=_split - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(float)split;
-(void)setSplit:(float)arg1 ;
-(SKUIStackedBar *)fromBar;
-(void)setFromBar:(SKUIStackedBar *)arg1 ;
-(SKUIStackedBar *)toBar;
-(void)setToBar:(SKUIStackedBar *)arg1 ;
@end


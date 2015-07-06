/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:50 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIViewControllerAnimatorTransitioning.h>

@class UIImageView, NSString;

@interface SKUISlideshowDismissalAnimator : NSObject <UIViewControllerAnimatorTransitioning> {

	UIImageView* _imageView;
	CGRect _imageRect;

}

@property (nonatomic,retain) UIImageView * imageView;               //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) CGRect imageRect;                      //@synthesize imageRect=_imageRect - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)animationEnded:(char)arg1 ;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(CGRect)imageRect;
-(void)setImageRect:(CGRect)arg1 ;
@end


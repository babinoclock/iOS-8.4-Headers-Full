/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:32 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Sharing/Sharing-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface SFCircleProgressView : UIView

@property (assign,nonatomic) int progressStartPoint; 
@property (nonatomic,readonly) UIColor * progressColor; 
@property (assign,nonatomic) float progressLineWidth; 
@property (assign,nonatomic) char showProgressTray; 
@property (assign,nonatomic) float progress; 
+(Class)layerClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setProgress:(float)arg1 ;
-(float)progress;
-(float)progressLineWidth;
-(void)setProgressLineWidth:(float)arg1 ;
-(void)setProgressStartPoint:(int)arg1 ;
-(void)setProgressColor:(UIColor *)arg1 ;
-(void)setShowProgressTray:(char)arg1 ;
-(int)progressStartPoint;
-(UIColor *)progressColor;
-(char)showProgressTray;
-(void)setProgress:(float)arg1 animated:(char)arg2 forced:(char)arg3 completion:(/*^block*/id)arg4 ;
-(float)progressPresentationValue;
-(void)setProgress:(float)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)animateProgressCompletedWithCompletion:(/*^block*/id)arg1 ;
@end


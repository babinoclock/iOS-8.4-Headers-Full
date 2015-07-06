/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:41 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class UIColor, UIImage;


@protocol _UISwitchInternalViewProtocol <NSObject>
@property (nonatomic,retain) UIColor * onTintColor; 
@property (nonatomic,retain) UIColor * tintColor; 
@property (nonatomic,retain) UIColor * thumbTintColor; 
@property (nonatomic,retain) UIImage * onImage; 
@property (nonatomic,retain) UIImage * offImage; 
@property (assign,nonatomic) char on; 
@property (assign,nonatomic) char useAlternateColor; 
@required
-(UIColor *)tintColor;
-(void)setTintColor:(id)arg1;
-(void)_setPressed:(char)arg1;
-(void)setThumbTintColor:(id)arg1;
-(UIColor *)thumbTintColor;
-(void)_setOn:(char)arg1 animated:(char)arg2 force:(char)arg3;
-(void)_cleanUpAfterAnimating;
-(void)_setProgress:(float)arg1 animated:(char)arg2 withDuration:(float)arg3 force:(char)arg4 sendAction:(char)arg5;
-(void)_setProgress:(float)arg1;
-(void)_prepareForInteraction;
-(void)setSendAction:(char)arg1;
-(void)_setPressed:(char)arg1 on:(char)arg2 animated:(char)arg3 shouldAnimateLabels:(char)arg4 completion:(/*^block*/id)arg5;
-(UIColor *)onTintColor;
-(void)setOnTintColor:(id)arg1;
-(UIImage *)onImage;
-(void)setOnImage:(id)arg1;
-(UIImage *)offImage;
-(void)setOffImage:(id)arg1;
-(char)on;
-(void)setOn:(char)arg1;
-(char)useAlternateColor;
-(void)setUseAlternateColor:(char)arg1;

@end


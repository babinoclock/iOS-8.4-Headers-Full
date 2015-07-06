/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:49 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView, NSDictionary;

@interface UIDropShadowView : UIView {

	float _cornerRadius;
	UIView* _contentView;
	UIView* _backgroundImage;
	NSDictionary* _preservedLayerValues;

}

@property (assign) float cornerRadius;                          //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) UIView * contentView;              //@synthesize contentView=_contentView - In the implementation block
-(void)dealloc;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(float)cornerRadius;
-(void)setCornerRadius:(float)arg1 ;
-(void)willBeginRotationWithOriginalBounds:(CGRect)arg1 newBounds:(CGRect)arg2 ;
-(void)didFinishRotation;
-(void)updateShadowPath;
@end


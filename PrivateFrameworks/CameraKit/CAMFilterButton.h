/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:42 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKit/UIButton.h>

@class UIImageView;

@interface CAMFilterButton : UIButton {

	UIImageView* __circlesImageView;
	UIEdgeInsets _tappableEdgeInsets;

}

@property (assign,getter=isOn,nonatomic) char on; 
@property (assign,nonatomic) UIEdgeInsets tappableEdgeInsets;                //@synthesize tappableEdgeInsets=_tappableEdgeInsets - In the implementation block
@property (nonatomic,readonly) UIImageView * _circlesImageView;              //@synthesize _circlesImageView=__circlesImageView - In the implementation block
+(id)filterButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(CGSize)intrinsicContentSize;
-(void)setOn:(char)arg1 ;
-(char)isOn;
-(float)_selectedIndicatorAlpha;
-(void)setTappableEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)tappableEdgeInsets;
-(id)_filterImage;
-(id)_filterOnImage;
-(void)_commonCAMFilterButtonInitialization;
-(UIImageView *)_circlesImageView;
@end


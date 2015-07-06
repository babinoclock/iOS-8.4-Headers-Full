/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:31 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIImageView;

@interface _MKCalloutBackgroundMaskView : UIView {

	UIView* _baseView;
	UIImageView* _topArrow;
	UIImageView* _bottomArrow;
	UIImageView* _leftArrow;
	UIImageView* _rightArrow;
	UIView* _currentArrowContainer;

}

@property (nonatomic,readonly) UIView * baseView;                           //@synthesize baseView=_baseView - In the implementation block
@property (nonatomic,readonly) UIImageView * topArrow;                      //@synthesize topArrow=_topArrow - In the implementation block
@property (nonatomic,readonly) UIImageView * bottomArrow;                   //@synthesize bottomArrow=_bottomArrow - In the implementation block
@property (nonatomic,readonly) UIImageView * leftArrow;                     //@synthesize leftArrow=_leftArrow - In the implementation block
@property (nonatomic,readonly) UIImageView * rightArrow;                    //@synthesize rightArrow=_rightArrow - In the implementation block
@property (nonatomic,readonly) UIView * currentArrowContainer;              //@synthesize currentArrowContainer=_currentArrowContainer - In the implementation block
-(void)_setupViews;
-(UIView *)baseView;
-(UIView *)currentArrowContainer;
-(void)_removeArrows;
-(UIImageView *)bottomArrow;
-(UIImageView *)leftArrow;
-(UIImageView *)rightArrow;
-(UIImageView *)topArrow;
-(id)initWithFrame:(CGRect)arg1 ;
@end


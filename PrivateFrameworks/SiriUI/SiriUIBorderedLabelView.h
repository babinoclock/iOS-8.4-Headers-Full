/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:33 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UILabel, UIFont;

@interface SiriUIBorderedLabelView : UIView {

	UIImageView* _borderImageView;
	UILabel* _ratingLabel;
	UIFont* _font;
	UIEdgeInsets _edgeInsets;

}

@property (assign,nonatomic) UIEdgeInsets edgeInsets;              //@synthesize edgeInsets=_edgeInsets - In the implementation block
+(UIEdgeInsets)_defaultEdgeInsets;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(CGSize)_borderSize;
-(id)initWithText:(id)arg1 font:(id)arg2 borderColor:(id)arg3 ;
-(float)baselineOffsetFromTopOfFrame;
@end


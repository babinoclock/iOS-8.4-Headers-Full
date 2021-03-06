/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:34 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SportsTrainer.framework/SportsTrainer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SportsTrainer/SportsTrainer-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface STValueUnitLabel : UIView {

	UILabel* _leftLabel;
	UILabel* _rightLabel;
	float _labelSpacing;
	int _textAlignment;
	unsigned _reversesLabels : 1;
	unsigned _forceLayout : 1;
	unsigned _verticalArrangement : 1;

}

@property (nonatomic,readonly) UILabel * leftLabel;                 //@synthesize leftLabel=_leftLabel - In the implementation block
@property (nonatomic,readonly) UILabel * rightLabel;                //@synthesize rightLabel=_rightLabel - In the implementation block
@property (assign,nonatomic) float labelSpacing;                    //@synthesize labelSpacing=_labelSpacing - In the implementation block
@property (assign,nonatomic) int textAlignment;                     //@synthesize textAlignment=_textAlignment - In the implementation block
@property (assign,nonatomic) char reversesLabels; 
@property (assign,nonatomic) char verticalArrangement; 
-(UILabel *)leftLabel;
-(UILabel *)rightLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setNeedsDisplay;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setTextAlignment:(int)arg1 ;
-(void)sizeToFit;
-(int)textAlignment;
-(void)setReversesLabels:(char)arg1 ;
-(void)setVerticalArrangement:(char)arg1 ;
-(char)verticalArrangement;
-(void)_sizeLabelsToFit;
-(char)_labelsNeedSizing;
-(char)reversesLabels;
-(float)labelSpacing;
-(void)setLabelSpacing:(float)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:18 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RadioUI/RadioUI-Structs.h>
#import <UIKit/UIButton.h>

@protocol RUConfirmButtonDelegate;
@class UIImageView, RUFocusedTouchGestureRecognizer, NSMutableDictionary, UILabel;

@interface RUConfirmButton : UIButton {

	UIImageView* _confirmBackgroundImageView;
	UIImageView* _defaultBackgroundImageView;
	RUFocusedTouchGestureRecognizer* _focusedTouchGestureRecognizer;
	NSMutableDictionary* _fontByControlState;
	NSMutableDictionary* _shadowOffsetByControlState;
	char _attemptsToUseMaximumSize;
	char _showingConfirmation;
	UILabel* _confirmLabel;
	UILabel* _defaultLabel;
	id<RUConfirmButtonDelegate> _delegate;
	UIEdgeInsets _touchAllowance;

}

@property (assign,nonatomic) char attemptsToUseMaximumSize;                                      //@synthesize attemptsToUseMaximumSize=_attemptsToUseMaximumSize - In the implementation block
@property (nonatomic,readonly) UILabel * confirmLabel;                                           //@synthesize confirmLabel=_confirmLabel - In the implementation block
@property (assign,nonatomic) Class confirmLabelClass; 
@property (nonatomic,readonly) UILabel * defaultLabel;                                           //@synthesize defaultLabel=_defaultLabel - In the implementation block
@property (assign,nonatomic) Class defaultLabelClass; 
@property (assign,nonatomic) id<RUConfirmButtonDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isShowingConfirmation,nonatomic) char showingConfirmation;              //@synthesize showingConfirmation=_showingConfirmation - In the implementation block
@property (assign,nonatomic) UIEdgeInsets touchAllowance;                                        //@synthesize touchAllowance=_touchAllowance - In the implementation block
+(id)confirmButton;
-(UILabel *)defaultLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<RUConfirmButtonDelegate>)arg1 ;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<RUConfirmButtonDelegate>)delegate;
-(unsigned)state;
-(void)_touchUpInsideAction:(id)arg1 ;
-(void)_gestureRecognizerChangedStateAction:(id)arg1 ;
-(void)_styleLabel:(id)arg1 forState:(unsigned)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 forControlState:(unsigned)arg2 ;
-(id)_objectForState:(unsigned)arg1 inDictionary:(id)arg2 ;
-(void)setShowingConfirmation:(char)arg1 animationDuration:(double)arg2 animationDelay:(double)arg3 animationOptions:(unsigned)arg4 animationCompletionHandler:(/*^block*/id)arg5 ;
-(CGSize)_sizeThatFits:(CGSize)arg1 forControlState:(unsigned)arg2 ;
-(void)_animatedSetShowingConfirmation:(char)arg1 ;
-(id)fontForState:(unsigned)arg1 ;
-(CGSize)titleShadowOffsetForState:(unsigned)arg1 ;
-(Class)confirmLabelClass;
-(Class)defaultLabelClass;
-(void)setConfirmLabelClass:(Class)arg1 ;
-(void)setDefaultLabelClass:(Class)arg1 ;
-(void)setFont:(id)arg1 forState:(unsigned)arg2 ;
-(void)setTitleShadowOffset:(CGSize)arg1 forState:(unsigned)arg2 ;
-(char)attemptsToUseMaximumSize;
-(void)setAttemptsToUseMaximumSize:(char)arg1 ;
-(UILabel *)confirmLabel;
-(UIEdgeInsets)touchAllowance;
-(void)setTouchAllowance:(UIEdgeInsets)arg1 ;
-(char)isShowingConfirmation;
-(void)setShowingConfirmation:(char)arg1 ;
@end


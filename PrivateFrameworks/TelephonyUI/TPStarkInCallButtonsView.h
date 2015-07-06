/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:01 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKit/UIView.h>

@protocol TPStarkInCallButtonsViewDelegate;
@class NSMutableDictionary, NSArray, NSMutableArray;

@interface TPStarkInCallButtonsView : UIView {

	int _highlightedControlIndex;
	int _buttonsMode;
	id<TPStarkInCallButtonsViewDelegate> _delegate;
	float _buttonDistributionScalingFactor;
	NSMutableDictionary* _buttonsDictionary;
	NSArray* _buttonsArray;
	NSMutableArray* _buttonDividerViews;

}

@property (assign) int buttonsMode;                                            //@synthesize buttonsMode=_buttonsMode - In the implementation block
@property (assign) id<TPStarkInCallButtonsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int highlightedControlIndex; 
@property (readonly) int numberOfControls; 
@property (assign) float buttonDistributionScalingFactor;                      //@synthesize buttonDistributionScalingFactor=_buttonDistributionScalingFactor - In the implementation block
@property (retain) NSMutableDictionary * buttonsDictionary;                    //@synthesize buttonsDictionary=_buttonsDictionary - In the implementation block
@property (retain) NSArray * buttonsArray;                                     //@synthesize buttonsArray=_buttonsArray - In the implementation block
@property (retain) NSMutableArray * buttonDividerViews;                        //@synthesize buttonDividerViews=_buttonDividerViews - In the implementation block
-(void)setMuted:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<TPStarkInCallButtonsViewDelegate>)arg1 ;
-(id<TPStarkInCallButtonsViewDelegate>)delegate;
-(char)canBecomeFirstResponder;
-(char)shouldShowActionTypeSendToVoicemail;
-(void)setButtonsMode:(int)arg1 animated:(char)arg2 ;
-(void)setHighlightedControlIndex:(int)arg1 ;
-(int)highlightedControlIndex;
-(int)nextHighlightableControlFromIndex:(int)arg1 ascending:(char)arg2 ;
-(int)numberOfControls;
-(void)performActionForHighlightedControl;
-(void)setButtonDistributionScalingFactor:(float)arg1 ;
-(void)setButtonsDictionary:(NSMutableDictionary *)arg1 ;
-(void)setButtonDividerViews:(NSMutableArray *)arg1 ;
-(void)callCenterModelStateChangedNotification:(id)arg1 ;
-(void)phoneCallStatusChangedNotification:(id)arg1 ;
-(NSArray *)buttonsArray;
-(void)buttonWasTapped:(id)arg1 ;
-(id)buttonForButtonType:(int)arg1 createIfNecessary:(char)arg2 createWithHorizontalPositionFraction:(float)arg3 ;
-(void)setButtonsArray:(NSArray *)arg1 ;
-(id)existingButtonsNotInArray:(id)arg1 ;
-(void)applyHorizontalPositioningConstraintWithFraction:(float)arg1 forButton:(id)arg2 ;
-(NSMutableArray *)buttonDividerViews;
-(void)applyHorizontalPositioningConstraintWithFraction:(float)arg1 forDividerView:(id)arg2 ;
-(void)removeButtons:(id)arg1 ;
-(void)updateButtonsForCallModelState;
-(NSMutableDictionary *)buttonsDictionary;
-(float)distributedFractionForUndistributedFraction:(float)arg1 ;
-(float)buttonDistributionScalingFactor;
-(id)keyForButtonType:(int)arg1 ;
-(int)buttonsMode;
-(void)setButtonsMode:(int)arg1 ;
@end


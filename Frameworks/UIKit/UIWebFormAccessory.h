/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:50 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIInputView.h>

@protocol UIWebFormAccessoryDelegate;
@class UIToolbar, UIBarButtonItem, UISegmentedControl;

@interface UIWebFormAccessory : UIInputView {

	UIToolbar* _leftToolbar;
	UIToolbar* _rightToolbar;
	UIBarButtonItem* _doneButton;
	UIBarButtonItem* _flexibleSpaceItem;
	UIBarButtonItem* _previousItem;
	UIBarButtonItem* _nextItem;
	UISegmentedControl* _tab;
	UIBarButtonItem* _autofill;
	UIBarButtonItem* _clearButton;
	id<UIWebFormAccessoryDelegate> delegate;

}

@property (nonatomic,retain) UISegmentedControl * _tab;                                  //@synthesize tab=_tab - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * _autofill;                                //@synthesize autofill=_autofill - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * _clearButton;                             //@synthesize clearButton=_clearButton - In the implementation block
@property (assign,nonatomic) id<UIWebFormAccessoryDelegate> delegate; 
@property (assign,getter=isNextEnabled,nonatomic) char nextEnabled; 
@property (assign,getter=isPreviousEnabled,nonatomic) char previousEnabled; 
+(id)toolbarWithItems:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<UIWebFormAccessoryDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<UIWebFormAccessoryDelegate>)delegate;
-(void)_setRenderConfig:(id)arg1 ;
-(UIBarButtonItem *)_clearButton;
-(void)_tabSegmentedControlDidChange:(id)arg1 ;
-(void)_previousTapped:(id)arg1 ;
-(void)_nextTapped:(id)arg1 ;
-(void)done:(id)arg1 ;
-(void)_updateFrame;
-(void)_orientationDidChange:(id)arg1 ;
-(void)_refreshAutofillPresentation;
-(void)_applyTreatmentToAutoFillLabel;
-(id)_autoFillButton;
-(void)set_autofill:(UIBarButtonItem *)arg1 ;
-(void)autoFill:(id)arg1 ;
-(void)showAutoFillButtonWithTitle:(id)arg1 ;
-(void)clear:(id)arg1 ;
-(void)set_clearButton:(UIBarButtonItem *)arg1 ;
-(void)hideAutoFillButton;
-(void)showAutoFillButton;
-(void)setClearVisible:(char)arg1 ;
-(void)setNextEnabled:(char)arg1 ;
-(char)isNextEnabled;
-(void)setPreviousEnabled:(char)arg1 ;
-(char)isPreviousEnabled;
-(UISegmentedControl *)_tab;
-(void)set_tab:(UISegmentedControl *)arg1 ;
-(UIBarButtonItem *)_autofill;
@end

/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:43 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UITextField.h>

@class NSMutableDictionary, NSValue, _UISearchBarSearchFieldBackgroundView;

@interface UISearchBarTextField : UITextField {

	NSMutableDictionary* _customClearButtons;
	NSMutableDictionary* _iconOffsets;
	NSValue* _searchTextOffsetValue;
	_UISearchBarSearchFieldBackgroundView* _effectBackgroundTop;
	_UISearchBarSearchFieldBackgroundView* _effectBackgroundBottom;
	char _deferringFirstResponder;
	char _animatePlaceholderOnResignFirstResponder;
	char __preventSelectionViewActivation;

}

@property (setter=_setSearchTextOffetValue:,nonatomic,retain) NSValue * _searchTextOffsetValue; 
@property (assign,setter=_setPreventSelectionViewActivation:,nonatomic) char _preventSelectionViewActivation;              //@synthesize _preventSelectionViewActivation=__preventSelectionViewActivation - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(char)resignFirstResponder;
-(char)_becomeFirstResponderWhenPossible;
-(char)canBecomeFirstResponder;
-(void)tintColorDidChange;
-(char)_hasActionForEventMask:(int)arg1 ;
-(id)textInputTraits;
-(CGRect)editingRectForBounds:(CGRect)arg1 ;
-(void)_becomeFirstResponder;
-(char)canResignFirstResponder;
-(CGRect)textRectForBounds:(CGRect)arg1 ;
-(CGRect)rightViewRectForBounds:(CGRect)arg1 ;
-(id)_placeholderColor;
-(char)_shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged;
-(void)_setClearButtonImage:(id)arg1 forState:(unsigned)arg2 ;
-(void)_setSearchTextOffetValue:(id)arg1 ;
-(NSValue *)_searchTextOffsetValue;
-(void)_setOffsetValue:(id)arg1 forIcon:(int)arg2 ;
-(id)_offsetValueForIcon:(int)arg1 ;
-(CGRect)leftViewRectForBounds:(CGRect)arg1 ;
-(void)updateForBackdropStyle:(unsigned)arg1 ;
-(void)_removeEffectsBackgroundViews;
-(void)_setPreventSelectionViewActivation:(char)arg1 ;
-(void)_activateSelectionView;
-(void)_setEnabled:(char)arg1 animated:(char)arg2 ;
-(void)_setBottomEffectBackgroundVisible:(char)arg1 ;
-(id)_clearButtonImageForState:(unsigned)arg1 ;
-(CGRect)_adjustedTextOrEditingRect:(CGRect)arg1 forBounds:(CGRect)arg2 ;
-(CGRect)_adjustmentsForLeftViewRectForBounds:(CGRect)arg1 ;
-(char)_shouldCenterPlaceholder;
-(CGRect)placeholderRectForBounds:(CGRect)arg1 ;
-(CGSize)_clearButtonSize;
-(CGRect)clearButtonRectForBounds:(CGRect)arg1 ;
-(CGRect)_availableTextRectForBounds:(CGRect)arg1 forEditing:(char)arg2 ;
-(CGRect)_suffixFrame;
-(void)_updateBackgroundView:(id)arg1 withStyle:(unsigned)arg2 filter:(id)arg3 ;
-(id)_createEffectsBackgroundViewWithStyle:(unsigned)arg1 applyFilter:(id)arg2 ;
-(void)_updateBackgroundViewsAnimated:(char)arg1 ;
-(void)_clearBackgroundViews;
-(char)_preventSelectionViewActivation;
-(int)_suffixLabelTextAlignment;
-(Class)_placeholderLabelClass;
-(Class)_systemBackgroundViewClass;
@end


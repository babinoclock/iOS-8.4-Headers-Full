/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:35:59 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIAccessibilityElement.h>

@class UITextField;

@interface UIAccessibilityTextFieldElement : UIAccessibilityElement {

	UITextField* _textField;

}

@property (assign,nonatomic) UITextField * textField;              //@synthesize textField=_textField - In the implementation block
-(char)_accessibilityIsSpeakThisElement;
-(char)_accessibilityIsScannerElement;
-(id)_accessibilityTextViewTextOperationResponder;
-(id)_accessibilityTextOperations;
-(void)_accessibilityCopy;
-(void)_accessibilityCut;
-(void)_accessibilitySelect;
-(void)_accessibilityPaste;
-(void)_accessibilitySelectAll;
-(char)_accessibilityHasTextOperations;
-(id)_accessibilitySpeakThisString;
-(id)_accessibilityUserTestingParent;
-(void)_accessibilityDelete;
-(void)_accessibilityReplace;
-(char)_accessibilityOverridesInstructionsHint;
-(void)_accessibilitySetIsSpeakThisElement:(char)arg1 ;
-(id)_accessibilityHandwritingAttributes;
-(id)accessibilityLabel;
-(UITextField *)textField;
-(CGRect)accessibilityFrame;
-(id)accessibilityValue;
-(id)accessibilityHint;
-(CGPoint)accessibilityActivationPoint;
-(unsigned long long)accessibilityTraits;
-(id)accessibilityLanguage;
-(char)accessibilityElementsHidden;
-(char)accessibilityPerformEscape;
-(char)accessibilityPerformMagicTap;
-(void)setTextField:(UITextField *)arg1 ;
-(id)accessibilityPlaceholderValue;
-(void)_accessibilitySetValue:(id)arg1 ;
-(NSRange)_accessibilitySelectedTextRange;
-(void)_accessibilitySetSelectedTextRange:(NSRange)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:50 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UIView, UIResponder, UIInputViewController, UIKeyboard;

@interface UIInputViewSet : NSObject {

	UIView* _inputView;
	UIView* _inputAccessoryView;
	char _isSplit;
	float _splitHeightDelta;
	UIResponder* _restorableResponder;
	char _restoreUsingBecomeFirstResponder;
	UIInputViewController* _inputViewController;
	UIInputViewController* _accessoryViewController;

}

@property (nonatomic,readonly) UIKeyboard * keyboard; 
@property (nonatomic,retain) UIView * inputView;                                           //@synthesize inputView=_inputView - In the implementation block
@property (nonatomic,retain) UIView * inputAccessoryView;                                  //@synthesize inputAccessoryView=_inputAccessoryView - In the implementation block
@property (nonatomic,retain) UIInputViewController * inputViewController;                  //@synthesize inputViewController=_inputViewController - In the implementation block
@property (nonatomic,retain) UIInputViewController * accessoryViewController;              //@synthesize accessoryViewController=_accessoryViewController - In the implementation block
@property (nonatomic,readonly) CGRect inputAccessoryViewBounds; 
@property (nonatomic,readonly) CGRect inputViewBounds; 
@property (getter=isEmpty,nonatomic,readonly) char empty; 
@property (nonatomic,readonly) char supportsSplit; 
@property (nonatomic,readonly) char isSplit;                                               //@synthesize isSplit=_isSplit - In the implementation block
@property (nonatomic,readonly) char inputViewKeyboardCanSplit; 
@property (assign,nonatomic) UIResponder * restorableResponder;                            //@synthesize restorableResponder=_restorableResponder - In the implementation block
@property (nonatomic,readonly) char isInputViewPlaceholder; 
@property (nonatomic,readonly) char isInputAccessoryViewPlaceholder; 
@property (nonatomic,readonly) char _inputViewIsSplit; 
@property (assign,nonatomic) float splitHeightDelta;                                       //@synthesize splitHeightDelta=_splitHeightDelta - In the implementation block
@property (nonatomic,readonly) UIView * splitExemptSubview; 
@property (assign,nonatomic) char restoreUsingBecomeFirstResponder; 
@property (nonatomic,readonly) UIView * layeringView; 
+(id)emptyInputSet;
+(id)inputSetWithKeyboardAndAccessoryView:(id)arg1 ;
+(id)inputSetWithInputView:(id)arg1 accessoryView:(id)arg2 ;
+(id)inputSetWithPlaceholderAndAccessoryView:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(char)isSplit;
-(char)isEmpty;
-(char)containsView:(id)arg1 ;
-(UIInputViewController *)accessoryViewController;
-(UIView *)inputView;
-(UIView *)inputAccessoryView;
-(UIInputViewController *)inputViewController;
-(void)setInputView:(UIView *)arg1 ;
-(void)setInputAccessoryView:(UIView *)arg1 ;
-(void)_setRenderConfig:(id)arg1 ;
-(CGRect)inputViewBounds;
-(CGRect)inputAccessoryViewBounds;
-(char)supportsSplit;
-(void)refreshPresentation;
-(UIKeyboard *)keyboard;
-(char)visible;
-(id)_themableInputAccessoryView;
-(int)keyboardOrientation:(id)arg1 ;
-(char)inputViewKeyboardCanSplit;
-(char)_inputViewIsSplit;
-(char)_accessorySuppressesShadow;
-(UIView *)layeringView;
-(CGRect)_leftInputViewSetFrame;
-(CGRect)_rightInputViewSetFrame;
-(void)setSplitHeightDelta:(float)arg1 ;
-(char)setAccessoryViewVisible:(char)arg1 delay:(float)arg2 ;
-(void)_beginSplitTransitionIfNeeded;
-(void)_setSplitProgress:(float)arg1 ;
-(void)_endSplitTransitionIfNeeded;
-(float)splitHeightDelta;
-(char)isStrictSupersetOfViewSet:(id)arg1 ;
-(char)isInputViewPlaceholder;
-(char)containsResponder:(id)arg1 ;
-(id)_splittableInputAccessoryView;
-(char)canAnimateToInputViewSet:(id)arg1 ;
-(void)setInputViewController:(UIInputViewController *)arg1 ;
-(void)setAccessoryViewController:(UIInputViewController *)arg1 ;
-(char)usesKeyClicks;
-(void)setRestorableResponder:(UIResponder *)arg1 ;
-(void)setRestoreUsingBecomeFirstResponder:(char)arg1 ;
-(UIResponder *)restorableResponder;
-(char)restoreUsingBecomeFirstResponder;
-(char)_inputViewSetSupportsSplit;
-(id)initWithInputView:(id)arg1 accessoryView:(id)arg2 isKeyboard:(char)arg3 ;
-(char)_inputViewIsVisible;
-(char)_isKeyboard;
-(char)_inputViewSupportsSplit;
-(char)_inputAccessoryViewSupportsSplit;
-(char)__isCKAccessoryView;
-(id)inputSetWithInputAccessoryViewOnly;
-(UIView *)splitExemptSubview;
-(char)inSyncWithOrientation:(int)arg1 forKeyboard:(id)arg2 ;
-(char)isInputAccessoryViewPlaceholder;
@end


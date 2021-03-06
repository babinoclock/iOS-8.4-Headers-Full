/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:34 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UITextInput_Internal.h>
#import <UIKit/UITextInputAdditions.h>
#import <UIKit/_UIStateRestorationContinuation.h>

@class UIView, UIInputViewController, UITextInputMode, NSString, NSArray, NSUserActivity, NSUndoManager;

@interface UIResponder : NSObject <UITextInput_Internal, UITextInputAdditions, _UIStateRestorationContinuation>

@property (nonatomic,retain,readonly) UIView * inputView; 
@property (nonatomic,retain,readonly) UIView * inputAccessoryView; 
@property (nonatomic,retain,readonly) UIInputViewController * inputViewController; 
@property (nonatomic,retain,readonly) UIInputViewController * inputAccessoryViewController; 
@property (nonatomic,retain,readonly) UITextInputMode * textInputMode; 
@property (nonatomic,retain,readonly) NSString * textInputContextIdentifier; 
@property (nonatomic,readonly) NSArray * keyCommands; 
@property (nonatomic,readonly) UIResponder * _editingDelegate; 
@property (nonatomic,readonly) UIResponder * _responderForEditing; 
@property (nonatomic,retain) NSUserActivity * userActivity; 
@property (getter=_proxyTextInput,nonatomic,readonly) UIResponder*<UITextInput> __content; 
@property (nonatomic,readonly) UIView*<UITextInputPrivate> _textSelectingContainer; 
@property (getter=isEditable,nonatomic,readonly) char editable; 
@property (getter=isEditing,nonatomic,readonly) char editing; 
@property (getter=_caretRect,nonatomic,readonly) CGRect caretRect; 
@property (nonatomic,copy) NSString * restorationIdentifier; 
@property (nonatomic,readonly) NSUndoManager * undoManager; 
+(void)_startDeferredTrackingObjectsWithIdentifiers;
+(void)_cleanupAllStateRestorationTables;
+(void)_updateStateRestorationIdentifierMap;
+(id)objectWithRestorationIdentifierPath:(id)arg1 ;
+(void)_setRestoredIdentifierPathForObject:(id)arg1 identifierPath:(id)arg2 ;
+(void)_prepareForSecondPassStateRestoration;
+(void)_finishStateRestoration;
+(void)clearTextInputContextIdentifier:(id)arg1 ;
+(void)_stopDeferredTrackingObjectsWithIdentifiers;
+(void)_cleanupStateRestorationObjectIdentifierTrackingTables;
-(id)_accessibilityTextViewTextOperationResponder;
-(id)_accessibilityTextOperations;
-(char)_accessibilityHasTextOperations;
-(char)_accessibilitySupportsRichTextEditing;
-(void)dealloc;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id)nextResponder;
-(id)firstResponder;
-(UIResponder *)_responderForEditing;
-(char)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)targetForAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)_physicalButtonsBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)_physicalButtonsEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)_physicalButtonsCancelled:(id)arg1 withEvent:(id)arg2 ;
-(NSUndoManager *)undoManager;
-(char)resignFirstResponder;
-(id)_deepestUnambiguousResponder;
-(void)updateUserActivityState:(id)arg1 ;
-(void)restoreUserActivityState:(id)arg1 ;
-(void)_handleKeyUIEvent:(id)arg1 ;
-(id)_keyCommandForEvent:(id)arg1 ;
-(void)_handleKeyEvent:(GSEventRef)arg1 ;
-(void)_wheelChangedWithEvent:(id)arg1 ;
-(char)becomeFirstResponder;
-(void)motionEnded:(int)arg1 withEvent:(id)arg2 ;
-(NSArray *)keyCommands;
-(UITextInputMode *)textInputMode;
-(char)_canShowTextServices;
-(id)_showServiceForText:(id)arg1 type:(int)arg2 fromRect:(CGRect)arg3 inView:(id)arg4 ;
-(void)_rebuildStateRestorationIdentifierPath;
-(NSString *)restorationIdentifier;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(id)_restorationIdentifierPath;
-(char)isEditable;
-(void)_setFirstResponder:(id)arg1 ;
-(CGRect)_responderExternalTouchRectForWindow:(id)arg1 ;
-(CGRect)_responderSelectionRectForWindow:(id)arg1 ;
-(id)_window;
-(void)_completeForwardingTouches:(id)arg1 phase:(int)arg2 event:(id)arg3 ;
-(void)_windowResignedKey;
-(void)_windowBecameKey;
-(void)gestureEnded:(GSEventRef)arg1 ;
-(void)_moveWithEvent:(id)arg1 ;
-(char)_disableAutomaticKeyboardBehavior;
-(char)_disableAutomaticKeyboardUI;
-(char)_containedInAbsoluteResponderChain;
-(id)_firstResponder;
-(char)_becomeFirstResponderWhenPossible;
-(char)_supportsBecomeFirstResponderWhenPossible;
-(id)_responderWindow;
-(id)_responderSelectionContainerViewForResponder:(id)arg1 ;
-(void)setRestorationIdentifier:(NSString *)arg1 ;
-(id)_responderForBecomeFirstResponder;
-(id)_nextResponderOverride;
-(char)_containsResponder:(id)arg1 ;
-(char)canBecomeFirstResponder;
-(id)_nextKeyResponder;
-(id)_previousKeyResponder;
-(void)_clearBecomeFirstResponderWhenCapable;
-(char)_canBecomeFirstResponderWhenPossible;
-(id)nextFirstResponder;
-(void)_clearOverrideNextResponder;
-(void)_clearRestorableResponderStatus;
-(char)_resignIfContainsFirstResponder;
-(char)isFirstResponder;
-(char)_isRootForKeyResponderCycle;
-(char)_requiresKeyboardWhenFirstResponder;
-(char)isEditing;
-(char)_isTransitioningFromView:(id)arg1 ;
-(void)_controlTouchBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)_controlTouchMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)_controlTouchEnded:(id)arg1 withEvent:(id)arg2 ;
-(id)interactionAssistant;
-(CGRect)_selectionClipRect;
-(id)textInputView;
-(void)beginSelectionChange;
-(void)endSelectionChange;
-(int)selectionAffinity;
-(UIView*<UITextInputPrivate>)_textSelectingContainer;
-(char)_canBecomeFirstResponder;
-(id)_nextViewControllerInResponderChain;
-(void)_beginPinningInputViews;
-(void)_endPinningInputViews;
-(char)_isViewController;
-(id)_keyCommands;
-(NSUserActivity *)userActivity;
-(void)setUserActivity:(NSUserActivity *)arg1 ;
-(id)_userActivity;
-(UIResponder *)_editingDelegate;
-(char)_canChangeFirstResponder:(id)arg1 toResponder:(id)arg2 ;
-(void)_finishResignFirstResponder;
-(void)_becomeFirstResponder;
-(void)reloadInputViews;
-(void)_resignFirstResponder;
-(char)canResignFirstResponder;
-(id)_targetForAction:(SEL)arg1 withSender:(id)arg2 canPerformActionBlock:(/*^block*/id)arg3 ;
-(void)_overrideInputViewNextResponderWithResponder:(id)arg1 ;
-(void)_overrideInputAccessoryViewNextResponderWithResponder:(id)arg1 ;
-(void)motionBegan:(int)arg1 withEvent:(id)arg2 ;
-(void)motionCancelled:(int)arg1 withEvent:(id)arg2 ;
-(void)remoteControlReceivedWithEvent:(id)arg1 ;
-(void)scrollWheel:(GSEventRef)arg1 ;
-(void)gestureStarted:(GSEventRef)arg1 ;
-(void)gestureChanged:(GSEventRef)arg1 ;
-(void)_tagAsRestorableResponder;
-(UIView *)inputView;
-(UIView *)inputAccessoryView;
-(UIInputViewController *)inputViewController;
-(NSString *)textInputContextIdentifier;
-(UIInputViewController *)inputAccessoryViewController;
-(void)reloadInputViewsWithoutReset;
-(id)_keyboardResponder;
-(void)_completeForwardingTouches:(id)arg1 phase:(int)arg2 event:(id)arg3 index:(unsigned)arg4 ;
-(id)_primaryContentResponder;
-(char)_requiresKeyboardWindowWhenFirstResponder;
-(char)_requiresKeyboardResetOnReload;
-(void)_becomeFirstResponderAndMakeVisible;
-(char)_isPinningInputViews;
-(id)_responderSelectionImage;
-(void)_didChangeToFirstResponder:(id)arg1 ;
-(id)_proxyTextInput;
-(NSRange)_selectedNSRange;
-(char)_usesDeemphasizedTextAppearance;
-(void)_expandSelectionToStartOfWordsBeforeCaretSelection:(int)arg1 ;
-(void)_extendCurrentSelection:(int)arg1 ;
-(void)_setCaretSelectionAtEndOfSelection;
-(id)_moveToEndOfWord:(char)arg1 withHistory:(id)arg2 ;
-(id)_moveToEndOfLine:(char)arg1 withHistory:(id)arg2 ;
-(id)_moveRight:(char)arg1 withHistory:(id)arg2 ;
-(id)_moveToStartOfWord:(char)arg1 withHistory:(id)arg2 ;
-(id)_moveToStartOfLine:(char)arg1 withHistory:(id)arg2 ;
-(id)_moveLeft:(char)arg1 withHistory:(id)arg2 ;
-(id)_moveToEndOfParagraph:(char)arg1 withHistory:(id)arg2 ;
-(id)_moveToEndOfDocument:(char)arg1 withHistory:(id)arg2 ;
-(id)_moveDown:(char)arg1 withHistory:(id)arg2 ;
-(id)_moveToStartOfParagraph:(char)arg1 withHistory:(id)arg2 ;
-(id)_moveToStartOfDocument:(char)arg1 withHistory:(id)arg2 ;
-(id)_moveUp:(char)arg1 withHistory:(id)arg2 ;
-(void)_deleteByWord;
-(void)_deleteToStartOfLine;
-(void)_deleteToEndOfLine;
-(void)_setMarkedText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(void)_unmarkText;
-(void)_setGestureRecognizers;
-(unsigned long)_characterBeforeCaretSelection;
-(unsigned long)_characterInRelationToRangedSelection:(int)arg1 ;
-(void)_moveCurrentSelection:(int)arg1 ;
-(void)_expandSelectionToBackwardDeletionCluster;
-(void)_deleteBackwardAndNotify:(char)arg1 ;
-(void)_deleteForwardAndNotify:(char)arg1 ;
-(unsigned long)_characterInRelationToCaretSelection:(int)arg1 ;
-(id)_wordContainingCaretSelection;
-(unsigned long)_characterAfterCaretSelection;
-(id)_rangeOfEnclosingWord:(id)arg1 ;
-(id)_positionAtStartOfWords:(unsigned)arg1 beforePosition:(id)arg2 ;
-(id)_fullText;
-(CGRect)_lastRectForRange:(id)arg1 ;
-(id)_rangeOfText:(id)arg1 endingAtPosition:(id)arg2 ;
-(void)_replaceCurrentWordWithText:(id)arg1 ;
-(void)_selectAll;
-(char)_selectionAtDocumentStart;
-(NSRange)_nsrangeForTextRange:(id)arg1 ;
-(char)_shouldPerformUICalloutBarButtonReplaceAction:(SEL)arg1 forText:(id)arg2 checkAutocorrection:(char)arg3 ;
-(char)_selectionAtDocumentEnd;
-(id)_positionFromPosition:(id)arg1 inDirection:(int)arg2 offset:(int)arg3 withAffinityDownstream:(char)arg4 ;
-(void)_scrollRectToVisible:(CGRect)arg1 animated:(char)arg2 ;
-(int)_selectionAffinity;
-(id)_fontForCaretSelection;
-(id)_textColorForCaretSelection;
-(id)_newPhraseBoundaryGestureRecognizer;
-(char)_hasMarkedText;
-(char)_usesAsynchronousProtocol;
-(id)_selectableText;
-(id)_fullRange;
-(int)_indexForTextPosition:(id)arg1 ;
-(id)_clampedpositionFromPosition:(id)arg1 offset:(int)arg2 ;
-(id)_keyInput;
-(void)_setSelectedTextRange:(id)arg1 withAffinityDownstream:(char)arg2 ;
-(void)_updateSelectionWithTextRange:(id)arg1 withAffinityDownstream:(char)arg2 ;
-(char)_isEmptySelection;
-(id)_setHistory:(id)arg1 withExtending:(char)arg2 withAnchor:(int)arg3 withAffinityDownstream:(char)arg4 ;
-(id)_setSelectionRangeWithHistory:(id)arg1 ;
-(void)_phraseBoundaryGesture:(id)arg1 ;
-(char)_selectionAtWordStart;
-(char)_hasMarkedTextOrRangedSelection;
-(void)_expandSelectionToStartOfWordBeforeCaretSelection;
-(id)_rangeOfLineEnclosingPosition:(id)arg1 ;
-(id)_rangeOfParagraphEnclosingPosition:(id)arg1 ;
-(id)_findPleasingWordBoundaryFromPosition:(id)arg1 ;
-(id)_asTextSelection;
-(CGRect)_caretRect;
@end


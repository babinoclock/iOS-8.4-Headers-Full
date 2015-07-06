/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:42 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <MessageUI/MFComposeHeaderView.h>
#import <UIKit/UITextViewDelegate.h>
#import <MessageUI/NSLayoutManagerDelegate.h>
#import <MessageUI/MFMultiDragSource.h>
#import <MessageUI/MFMultiDragDestination.h>
#import <MessageUI/MFComposeRecipientAtomDelegate.h>

@protocol MFDraggableItem;
@class _MFAtomTextView, UITextView, UIColor, UIView, NSMutableArray, NSMutableDictionary, NSTimer, NSArray, UIFont, UIButton, _MFAtomTextAttachment, NSString;

@interface MFComposeRecipientTextView : MFComposeHeaderView <UITextViewDelegate, NSLayoutManagerDelegate, MFMultiDragSource, MFMultiDragDestination, MFComposeRecipientAtomDelegate> {

	_MFAtomTextView* _textView;
	UITextView* _inactiveTextView;
	UIColor* _inactiveTextColor;
	UIView* _atomContainerView;
	NSMutableArray* _atomViews;
	NSMutableDictionary* _atomPresentationOptionsByRecipient;
	NSMutableDictionary* _atomLayoutOptionsByRecipient;
	int _atomViewAnimationDepth;
	NSRange _dragSourceRange;
	id<MFDraggableItem> _pivotItem;
	char _parentIsClosing;
	char _textViewExclusionPathsAreValid;
	char _isTextFieldCollapsed;
	char _collapsedStateInitialized;
	char _indicatesUnsafeRecipientsWhenCollapsed;
	char _notifyDelegateOfSizeChange;
	NSTimer* _inputDelayTimer;
	NSTimer* _collapsableUpdateTimer;
	NSArray* _properties;
	NSMutableArray* _recipientsBeingRemoved;
	char _editable;
	char _allowsDragAndDrop;
	char _separatorHidden;
	char _expanded;
	char _didIgnoreFirstResponderResign;
	UIFont* _baseFont;
	int _maxRecipients;
	UIButton* _addButton;
	int _hideLastAtomComma;
	_MFAtomTextAttachment* _placeholderAttachment;
	double _inputDelay;

}

@property (assign,nonatomic) id<MFComposeRecipientTextViewDelegate> delegate; 
@property (nonatomic,copy) NSArray * recipients; 
@property (nonatomic,copy) NSArray * addresses; 
@property (nonatomic,copy,readonly) NSArray * uncommentedAddresses; 
@property (assign,nonatomic) char editable;                                                //@synthesize editable=_editable - In the implementation block
@property (assign,nonatomic) char allowsDragAndDrop;                                       //@synthesize allowsDragAndDrop=_allowsDragAndDrop - In the implementation block
@property (assign,getter=isSeparatorHidden,nonatomic) char separatorHidden;                //@synthesize separatorHidden=_separatorHidden - In the implementation block
@property (assign,nonatomic) char expanded;                                                //@synthesize expanded=_expanded - In the implementation block
@property (assign,nonatomic) char indicatesUnsafeRecipientsWhenCollapsed;                  //@synthesize indicatesUnsafeRecipientsWhenCollapsed=_indicatesUnsafeRecipientsWhenCollapsed - In the implementation block
@property (nonatomic,readonly) char didIgnoreFirstResponderResign;                         //@synthesize didIgnoreFirstResponderResign=_didIgnoreFirstResponderResign - In the implementation block
@property (assign,nonatomic) int maxRecipients;                                            //@synthesize maxRecipients=_maxRecipients - In the implementation block
@property (assign,nonatomic) double inputDelay;                                            //@synthesize inputDelay=_inputDelay - In the implementation block
@property (nonatomic,readonly) NSString * text; 
@property (nonatomic,readonly) UITextView * textView; 
@property (nonatomic,readonly) UIButton * addButton;                                       //@synthesize addButton=_addButton - In the implementation block
@property (nonatomic,readonly) float offsetForRowWithTextField; 
@property (nonatomic,readonly) unsigned numberOfRowsOfTextInField; 
@property (nonatomic,retain) UIFont * baseFont;                                            //@synthesize baseFont=_baseFont - In the implementation block
@property (nonatomic,retain) UIColor * inactiveTextColor; 
@property (assign,nonatomic) int hideLastAtomComma;                                        //@synthesize hideLastAtomComma=_hideLastAtomComma - In the implementation block
@property (nonatomic,retain) _MFAtomTextAttachment * placeholderAttachment;                //@synthesize placeholderAttachment=_placeholderAttachment - In the implementation block
@property (nonatomic,readonly) UIView * atomContainerView;                                 //@synthesize atomContainerView=_atomContainerView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultFont;
-(void)invalidateAtomPresentationOptionsForRecipient:(id)arg1 ;
-(char)isSeparatorHidden;
-(void)deselectComposeRecipientAtom:(id)arg1 ;
-(void)composeRecipientAtomShowPersonCard:(id)arg1 ;
-(void)composeRecipientAtomSelectPrevious:(id)arg1 ;
-(void)composeRecipientAtomSelectNext:(id)arg1 ;
-(void)refreshPreferredContentSize;
-(float)textFieldOffsetForNumberOfRowsToScroll:(unsigned)arg1 numberOfRowsAboveField:(int)arg2 ;
-(void)setEditable:(char)arg1 animated:(char)arg2 ;
-(char)didIgnoreFirstResponderResign;
-(void)setInputDelay:(double)arg1 ;
-(void)setAllowsDragAndDrop:(char)arg1 ;
-(void)setIndicatesUnsafeRecipientsWhenCollapsed:(char)arg1 ;
-(NSArray *)uncommentedAddresses;
-(id)viewForDragSource;
-(void)dropItems:(id)arg1 ;
-(void)dragCompletedWithItems:(id)arg1 success:(char)arg2 ;
-(id)destinationViewForDrop;
-(void)dragMovedToPoint:(CGPoint)arg1 withItems:(id)arg2 ;
-(void)dragExitedWithItems:(id)arg1 ;
-(void)dragEnteredAtPoint:(CGPoint)arg1 withItems:(id)arg2 ;
-(CGRect)frameForDraggedItem:(id)arg1 isPivotView:(out char*)arg2 ;
-(char)shouldCollapseMultipleItems;
-(id)viewForDraggedItem:(id)arg1 atScale:(float)arg2 ;
-(void)dragStartedWithItems:(id)arg1 ;
-(void)willDropItems:(id)arg1 ;
-(void)animatePlaceholderForDragFailureWithItems:(id)arg1 ;
-(CGRect)frameForDroppedItem:(id)arg1 ;
-(id)supportedDropTypes:(id)arg1 ;
-(char)allowsDrag;
-(id)itemsForDragAtPoint:(CGPoint)arg1 ;
-(char)containsAddress:(id)arg1 ;
-(void)_addButtonTapped:(id)arg1 ;
-(void)_setAddButtonVisible:(char)arg1 animated:(char)arg2 ;
-(UIEdgeInsets)_recipientViewEdgeInsets;
-(void)_invalidateTextContainerExclusionPaths;
-(void)_updateInactiveTextView;
-(void)_recomputeTextContainerExclusionPaths;
-(void)_removeAllRecipients;
-(void)addRecipient:(id)arg1 index:(unsigned)arg2 animate:(char)arg3 ;
-(void)_addRecord:(void*)arg1 identifier:(int)arg2 ;
-(void)_beginAtomViewAnimations;
-(id)_atomAttachmentForRecipient:(id)arg1 ;
-(void)_insertAtomAttachment:(id)arg1 atCharacterIndex:(unsigned)arg2 ;
-(void)_didRemoveRecipient:(id)arg1 ;
-(id)_userEnteredTextWithRange:(NSRange*)arg1 ;
-(void)_setTextViewIsCollapsed:(char)arg1 animated:(char)arg2 ;
-(char)_canAddAdditionalAtoms;
-(char)_isTextViewCollapsed;
-(id)_textContainerExclusionPathsWithAddButton:(char)arg1 ;
-(id)_baseAttributes;
-(char)_textViewContainsAtomizedRecipients;
-(char)_hasUnsafeRecipients;
-(char)_isAddButtonVisible;
-(void)_insertAtomAttachment:(id)arg1 andReplaceCharactersInRange:(NSRange)arg2 ;
-(id)_atomViewAtCharacterIndex:(unsigned)arg1 ;
-(double)inputDelay;
-(void)_notifyDelegateOfTextChange:(id)arg1 ;
-(void)_resetSelectionState;
-(id)_valueForAtomLayoutOption:(id)arg1 withRecipient:(id)arg2 ;
-(void)_addAddressAtomSubview:(id)arg1 ;
-(char)_shouldAnimateAtomViewChanges;
-(void)_removeAddressAtomSubview:(id)arg1 ;
-(void)_notifyDelegateOfSizeChange;
-(_MFAtomTextAttachment *)placeholderAttachment;
-(char)allowsDragAndDrop;
-(id)_placeholderAttachmentForRecipient:(id)arg1 ;
-(void)setPlaceholderAttachment:(_MFAtomTextAttachment *)arg1 ;
-(NSRange)_placeholderAttachmentRange;
-(void)_setValue:(id)arg1 forAtomLayoutOption:(id)arg2 withRecipient:(id)arg3 ;
-(NSRange)_rangeForComposeRecipientAtom:(id)arg1 ;
-(UIFont *)baseFont;
-(void)_invalidateAtomPresentationOptionsCache;
-(void)atomTextViewDidBecomeFirstResponder:(id)arg1 ;
-(void)atomTextViewDidResignFirstResponder:(id)arg1 ;
-(void)atomTextView:(id)arg1 didChangeWritingDirection:(int)arg2 ;
-(UIView *)atomContainerView;
-(char)indicatesUnsafeRecipientsWhenCollapsed;
-(int)maxRecipients;
-(void)setMaxRecipients:(int)arg1 ;
-(int)hideLastAtomComma;
-(void)setHideLastAtomComma:(int)arg1 ;
-(NSArray *)recipients;
-(void)setRecipients:(NSArray *)arg1 ;
-(void)setAddresses:(NSArray *)arg1 ;
-(UIButton *)addButton;
-(void)reflow;
-(NSArray *)addresses;
-(void)removeRecipient:(id)arg1 ;
-(void)addRecipient:(id)arg1 ;
-(void)addRecord:(void*)arg1 property:(int)arg2 identifier:(int)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<MFComposeRecipientTextViewDelegate>)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MFComposeRecipientTextViewDelegate>)delegate;
-(char)becomeFirstResponder;
-(NSString *)text;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)clearText;
-(void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(char)arg3 ;
-(void)setLabel:(id)arg1 ;
-(void)setEditable:(char)arg1 ;
-(char)hasContent;
-(char)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)textViewDidChangeSelection:(id)arg1 ;
-(void)setExpanded:(char)arg1 ;
-(char)expanded;
-(char)editable;
-(void)_longPressGestureRecognized:(id)arg1 ;
-(UITextView *)textView;
-(UIColor *)inactiveTextColor;
-(void)setProperties:(id)arg1 ;
-(void)_tapGestureRecognized:(id)arg1 ;
-(void)setSeparatorHidden:(char)arg1 ;
-(void)parentWillClose;
-(void)parentDidClose;
-(unsigned)_atomPresentationOptionsForRecipient:(id)arg1 ;
-(void)setInactiveTextColor:(UIColor *)arg1 ;
-(void)invalidateAtomPresentationOptions;
-(id)atomViewsInRange:(NSRange)arg1 ;
-(id)atomViewForRecipient:(id)arg1 ;
-(unsigned)numberOfRowsOfTextInField;
-(float)offsetForRowWithTextField;
-(void)selectComposeRecipientAtom:(id)arg1 ;
-(char)_useRightToLeftLayout;
-(char)finishEnteringRecipient;
-(void)setProperty:(int)arg1 ;
-(void)setBaseFont:(UIFont *)arg1 ;
-(void)addAddress:(id)arg1 ;
@end


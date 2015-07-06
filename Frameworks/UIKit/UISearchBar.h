/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:43 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextInputTraits_Private.h>
#import <UIKit/UIStatusBarTinting.h>
#import <UIKit/_UIBarPositioningInternal.h>
#import <UIKit/UIBarPositioning.h>
#import <UIKit/UITextInputTraits.h>

@protocol UISearchBarDelegateUISearchBarDelegate_Private;
@class UISearchBarTextField, UILabel, UIButton, UIColor, UIImageView, NSString, NSArray, UIView, _UISearchBarNavigationItem, _UISearchBarScopeBarBackground, UIBarButtonItem, _UIBackdropView, UITapGestureRecognizer, UITextInputTraits, UISearchController, UIImage;

@interface UISearchBar : UIView <UITextInputTraits_Private, UIStatusBarTinting, _UIBarPositioningInternal, UIBarPositioning, UITextInputTraits> {

	UISearchBarTextField* _searchField;
	UILabel* _promptLabel;
	UIButton* _cancelButton;
	id<UISearchBarDelegate><UISearchBarDelegate_Private> _delegate;
	id _controller;
	UIColor* _barTintColor;
	UIImageView* _separator;
	NSString* _cancelButtonText;
	NSArray* _scopes;
	int _selectedScope;
	UIView* _background;
	UIView* _scopeBar;
	UIView* _scopeBarContainerView;
	UIEdgeInsets _contentInset;
	UIImageView* _shadowView;
	id _appearanceStorage;
	_UISearchBarNavigationItem* _navigationItem;
	_UISearchBarScopeBarBackground* _scopeBarBackgroundView;
	UIBarButtonItem* _animatedAppearanceBarButtonItem;
	_UIBackdropView* _backdrop;
	unsigned _backdropStyle;
	UIView* _maskView;
	UITapGestureRecognizer* _tapToActivateGestureRecognizer;
	UIBarButtonItem* _cancelBarButtonItem;
	UITextInputTraits* _textInputTraits;
	UIButton* _leftButton;
	struct {
		unsigned barStyle : 3;
		unsigned showsBookmarkButton : 1;
		unsigned showsCancelButton : 1;
		unsigned barTranslucence : 3;
		unsigned autoDisableCancelButton : 1;
		unsigned showsScopeBar : 1;
		unsigned hideBackground : 1;
		unsigned combinesLandscapeBars : 1;
		unsigned usesEmbeddedAppearance : 1;
		unsigned showsSearchResultsButton : 1;
		unsigned searchResultsButtonSelected : 1;
		unsigned pretendsIsInBar : 1;
		unsigned disabled : 1;
		unsigned backgroundLayoutNeedsUpdate : 1;
		unsigned containedInNavigationPalette : 1;
		unsigned containedInNavigationBar : 1;
		unsigned containedInToolBar : 1;
		unsigned drawsBackgroundInPalette : 1;
		unsigned centerPlaceholder : 1;
		unsigned searchFieldLeftViewMode : 2;
		unsigned cancelButtonWantsLetterpress : 1;
	}  _searchBarFlags;
	char __forceCenteredPlaceholderLayout;
	char __transplanting;
	UIColor* _statusBarTintColor;
	UIView* _inputAccessoryView;
	int _barPosition;
	unsigned _searchBarStyle;
	UISearchController* __searchController;
	unsigned __scopeBarPosition;

}

@property (assign,nonatomic) int barStyle; 
@property (assign,nonatomic) id<UISearchBarDelegate> delegate;                                                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSString * prompt; 
@property (nonatomic,copy) NSString * placeholder; 
@property (assign,nonatomic) char showsBookmarkButton; 
@property (assign,nonatomic) char showsCancelButton; 
@property (assign,nonatomic) char showsSearchResultsButton; 
@property (assign,getter=isSearchResultsButtonSelected,nonatomic) char searchResultsButtonSelected; 
@property (nonatomic,retain) UIColor * tintColor; 
@property (nonatomic,retain) UIColor * barTintColor;                                                              //@synthesize barTintColor=_barTintColor - In the implementation block
@property (assign,nonatomic) unsigned searchBarStyle;                                                             //@synthesize searchBarStyle=_searchBarStyle - In the implementation block
@property (assign,getter=isTranslucent,nonatomic) char translucent; 
@property (nonatomic,copy) NSArray * scopeButtonTitles; 
@property (assign,nonatomic) int selectedScopeButtonIndex; 
@property (assign,nonatomic) char showsScopeBar; 
@property (nonatomic,retain) UIView * inputAccessoryView;                                                         //@synthesize inputAccessoryView=_inputAccessoryView - In the implementation block
@property (nonatomic,retain) UIImage * backgroundImage; 
@property (nonatomic,retain) UIImage * scopeBarBackgroundImage; 
@property (assign,nonatomic) UIOffset searchFieldBackgroundPositionAdjustment; 
@property (assign,nonatomic) UIOffset searchTextPositionAdjustment; 
@property (nonatomic,retain,readonly) UIButton * _leftButton;                                                     //@synthesize leftButton=_leftButton - In the implementation block
@property (setter=_setStatusBarTintColor:,nonatomic,retain) UIColor * _statusBarTintColor;                        //@synthesize statusBarTintColor=_statusBarTintColor - In the implementation block
@property (assign,nonatomic) char _forceCenteredPlaceholderLayout;                                                //@synthesize _forceCenteredPlaceholderLayout=__forceCenteredPlaceholderLayout - In the implementation block
@property (assign,setter=_setSearchController:,nonatomic) UISearchController * _searchController;                 //@synthesize _searchController=__searchController - In the implementation block
@property (assign,setter=_setTransplanting:,nonatomic) char _transplanting;                                       //@synthesize _transplanting=__transplanting - In the implementation block
@property (assign,setter=_setScopeBarPosition:,nonatomic) unsigned _scopeBarPosition;                             //@synthesize _scopeBarPosition=__scopeBarPosition - In the implementation block
@property (getter=_searchBarTextField,nonatomic,readonly) UISearchBarTextField * searchBarTextField; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int autocapitalizationType; 
@property (assign,nonatomic) int autocorrectionType; 
@property (assign,nonatomic) int spellCheckingType; 
@property (assign,nonatomic) int keyboardType; 
@property (assign,nonatomic) int keyboardAppearance; 
@property (assign,nonatomic) int returnKeyType; 
@property (assign,nonatomic) char enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) char secureTextEntry; 
@property (assign,nonatomic) CFCharacterSetRef textTrimmingSet; 
@property (nonatomic,retain) UIColor * insertionPointColor; 
@property (nonatomic,retain) UIColor * selectionBarColor; 
@property (nonatomic,retain) UIColor * selectionHighlightColor; 
@property (nonatomic,retain) UIImage * selectionDragDotImage; 
@property (assign,nonatomic) unsigned insertionPointWidth; 
@property (assign,nonatomic) int textLoupeVisibility; 
@property (assign,nonatomic) int textSelectionBehavior; 
@property (assign,nonatomic) id textSuggestionDelegate; 
@property (assign,nonatomic) char isSingleLineDocument; 
@property (assign,nonatomic) char contentsIsSingleValue; 
@property (assign,nonatomic) char acceptsEmoji; 
@property (assign,nonatomic) char forceEnableDictation; 
@property (assign,nonatomic) int emptyContentReturnKeyType; 
@property (assign,nonatomic) char returnKeyGoesToNextResponder; 
@property (assign,nonatomic) char acceptsFloatingKeyboard; 
@property (assign,nonatomic) char acceptsSplitKeyboard; 
@property (assign,nonatomic) char displaySecureTextUsingPlainText; 
@property (assign,nonatomic) char learnsCorrections; 
@property (assign,nonatomic) int shortcutConversionType; 
@property (assign,nonatomic) char suppressReturnKeyStyling; 
@property (assign,nonatomic) char useInterfaceLanguageForLocalization; 
@property (assign,nonatomic) char deferBecomingResponder; 
@property (assign,nonatomic) char enablesReturnKeyOnNonWhiteSpaceContent; 
@property (nonatomic,copy) NSString * autocorrectionContext; 
@property (nonatomic,copy) NSString * responseContext; 
@property (assign,nonatomic) char disablePrediction; 
@property (nonatomic,readonly) int barPosition;                                                                   //@synthesize barPosition=_barPosition - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<UISearchBarDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(char)respondsToSelector:(SEL)arg1 ;
-(void)didMoveToWindow;
-(void)setFrame:(CGRect)arg1 ;
-(void)bringSubviewToFront:(id)arg1 ;
-(void)layoutSubviews;
-(void)sendSubviewToBack:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(id)_textColor;
-(char)_contentHuggingDefault_isUsuallyFixedHeight;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<UISearchBarDelegate>)delegate;
-(id)_backgroundView;
-(UIColor *)_statusBarTintColor;
-(char)isTranslucent;
-(char)resignFirstResponder;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(char)becomeFirstResponder;
-(UIEdgeInsets)contentInset;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)_commonInit;
-(void)setTintColor:(UIColor *)arg1 ;
-(char)canBecomeFirstResponder;
-(void)_addSubview:(id)arg1 positioned:(int)arg2 relativeTo:(id)arg3 ;
-(char)isFirstResponder;
-(void)willMoveToWindow:(id)arg1 ;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(void)didMoveToSuperview;
-(void)willMoveToSuperview:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(id)backgroundImageForBarPosition:(int)arg1 barMetrics:(int)arg2 ;
-(UIImage *)backgroundImage;
-(NSString *)prompt;
-(void)setPrompt:(NSString *)arg1 ;
-(void)setBackgroundImage:(id)arg1 forBarMetrics:(int)arg2 ;
-(id)_effectiveBarTintColor;
-(void)setBackgroundImage:(id)arg1 forBarPosition:(int)arg2 barMetrics:(int)arg3 ;
-(void)_updateOpacity;
-(void)_setBarPosition:(int)arg1 ;
-(void)setBarStyle:(int)arg1 ;
-(int)barStyle;
-(void)setTranslucent:(char)arg1 ;
-(void)setBarTintColor:(UIColor *)arg1 ;
-(char)_shouldUseNavigationBarHeight;
-(int)_barPosition;
-(int)barPosition;
-(UIColor *)barTintColor;
-(void)_updateInsetsForTableView:(id)arg1 ;
-(id)textInputTraits;
-(void)takeTraitsFrom:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(char)_isEnabled;
-(void)setPlaceholder:(NSString *)arg1 ;
-(char)textFieldShouldBeginEditing:(id)arg1 ;
-(char)textFieldShouldEndEditing:(id)arg1 ;
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(char)textFieldShouldClear:(id)arg1 ;
-(id)cancelButton;
-(void)setCancelButton:(id)arg1 ;
-(id)_navigationItem;
-(void)reloadInputViews;
-(char)canResignFirstResponder;
-(UIView *)inputAccessoryView;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(void)setDrawsBackground:(char)arg1 ;
-(void)setInputAccessoryView:(UIView *)arg1 ;
-(id)searchField;
-(void)setSearchFieldBackgroundImage:(id)arg1 forState:(unsigned)arg2 ;
-(id)searchFieldBackgroundImageForState:(unsigned)arg1 ;
-(UIImage *)scopeBarBackgroundImage;
-(void)setScopeBarBackgroundImage:(UIImage *)arg1 ;
-(void)_setMaskActive:(char)arg1 ;
-(void)tappedSearchBar:(id)arg1 ;
-(void)_setMaskBounds:(CGRect)arg1 ;
-(void)setScopeButtonTitles:(NSArray *)arg1 ;
-(void)_scopeChanged:(id)arg1 ;
-(void)setUsesEmbeddedAppearance:(char)arg1 ;
-(void)_setupSearchField;
-(void)setSearchBarStyle:(unsigned)arg1 ;
-(void)_setupPromptLabel;
-(void)_setupCancelButton;
-(void)_setShowsSeparator:(char)arg1 ;
-(void)setSearchTextPositionAdjustment:(UIOffset)arg1 ;
-(void)setSearchFieldBackgroundPositionAdjustment:(UIOffset)arg1 ;
-(id)_scopeBarContainer;
-(NSArray *)scopeButtonTitles;
-(NSString *)placeholder;
-(UIOffset)searchTextPositionAdjustment;
-(UIOffset)searchFieldBackgroundPositionAdjustment;
-(char)centerPlaceholder;
-(char)_consideredInBarWithSuperview:(id)arg1 ;
-(void)_identifyBarContainer;
-(void)setDrawsBackgroundInPalette:(char)arg1 ;
-(void)_removeMarginsIfNecessary;
-(id)_searchBarTextField;
-(void)_updateSearchFieldArt;
-(id)_currentSeparatorImage;
-(void)_updateScopeBarBackground;
-(void)_updatePlaceholderColor;
-(void)_updateRightView;
-(void)_updateMagnifyingGlassView;
-(id)_imageForSearchBarIcon:(int)arg1 state:(unsigned)arg2 ;
-(void)_resultsListButtonPressed;
-(void)_bookmarkButtonPressed;
-(void)setShowsCancelButton:(char)arg1 animated:(char)arg2 ;
-(void)_allowCursorToAppear:(char)arg1 ;
-(void)_destroyCancelButton;
-(char)_isInBar;
-(void)_displayNavBarCancelButton:(char)arg1 animated:(char)arg2 ;
-(id)_cancelBarButtonItem;
-(void)_cancelButtonPressed;
-(char)_containedInNavigationPalette;
-(char)drawsBackgroundInPalette;
-(char)_shouldCombineLandscapeBarsForOrientation:(int)arg1 ;
-(unsigned)_scopeBarPosition;
-(float)_landscapeScopeBarWidth;
-(UIEdgeInsets)_scopeBarInsets;
-(float)_availableBoundsWidthForSize:(CGSize)arg1 ;
-(char)_searchFieldWidthShouldBeFlexible;
-(void)_setBarTintColor:(id)arg1 forceUpdate:(char)arg2 ;
-(void)_setupLeftButton;
-(int)_barMetricsForOrientation:(int)arg1 ;
-(float)_barHeightForBarMetrics:(int)arg1 ;
-(char)_shouldCombineLandscapeBars;
-(float)_scopeBarHeight;
-(float)_defaultHeight;
-(float)_availableBoundsWidth;
-(float)_landscapeSearchFieldWidth;
-(id)_viewForChildViews;
-(char)_scopeBarIsVisible;
-(char)drawsBackground;
-(void)_layoutBackgroundViewConsideringTopBarStatusAndChangedHeight:(char)arg1 ;
-(float)_searchFieldHeight;
-(id)_navigationBarForShadow;
-(char)_shouldDisplayShadow;
-(id)_makeShadowView;
-(id)controller;
-(void)_setUpScopeBar;
-(void)_setShowsScopeBar:(char)arg1 animateOpacity:(char)arg2 ;
-(void)_effectiveBarTintColorDidChange:(char)arg1 ;
-(void)_updateNeedForBackdrop;
-(id)_glyphAndTextColor:(char)arg1 ;
-(id)_imageForSearchBarIcon:(int)arg1 state:(unsigned)arg2 customImage:(char*)arg3 ;
-(char)_isAtTop;
-(void)_applySearchBarStyle;
-(void)setController:(id)arg1 ;
-(id)_scopeBar;
-(void)setShowsSearchResultsButton:(char)arg1 ;
-(char)showsSearchResultsButton;
-(void)setSearchResultsButtonSelected:(char)arg1 ;
-(char)isSearchResultsButtonSelected;
-(void)setShowsBookmarkButton:(char)arg1 ;
-(char)showsBookmarkButton;
-(void)setShowsCancelButton:(char)arg1 ;
-(char)showsCancelButton;
-(void)_setShowsCancelButton:(char)arg1 ;
-(void)setCombinesLandscapeBars:(char)arg1 ;
-(char)combinesLandscapeBars;
-(char)_wouldCombineLandscapeBarsForSize:(CGSize)arg1 ;
-(char)usesEmbeddedAppearance;
-(UIButton *)_leftButton;
-(void)_setShadowVisibleIfNecessary:(char)arg1 ;
-(void)setSelectedScopeButtonIndex:(int)arg1 ;
-(int)selectedScopeButtonIndex;
-(void)_setScopeBarHidden:(char)arg1 ;
-(void)setShowsScopeBar:(char)arg1 ;
-(char)showsScopeBar;
-(void)_setStatusBarTintColor:(id)arg1 ;
-(id)_separatorImage;
-(void)_setSeparatorImage:(id)arg1 ;
-(void)setImage:(id)arg1 forSearchBarIcon:(int)arg2 state:(unsigned)arg3 ;
-(id)imageForSearchBarIcon:(int)arg1 state:(unsigned)arg2 ;
-(void)setScopeBarButtonBackgroundImage:(id)arg1 forState:(unsigned)arg2 ;
-(id)scopeBarButtonBackgroundImageForState:(unsigned)arg1 ;
-(void)setScopeBarButtonDividerImage:(id)arg1 forLeftSegmentState:(unsigned)arg2 rightSegmentState:(unsigned)arg3 ;
-(id)scopeBarButtonDividerImageForLeftSegmentState:(unsigned)arg1 rightSegmentState:(unsigned)arg2 ;
-(void)setScopeBarButtonTitleTextAttributes:(id)arg1 forState:(unsigned)arg2 ;
-(id)scopeBarButtonTitleTextAttributesForState:(unsigned)arg1 ;
-(void)setPositionAdjustment:(UIOffset)arg1 forSearchBarIcon:(int)arg2 ;
-(UIOffset)positionAdjustmentForSearchBarIcon:(int)arg1 ;
-(id)_animatedAppearanceBarButtonItem;
-(void)_setBackgroundLayoutNeedsUpdate:(char)arg1 ;
-(void)_setBackdropStyle:(unsigned)arg1 ;
-(unsigned)_backdropStyle;
-(void)setCenterPlaceholder:(char)arg1 ;
-(int)searchFieldLeftViewMode;
-(void)setSearchFieldLeftViewMode:(int)arg1 ;
-(id)_alternateTitle;
-(void)_setCancelButtonWantsLetterpress;
-(unsigned)searchBarStyle;
-(char)_forceCenteredPlaceholderLayout;
-(void)set_forceCenteredPlaceholderLayout:(char)arg1 ;
-(UISearchController *)_searchController;
-(void)_setSearchController:(id)arg1 ;
-(char)_transplanting;
-(void)_setTransplanting:(char)arg1 ;
-(void)_setScopeBarPosition:(unsigned)arg1 ;
-(id)_scopeBarBackgroundView;
-(char)pretendsIsInBar;
-(void)_searchFieldBeginEditing;
-(void)_searchFieldEditingChanged;
-(void)_searchFieldEndEditing;
-(void)_searchFieldReturnPressed;
-(void)_setupCancelButtonWithAppearance:(id)arg1 ;
-(void)_setEnabled:(char)arg1 animated:(char)arg2 ;
-(void)_setScopeBarSegmentsEnabled:(char)arg1 ;
-(void)setPretendsIsInBar:(char)arg1 ;
-(char)_textFieldShouldScrollToVisibleWhenBecomingFirstResponder:(id)arg1 ;
-(void)_setCancelButtonText:(id)arg1 ;
-(void)_setAutoDisableCancelButton:(char)arg1 ;
-(void)_setEnabled:(char)arg1 ;
-(void)_updateBackgroundToBackdropStyle:(int)arg1 ;
-(char)isElementAccessibilityExposedToInterfaceBuilder;
-(float)_autolayoutSpacingAtEdge:(int)arg1 inContainer:(id)arg2 ;
-(float)_autolayoutSpacingAtEdge:(int)arg1 nextToNeighbor:(id)arg2 ;
-(char)_hasCustomAutolayoutNeighborSpacing;
@end

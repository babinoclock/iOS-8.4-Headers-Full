/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:38 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <FuseUI/MusicEntityAbstractLockupView.h>
#import <UIKit/UITextViewDelegate.h>

@protocol MusicEntityProductHeaderLockupViewDelegate;
@class MPUTextButton, UIView, _UIBackdropView, UIImage, UIImageView, MusicNowPlayingFloatingButton, MusicDownloadStatusSashView, NSString, UILabel, UITextView, UIButton, UIActivityIndicatorView, MusicEntityViewProductHeaderLockupContentDescriptor;

@interface MusicEntityProductHeaderLockupView : MusicEntityAbstractLockupView <UITextViewDelegate> {

	MPUTextButton* _addSongsButton;
	UIView* _artworkEditingOverlayView;
	_UIBackdropView* _backdropView;
	UIImage* _backgroundImage;
	UIImageView* _backgroundImageView;
	UIView* _backgroundOverlayView;
	UIView* _bottomHairlineView;
	MusicNowPlayingFloatingButton* _cameraButton;
	MusicDownloadStatusSashView* _downloadStatusSashView;
	NSString* _editableText;
	UIView* _editableTextBottomHairlineView;
	UILabel* _editableTextHeaderLabel;
	UITextView* _editableTextPlaceholderView;
	UITextView* _editableTextView;
	MPUTextButton* _editButton;
	UIView* _placeholderBackgroundView;
	UIButton* _likeDislikeButton;
	UIActivityIndicatorView* _refreshActivityIndicatorView;
	UIButton* _refreshButton;
	char _shouldIgnoreArtworkImageChanges;
	char _editing;
	char _editableTitleShouldBecomeFirstResponder;
	UIButton* _addToLibraryButton;
	int _addToLibraryButtonState;
	UIButton* _contextualActionsButton;
	int _likeDislikeButtonState;
	UIButton* _shareButton;
	id<MusicEntityProductHeaderLockupViewDelegate> _delegate;
	MusicEntityViewProductHeaderLockupContentDescriptor* _productHeaderLockupContentDescriptor;

}

@property (nonatomic,readonly) UIButton * addToLibraryButton;                                                                         //@synthesize addToLibraryButton=_addToLibraryButton - In the implementation block
@property (assign,nonatomic) int addToLibraryButtonState;                                                                             //@synthesize addToLibraryButtonState=_addToLibraryButtonState - In the implementation block
@property (nonatomic,readonly) UIButton * contextualActionsButton;                                                                    //@synthesize contextualActionsButton=_contextualActionsButton - In the implementation block
@property (assign,nonatomic) int likeDislikeButtonState;                                                                              //@synthesize likeDislikeButtonState=_likeDislikeButtonState - In the implementation block
@property (nonatomic,readonly) UIButton * shareButton;                                                                                //@synthesize shareButton=_shareButton - In the implementation block
@property (assign,nonatomic,__weak) id<MusicEntityProductHeaderLockupViewDelegate> delegate;                                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * editableText; 
@property (assign,getter=isEditing,nonatomic) char editing;                                                                           //@synthesize editing=_editing - In the implementation block
@property (assign,nonatomic) char editableTitleShouldBecomeFirstResponder;                                                            //@synthesize editableTitleShouldBecomeFirstResponder=_editableTitleShouldBecomeFirstResponder - In the implementation block
@property (nonatomic,retain) MusicEntityViewProductHeaderLockupContentDescriptor * productHeaderLockupContentDescriptor;              //@synthesize productHeaderLockupContentDescriptor=_productHeaderLockupContentDescriptor - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)_buttonHeight;
+(float)maximumRowHeightForHorizontalLockupContentDescriptor:(id)arg1 traitCollection:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<MusicEntityProductHeaderLockupViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<MusicEntityProductHeaderLockupViewDelegate>)delegate;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setLayoutMargins:(UIEdgeInsets)arg1 ;
-(void)tintColorDidChange;
-(char)isEditing;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)setEditing:(char)arg1 ;
-(char)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)_contentDescriptorDidChange:(id)arg1 ;
-(void)_handlePlayButtonTappedWithAction:(unsigned)arg1 ;
-(char)_shouldEnableArtworkViewUserInteraction;
-(void)setLikeDislikeButtonState:(int)arg1 ;
-(UIButton *)contextualActionsButton;
-(char)_shouldShowPlayButton;
-(void)_artworkViewImageDidChange;
-(void)_contextualActionsButtonTapped:(id)arg1 ;
-(void)_editButtonTapped:(id)arg1 ;
-(void)setEditableTitleShouldBecomeFirstResponder:(char)arg1 ;
-(NSString *)editableText;
-(UIEdgeInsets)_effectiveLayoutMargins;
-(id)_newTextView;
-(MusicEntityViewProductHeaderLockupContentDescriptor *)productHeaderLockupContentDescriptor;
-(void)setProductHeaderLockupContentDescriptor:(MusicEntityViewProductHeaderLockupContentDescriptor *)arg1 ;
-(int)likeDislikeButtonState;
-(UIButton *)addToLibraryButton;
-(void)setAddToLibraryButtonState:(int)arg1 ;
-(void)_layoutEditingSubviews;
-(void)_layoutEditingSubviewsForEditing:(char)arg1 editingViewsAlpha:(float)arg2 ;
-(void)_cameraButtonTapped:(id)arg1 ;
-(void)_layoutSubviewsForCompactHorizontalSizeClass;
-(void)_layoutSubviewsForRegularHorizontalSizeClass;
-(void)_updateEditableTextPlaceholderViewVisibility;
-(id)_currentAddToLibraryButtonImage;
-(void)_updateLikeDislikeButtonStateAppearance;
-(CGRect)_adjustAvailableContentBounds:(CGRect)arg1 forActionView:(id)arg2 ;
-(id)_genericActionButtonWithImage:(id)arg1 ;
-(id)_genericActionButtonWithImageName:(id)arg1 ;
-(void)_updateColorsOfGenericActionButton:(id)arg1 ;
-(void)_shareButtonTapped:(id)arg1 ;
-(void)_likeDislikeButtonTapped:(id)arg1 ;
-(void)_addToLibraryButtonTapped:(id)arg1 ;
-(id)_refreshImage;
-(void)_refreshButtonTapped:(id)arg1 ;
-(void)_updateColorsOfGenericActionView:(id)arg1 ;
-(id)_genericActionButtonWithText:(id)arg1 ;
-(void)_addSongsButtonTapped:(id)arg1 ;
-(void)_setFrameOfActionButton:(id)arg1 basedOnAvailableContentBounds:(CGRect)arg2 insetContentBounds:(CGRect)arg3 customHeight:(float)arg4 maximumHeightForCentering:(float)arg5 ;
-(CGRect)_adjustAvailableContentBounds:(CGRect)arg1 forActionButton:(id)arg2 ;
-(void)_updateTextView:(id)arg1 forTextDescriptor:(id)arg2 textColor:(id)arg3 ;
-(void)_layoutButtonsWithAvailableContentBounds:(CGRect)arg1 insetContentBounds:(CGRect)arg2 availableContentBoundsAdjustmentBlock:(/*^block*/id)arg3 ;
-(int)addToLibraryButtonState;
-(char)editableTitleShouldBecomeFirstResponder;
-(void)setEntityValueProvider:(id)arg1 ;
-(UIButton *)shareButton;
@end

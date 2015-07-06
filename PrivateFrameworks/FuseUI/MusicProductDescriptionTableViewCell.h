/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:34 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UITableViewCell.h>
#import <UIKit/UITextViewDelegate.h>

@protocol MusicProductDescriptionTableViewCellDelegate;
@class UILabel, UIButton, UITextView, MusicMediaDetailTintInformation, MusicProductDescription, NSString;

@interface MusicProductDescriptionTableViewCell : UITableViewCell <UITextViewDelegate> {

	UILabel* _descriptionHeaderLabel;
	char _hasValidMoreButtonSize;
	char _needsForcedTextViewUpdate;
	UIButton* _moreButton;
	UITextView* _placeholderTextView;
	UITextView* _textView;
	SCD_Struct_Mu1 _delegateRespondsToSelector;
	char _expanded;
	id<MusicProductDescriptionTableViewCellDelegate> _delegate;
	MusicMediaDetailTintInformation* _detailTintInformation;
	MusicProductDescription* _productDescription;
	NSString* _productDescriptionTitle;
	int _productDescriptionMaximumLengthForTextInput;

}

@property (assign,nonatomic,__weak) id<MusicProductDescriptionTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) MusicMediaDetailTintInformation * detailTintInformation;                         //@synthesize detailTintInformation=_detailTintInformation - In the implementation block
@property (assign,getter=isExpanded,nonatomic) char expanded;                                               //@synthesize expanded=_expanded - In the implementation block
@property (nonatomic,copy) MusicProductDescription * productDescription;                                    //@synthesize productDescription=_productDescription - In the implementation block
@property (nonatomic,copy) NSString * productDescriptionTitle;                                              //@synthesize productDescriptionTitle=_productDescriptionTitle - In the implementation block
@property (assign,nonatomic) int productDescriptionMaximumLengthForTextInput;                               //@synthesize productDescriptionMaximumLengthForTextInput=_productDescriptionMaximumLengthForTextInput - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setDelegate:(id<MusicProductDescriptionTableViewCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MusicProductDescriptionTableViewCellDelegate>)delegate;
-(void)setHighlighted:(char)arg1 animated:(char)arg2 ;
-(void)willTransitionToState:(unsigned)arg1 ;
-(char)isExpanded;
-(char)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)setExpanded:(char)arg1 ;
-(void)setProductDescription:(MusicProductDescription *)arg1 ;
-(void)setProductDescriptionMaximumLengthForTextInput:(int)arg1 ;
-(MusicProductDescription *)productDescription;
-(void)setDetailTintInformation:(MusicMediaDetailTintInformation *)arg1 ;
-(MusicMediaDetailTintInformation *)detailTintInformation;
-(id)_newTextView;
-(id)_placeholderAttributedText;
-(id)_loadTextAttributes;
-(void)_updateTextViewEditabilityForced:(char)arg1 withEditing:(char)arg2 ;
-(void)_handlePreferredContentSizeDidChangeNotification:(id)arg1 ;
-(CGRect)_calculateContentBoundsWithBounds:(CGRect)arg1 ;
-(CGRect)_calculateHeaderLabelFrameWithinContentBounds:(CGRect)arg1 ;
-(void)_updateMoreButtonPropertiesWithTextViewSize:(CGSize)arg1 positionYDelta:(float)arg2 ;
-(void)_updatePlaceholderTextViewVisibility;
-(void)_updateTextViewWithProductDescriptionWithLayout:(char)arg1 ;
-(void)_updateMaximumNumberOfLinesWithEditing:(char)arg1 ;
-(unsigned)_calculateTextViewMaximumNumberOfLinesWithEditing:(char)arg1 ;
-(void)_moreButtonAction:(id)arg1 ;
-(id)_attributedTextWithProductDescriptionStoreEditorNotes:(id)arg1 textColor:(id)arg2 ;
-(void)setProductDescriptionTitle:(NSString *)arg1 ;
-(NSString *)productDescriptionTitle;
-(int)productDescriptionMaximumLengthForTextInput;
@end


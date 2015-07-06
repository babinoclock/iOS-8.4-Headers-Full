/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:43 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewReuseView.h>
#import <StoreKitUI/SKUIMenuPopoverDelegate.h>
#import <StoreKitUI/SKUIViewElementView.h>

@class NSMutableArray, UIControl, NSMapTable, NSArray, SKUIListViewElement, SKUIMenuPopoverController, NSString;

@interface SKUIHorizontalListView : SKUIViewReuseView <SKUIMenuPopoverDelegate, SKUIViewElementView> {

	NSMutableArray* _artworkRequestPassthroughViews;
	UIEdgeInsets _contentInset;
	UIEdgeInsets _bigHitInsets;
	float _elementSpacing;
	UIControl* _focusedMenuButton;
	NSMapTable* _imageViewToImageResourceCacheKey;
	NSArray* _lines;
	SKUIListViewElement* _listElement;
	SKUIMenuPopoverController* _popoverController;
	char _useBigHitTarget;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)prefetchResourcesForViewElement:(id)arg1 reason:(int)arg2 context:(id)arg3 ;
+(CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg1 width:(float)arg2 context:(id)arg3 ;
+(CGSize)sizeThatFitsWidth:(float)arg1 viewElement:(id)arg2 context:(id)arg3 ;
+(id)_attributedStringForButton:(id)arg1 context:(id)arg2 ;
+(id)_attributedStringForLabel:(id)arg1 context:(id)arg2 ;
+(CGSize)_sizeForViewElement:(id)arg1 width:(float)arg2 context:(id)arg3 ;
+(id)_attributedStringForMenuItem:(id)arg1 context:(id)arg2 ;
+(id)_linesWithViewElement:(id)arg1 width:(float)arg2 context:(id)arg3 ;
+(float)_elementSpacingForViewElement:(id)arg1 ;
+(float)_lineSpacingForLineElements:(id)arg1 ;
+(id)_attributedStringForButtonText:(id)arg1 type:(int)arg2 style:(id)arg3 context:(id)arg4 ;
+(float)_lineSpacingForViewElement:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGRect)hitRect;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)reloadWithViewElement:(id)arg1 width:(float)arg2 context:(id)arg3 ;
-(char)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3 ;
-(char)updateWithItemState:(id)arg1 context:(id)arg2 animated:(char)arg3 ;
-(id)viewForElementIdentifier:(id)arg1 ;
-(void)_buttonAction:(id)arg1 ;
-(void)_imageTapAction:(id)arg1 ;
-(void)_menuButtonAction:(id)arg1 ;
-(void)_destroyMenuPopover;
-(void)menuPopoverDidCancel:(id)arg1 ;
-(void)menuPopover:(id)arg1 didSelectMenuItemAtIndex:(int)arg2 ;
-(void)menuPopover:(id)arg1 willRepositionToRect:(inout CGRect*)arg2 inView:(inout id*)arg3 ;
-(id)_viewElementForView:(id)arg1 ;
@end


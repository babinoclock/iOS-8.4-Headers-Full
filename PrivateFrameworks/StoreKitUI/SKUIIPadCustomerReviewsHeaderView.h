/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:48 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIControl.h>
#import <StoreKitUI/SKUIMenuViewControllerDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@class UIButton, SKUIClientContext, SKUIColorScheme, UIPopoverController, UIView, UILabel, NSArray, UIControl, NSString;

@interface SKUIIPadCustomerReviewsHeaderView : UIControl <SKUIMenuViewControllerDelegate, UIPopoverControllerDelegate> {

	UIButton* _appSupportButton;
	SKUIClientContext* _clientContext;
	SKUIColorScheme* _colorScheme;
	UIPopoverController* _sortPopoverController;
	int _selectedSortIndex;
	UIView* _separatorView;
	UIButton* _sortButton;
	UILabel* _sortLabel;
	NSArray* _sortTitles;
	UILabel* _titleLabel;
	UIButton* _writeAReviewButton;

}

@property (nonatomic,retain) SKUIColorScheme * colorScheme;                 //@synthesize colorScheme=_colorScheme - In the implementation block
@property (nonatomic,readonly) UIControl * appSupportButton;                //@synthesize appSupportButton=_appSupportButton - In the implementation block
@property (nonatomic,readonly) UIControl * writeAReviewButton;              //@synthesize writeAReviewButton=_writeAReviewButton - In the implementation block
@property (assign,nonatomic) int selectedSortIndex;                         //@synthesize selectedSortIndex=_selectedSortIndex - In the implementation block
@property (nonatomic,copy) NSArray * sortTitles;                            //@synthesize sortTitles=_sortTitles - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(int)selectedSortIndex;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)setSelectedSortIndex:(int)arg1 ;
-(id)initWithClientContext:(id)arg1 ;
-(SKUIColorScheme *)colorScheme;
-(void)setColorScheme:(SKUIColorScheme *)arg1 ;
-(void)menuViewController:(id)arg1 didSelectItemAtIndex:(int)arg2 ;
-(UIControl *)appSupportButton;
-(UIControl *)writeAReviewButton;
-(void)setSortTitles:(NSArray *)arg1 ;
-(void)_reloadSortButton;
-(void)_destroySortPopoverController;
-(void)_sortButtonAction:(id)arg1 ;
-(NSArray *)sortTitles;
@end


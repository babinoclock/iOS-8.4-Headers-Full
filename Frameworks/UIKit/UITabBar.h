/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:42 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/_UIBackdropViewGraphicsQualityChangeDelegate.h>
#import <UIKit/_UIShadowedView.h>

@protocol UITabBarDelegate;
@class UIView, _UITabBarBackgroundView, _UIBackdropView, NSArray, UITabBarItem, _UITabBarAppearanceStorage, NSMutableArray, NSString, UIColor, UIImage;

@interface UITabBar : UIView <_UIBackdropViewGraphicsQualityChangeDelegate, _UIShadowedView> {

	UIView* _customizeView;
	_UITabBarBackgroundView* _backgroundView;
	_UIBackdropView* _adaptiveBackdrop;
	UIView* _shadowView;
	id<UITabBarDelegate> _delegate;
	NSArray* _items;
	UITabBarItem* _selectedItem;
	NSArray* _customizationItems;
	int _barOrientation;
	struct {
		unsigned alertShown : 1;
		unsigned wasEnabled : 1;
		unsigned customized : 1;
		unsigned downButtonSentAction : 1;
		unsigned isLocked : 1;
		unsigned backgroundIsPattern : 1;
		unsigned hasCustomBackgroundView : 1;
		unsigned barStyle : 3;
		unsigned barTranslucence : 3;
		unsigned backgroundNeedsUpdate : 1;
	}  _tabBarFlags;
	NSArray* _buttonItems;
	CFArrayRef _hiddenItems;
	_UITabBarAppearanceStorage* _appearanceStorage;
	char _dividerImagesChangeWithSelection;
	char _dividerImagesAreInvalid;
	char _hidesShadow;
	char _showsHighlightedState;
	float _nextSelectionSlideDuration;
	NSMutableArray* _dividerImageViews;
	int _itemPositioning;
	float _itemDimension;
	float _itemSpacing;
	int _barMetrics;
	int _imageStyle;
	int _tabBarSizing;
	UIView* _accessoryView;
	NSString* _backdropViewLayerGroupName;

}

@property (setter=_setBackgroundView:,nonatomic,retain) UIView * _backgroundView; 
@property (assign,nonatomic) id<UITabBarDelegate> delegate;                                                                                                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * items; 
@property (assign,nonatomic) UITabBarItem * selectedItem; 
@property (nonatomic,retain) UIColor * tintColor; 
@property (nonatomic,retain) UIColor * barTintColor; 
@property (nonatomic,retain) UIColor * selectedImageTintColor; 
@property (nonatomic,retain) UIImage * backgroundImage; 
@property (nonatomic,retain) UIImage * selectionIndicatorImage; 
@property (nonatomic,retain) UIImage * shadowImage; 
@property (assign,nonatomic) int itemPositioning;                                                                                                          //@synthesize itemPositioning=_itemPositioning - In the implementation block
@property (assign,nonatomic) float itemWidth;                                                                                                              //@synthesize itemDimension=_itemDimension - In the implementation block
@property (assign,nonatomic) float itemSpacing;                                                                                                            //@synthesize itemSpacing=_itemSpacing - In the implementation block
@property (assign,nonatomic) int barStyle; 
@property (assign,getter=isTranslucent,nonatomic) char translucent; 
@property (assign,getter=isLocked,nonatomic) char locked; 
@property (assign,setter=_setBarOrientation:,nonatomic) int _barOrientation; 
@property (assign,setter=_setShowsHighlightedState:,nonatomic) char _showsHighlightedState;                                                                //@synthesize showsHighlightedState=_showsHighlightedState - In the implementation block
@property (assign,setter=_setAccessoryView:,nonatomic) UIView * _accessoryView;                                                                            //@synthesize accessoryView=_accessoryView - In the implementation block
@property (assign,setter=_setBackgroundNeedsUpdate:,nonatomic) char _backgroundNeedsUpdate; 
@property (setter=_setBackdropViewLayerGroupName:,getter=_backdropViewLayerGroupName,nonatomic,retain) NSString * backdropViewLayerGroupName;              //@synthesize backdropViewLayerGroupName=_backdropViewLayerGroupName - In the implementation block
@property (assign,setter=_setNextSelectionSlideDuration:,nonatomic) float _nextSelectionSlideDuration;                                                     //@synthesize nextSelectionSlideDuration=_nextSelectionSlideDuration - In the implementation block
@property (assign,setter=_setTabButtonWidth:,nonatomic) float _tabButtonWidth; 
@property (assign,setter=_setInterTabButtonSpacing:,nonatomic) float _interTabButtonSpacing; 
@property (assign,setter=_setDividerImagesChangeWithSelection:,nonatomic) char _dividerImagesChangeWithSelection;                                          //@synthesize dividerImagesChangeWithSelection=_dividerImagesChangeWithSelection - In the implementation block
@property (assign,setter=_setDividerImagesAreInvalid:,nonatomic) char _dividerImagesAreInvalid;                                                            //@synthesize dividerImagesAreInvalid=_dividerImagesAreInvalid - In the implementation block
@property (setter=_setDividerImageViews:,nonatomic,retain) NSMutableArray * _dividerImageViews;                                                            //@synthesize dividerImageViews=_dividerImageViews - In the implementation block
@property (assign,setter=_setBarMetrics:,nonatomic) int _barMetrics;                                                                                       //@synthesize barMetrics=_barMetrics - In the implementation block
@property (assign,setter=_setImageStyle:,nonatomic) int _imageStyle;                                                                                       //@synthesize imageStyle=_imageStyle - In the implementation block
@property (assign,setter=_setHidesShadow:,nonatomic) char _hidesShadow;                                                                                    //@synthesize hidesShadow=_hidesShadow - In the implementation block
@property (assign,setter=_setTabBarSizing:,nonatomic) int _tabBarSizing;                                                                                   //@synthesize tabBarSizing=_tabBarSizing - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_initializeForIdiom:(int)arg1 ;
+(id)_unselectedTabTintColorForView:(id)arg1 ;
+(float)_buttonGap;
+(id)_tabBarForView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAutoresizingMask:(unsigned)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<UITabBarDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(char)_contentHuggingDefault_isUsuallyFixedHeight;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<UITabBarDelegate>)delegate;
-(UIView *)_backgroundView;
-(void)setTranslatesAutoresizingMaskIntoConstraints:(char)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_setVisualAltitude:(float)arg1 ;
-(void)_setVisualAltitudeBias:(CGSize)arg1 ;
-(char)isTranslucent;
-(char)isLocked;
-(id)preferredFocusedItem;
-(char)_canDrawContent;
-(void)setTintColor:(UIColor *)arg1 ;
-(char)canBecomeFocused;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(id)hitTest:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(void)_didChangeFromIdiom:(int)arg1 onScreen:(id)arg2 traverseHierarchy:(char)arg3 ;
-(char)_subclassImplementsDrawRect;
-(UIImage *)backgroundImage;
-(UIImage *)shadowImage;
-(void)setShadowImage:(UIImage *)arg1 ;
-(id)_appearanceStorage;
-(id)_shadowView;
-(void)_setBackgroundView:(id)arg1 ;
-(id)_effectiveBarTintColor;
-(void)_updateBackgroundImage;
-(void)setItems:(id)arg1 animated:(char)arg2 ;
-(NSArray *)items;
-(void)setLocked:(char)arg1 ;
-(void)setItems:(NSArray *)arg1 ;
-(void)addConstraint:(id)arg1 ;
-(void)removeConstraint:(id)arg1 ;
-(void)setBarStyle:(int)arg1 ;
-(char)_wantsAdaptiveBackdrop;
-(int)barStyle;
-(void)setTranslucent:(char)arg1 ;
-(void)setBarTintColor:(UIColor *)arg1 ;
-(void)_accessibilityButtonShapesParametersDidChange;
-(void)_setBackdropViewLayerGroupName:(id)arg1 ;
-(char)_hidesShadow;
-(void)_setHidesShadow:(char)arg1 ;
-(UIColor *)barTintColor;
-(id)_backdropViewLayerGroupName;
-(UIView *)_accessoryView;
-(id)backdropView:(id)arg1 willChangeToGraphicsQuality:(int)arg2 ;
-(void)backdropView:(id)arg1 didChangeToGraphicsQuality:(int)arg2 ;
-(void)_setAccessoryView:(id)arg1 ;
-(char)_isTranslucent;
-(void)_setBarOrientation:(int)arg1 ;
-(void)setSelectedItem:(UITabBarItem *)arg1 ;
-(void)beginCustomizingItems:(id)arg1 ;
-(char)isCustomizing;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(void)_sendAction:(id)arg1 withEvent:(id)arg2 ;
-(void)setBadgeValue:(id)arg1 forButton:(int)arg2 ;
-(void)setBadgeGlyph:(id)arg1 forButton:(int)arg2 ;
-(void)setBadgeAnimated:(char)arg1 forButton:(int)arg2 ;
-(id)buttonItems;
-(void)setButtonItems:(id)arg1 ;
-(void)_cleanupAdaptiveBackdrop;
-(void)_buttonDownDelayed:(id)arg1 ;
-(void)_buttonDown:(id)arg1 ;
-(void)_buttonUp:(id)arg1 ;
-(void)_buttonCancel:(id)arg1 ;
-(void)_setDividerImage:(id)arg1 forLeftButtonState:(unsigned)arg2 rightButtonState:(unsigned)arg3 ;
-(id)_dividerImageForLeftButtonState:(unsigned)arg1 rightButtonState:(unsigned)arg2 ;
-(UIImage *)selectionIndicatorImage;
-(void)setSelectionIndicatorImage:(UIImage *)arg1 ;
-(UIColor *)selectedImageTintColor;
-(void)setSelectedImageTintColor:(UIColor *)arg1 ;
-(int)_tabBarSizing;
-(char)_showsHighlightedState;
-(int)_barMetrics;
-(void)_setShowsHighlightedState:(char)arg1 ;
-(void)_configureTabBarReplacingItem:(id)arg1 withNewItem:(id)arg2 dragging:(char)arg3 swapping:(char)arg4 ;
-(void)_positionTabBarButtons:(id)arg1 ignoringItem:(id)arg2 ;
-(void)_setBackgroundImage:(id)arg1 ;
-(void)_setSelectionIndicatorImage:(id)arg1 ;
-(void)_setLabelFont:(id)arg1 ;
-(void)_setLabelTextColor:(id)arg1 selectedTextColor:(id)arg2 ;
-(void)_setLabelShadowColor:(id)arg1 ;
-(void)_setLabelShadowOffset:(CGSize)arg1 ;
-(void)_setBackgroundNeedsUpdate:(char)arg1 ;
-(void)setItemWidth:(float)arg1 ;
-(float)itemWidth;
-(void)setItemSpacing:(float)arg1 ;
-(float)itemSpacing;
-(void)_setBarMetrics:(int)arg1 ;
-(void)_setImageStyle:(int)arg1 ;
-(void)_accessibilityButtonShapesEnabledDidChangeNotification:(id)arg1 ;
-(void)_doCommonTabBarInit;
-(id)_topmostDividerImageView;
-(void)_invalidateDividerImages;
-(void)_updateDividerImagesIfNecessary;
-(void)_animateSelectionChangeFromView:(id)arg1 toView:(id)arg2 duration:(float)arg3 ;
-(void)_showItemsAnimated:(char)arg1 ;
-(int)_imageStyle;
-(void)_finishSetItems:(id)arg1 finished:(id)arg2 context:(id)arg3 ;
-(void)_hideItemsAnimated:(char)arg1 ;
-(int)_effectiveBarOrientation;
-(CGRect)_tabAreaLayoutBounds;
-(char)_backgroundNeedsUpdate;
-(void)_customizeWithAvailableItems:(id)arg1 ;
-(void)_dismissCustomizeSheet:(char)arg1 ;
-(UITabBarItem *)selectedItem;
-(void)_updateTintedImages:(id)arg1 selected:(char)arg2 ;
-(void)_effectiveBarTintColorDidChange;
-(void)_setTabBarSizing:(int)arg1 ;
-(void)_setTabButtonWidth:(float)arg1 ;
-(float)_tabButtonWidth;
-(void)_setInterTabButtonSpacing:(float)arg1 ;
-(float)_interTabButtonSpacing;
-(int)_barOrientation;
-(char)endCustomizingAnimated:(char)arg1 ;
-(void)_makeCurrentButtonFirstResponder;
-(float)_nextSelectionSlideDuration;
-(void)_setNextSelectionSlideDuration:(float)arg1 ;
-(char)_dividerImagesChangeWithSelection;
-(void)_setDividerImagesChangeWithSelection:(char)arg1 ;
-(char)_dividerImagesAreInvalid;
-(void)_setDividerImagesAreInvalid:(char)arg1 ;
-(NSMutableArray *)_dividerImageViews;
-(void)_setDividerImageViews:(id)arg1 ;
-(int)itemPositioning;
-(void)setItemPositioning:(int)arg1 ;
-(void)_tabBarFinishedAnimating;
-(void)dismissCustomizeSheet:(char)arg1 ;
-(void)_alertWillShow:(char)arg1 duration:(float)arg2 ;
-(void)_alertDidHide;
-(void)_adjustButtonSelection:(id)arg1 ;
-(void)_finishCustomizeAnimation:(id)arg1 ;
-(void)_customizeDoneButtonAction:(id)arg1 ;
-(void)_updateAppearanceCustomizationIfNecessaryForItem:(id)arg1 ;
-(void)_configureItems:(id)arg1 ;
-(char)_isHidden:(id)arg1 ;
-(char)isElementAccessibilityExposedToInterfaceBuilder;
-(float)_autolayoutSpacingAtEdge:(int)arg1 inContainer:(id)arg2 ;
-(float)_autolayoutSpacingAtEdge:(int)arg1 nextToNeighbor:(id)arg2 ;
-(char)_hasCustomAutolayoutNeighborSpacing;
@end


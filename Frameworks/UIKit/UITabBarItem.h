/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:43 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIBarItem.h>

@class NSString, UIImage, UIView, UIColor;

@interface UITabBarItem : UIBarItem {

	NSString* _title;
	SEL _action;
	id _target;
	UIImage* _templateImage;
	UIImage* _selectedTemplateImage;
	UIImage* _selectedImage;
	UIImage* _unselectedImage;
	UIEdgeInsets _imageInsets;
	NSString* _badgeValue;
	UIView* _view;
	int _tag;
	id _appearanceStorage;
	struct {
		unsigned enabled : 1;
		unsigned style : 3;
		unsigned isSystemItem : 1;
		unsigned systemItem : 7;
		unsigned viewIsCustom : 1;
		unsigned animatedBadge : 1;
		unsigned customSelectedImage : 1;
		unsigned customUnselectedImage : 1;
	}  _tabBarItemFlags;
	int _barMetrics;
	int _imageStyle;
	UIColor* _tintColor;

}

@property (nonatomic,retain) UIView * view; 
@property (assign,nonatomic) char viewIsCustom; 
@property (assign,nonatomic) char animatedBadge; 
@property (nonatomic,retain) UIImage * unselectedImage; 
@property (assign,nonatomic) SEL action; 
@property (assign,nonatomic) id target; 
@property (nonatomic,retain) UIImage * selectedImage; 
@property (nonatomic,copy) NSString * badgeValue; 
@property (assign,setter=_setBarMetrics:,nonatomic) int _barMetrics;                  //@synthesize barMetrics=_barMetrics - In the implementation block
@property (assign,setter=_setImageStyle:,nonatomic) int _imageStyle;                  //@synthesize imageStyle=_imageStyle - In the implementation block
@property (setter=_setTintColor:,nonatomic,retain) UIColor * _tintColor;              //@synthesize tintColor=_tintColor - In the implementation block
+(id)_appearanceBlindViewClasses;
-(void)setBadgeValue:(id)arg1 animated:(char)arg2 blink:(char)arg3 ;
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setTitle:(id)arg1 ;
-(UIView *)view;
-(id)nextResponder;
-(void)setTarget:(id)arg1 ;
-(SEL)action;
-(id)title;
-(void)setView:(UIView *)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(id)image;
-(id)target;
-(int)tag;
-(void)setTag:(int)arg1 ;
-(void)_updateView;
-(char)isSystemItem;
-(int)systemItem;
-(void)setTitleTextAttributes:(id)arg1 forState:(unsigned)arg2 ;
-(void)_setTintColor:(id)arg1 ;
-(UIColor *)_tintColor;
-(void)setAction:(SEL)arg1 ;
-(id)initWithTitle:(id)arg1 image:(id)arg2 tag:(int)arg3 ;
-(UIImage *)selectedImage;
-(UIImage *)unselectedImage;
-(void)setBadgeValue:(NSString *)arg1 ;
-(id)initWithTabBarSystemItem:(int)arg1 tag:(int)arg2 ;
-(id)_internalTitle;
-(NSString *)badgeValue;
-(id)_internalTemplateImage;
-(id)titleTextAttributesForState:(unsigned)arg1 ;
-(char)_isSelected;
-(void)setSelectedImage:(UIImage *)arg1 ;
-(void)_setSelected:(char)arg1 ;
-(void)_updateToMatchCurrentState;
-(int)_barMetrics;
-(id)_createViewForTabBar:(id)arg1 showingBadge:(char)arg2 withTint:(char)arg3 ;
-(void)_setTitleTextAttributeValue:(id)arg1 forAttributeKey:(id)arg2 state:(unsigned)arg3 ;
-(void)_setBarMetrics:(int)arg1 ;
-(void)_setImageStyle:(int)arg1 ;
-(int)_imageStyle;
-(id)_createViewForTabBar:(id)arg1 showingBadge:(char)arg2 ;
-(void)_updateViewAndPositionItems:(char)arg1 ;
-(void)_updateButtonForTintColor:(id)arg1 selected:(char)arg2 ;
-(char)viewIsCustom;
-(void)setTitlePositionAdjustment:(UIOffset)arg1 ;
-(UIOffset)titlePositionAdjustment;
-(void)_setInternalTitle:(id)arg1 ;
-(void)_setInternalTemplateImage:(id)arg1 ;
-(id)_internalTemplateImages;
-(id)initWithTitle:(id)arg1 image:(id)arg2 selectedImage:(id)arg3 ;
-(void)setImageInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)imageInsets;
-(void)setFinishedSelectedImage:(id)arg1 withFinishedUnselectedImage:(id)arg2 ;
-(id)finishedSelectedImage;
-(id)finishedUnselectedImage;
-(void)setViewIsCustom:(char)arg1 ;
-(void)setAnimatedBadge:(char)arg1 ;
-(char)animatedBadge;
-(void)setUnselectedImage:(UIImage *)arg1 ;
-(id)_updateImageWithTintColor:(id)arg1 isSelected:(char)arg2 getImageOffset:(UIOffset*)arg3 ;
@end


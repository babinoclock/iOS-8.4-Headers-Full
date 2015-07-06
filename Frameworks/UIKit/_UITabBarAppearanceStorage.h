/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:42 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, UIImage, UIColor, _UITabBarItemAppearanceStorage, NSDictionary;

@interface _UITabBarAppearanceStorage : NSObject {

	NSMutableDictionary* _dividerImages;
	UIImage* backgroundImage;
	UIImage* shadowImage;
	UIImage* selectionIndicatorImage;
	UIColor* barTintColor;
	UIColor* selectedImageTintColor;
	_UITabBarItemAppearanceStorage* tabItemAppearanceStorage;

}

@property (nonatomic,retain) UIImage * backgroundImage; 
@property (nonatomic,retain) UIImage * shadowImage; 
@property (nonatomic,retain) UIImage * selectionIndicatorImage; 
@property (nonatomic,retain) UIColor * barTintColor; 
@property (nonatomic,retain) UIColor * selectedImageTintColor; 
@property (nonatomic,retain) _UITabBarItemAppearanceStorage * tabItemAppearanceStorage; 
@property (nonatomic,copy,readonly) NSDictionary * dividerImagesForCoding; 
-(void)dealloc;
-(UIImage *)backgroundImage;
-(UIImage *)shadowImage;
-(void)setShadowImage:(UIImage *)arg1 ;
-(void)setBarTintColor:(UIColor *)arg1 ;
-(UIColor *)barTintColor;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(void)setTabItemAppearanceStorage:(_UITabBarItemAppearanceStorage *)arg1 ;
-(_UITabBarItemAppearanceStorage *)tabItemAppearanceStorage;
-(id)_tabItemAppearanceStorage;
-(void)_setDividerImage:(id)arg1 forLeftButtonState:(unsigned)arg2 rightButtonState:(unsigned)arg3 ;
-(id)_dividerImageForLeftButtonState:(unsigned)arg1 rightButtonState:(unsigned)arg2 ;
-(NSDictionary *)dividerImagesForCoding;
-(UIImage *)selectionIndicatorImage;
-(void)setSelectionIndicatorImage:(UIImage *)arg1 ;
-(UIColor *)selectedImageTintColor;
-(void)setSelectedImageTintColor:(UIColor *)arg1 ;
@end

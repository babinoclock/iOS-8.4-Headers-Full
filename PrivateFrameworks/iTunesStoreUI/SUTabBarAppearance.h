/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:33 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/NSCopying.h>

@class UIImage, NSMutableDictionary;

@interface SUTabBarAppearance : NSObject <NSCopying> {

	UIImage* _backgroundImage;
	UIImage* _dividerImage;
	UIImage* _selectedDividerImage;
	UIImage* _selectionIndicatorImage;
	float _tabBarButtonSpacing;
	float _tabBarButtonWidth;
	NSMutableDictionary* _titleTextAttributes;

}

@property (nonatomic,retain) UIImage * backgroundImage;                      //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (nonatomic,retain) UIImage * dividerImage;                         //@synthesize dividerImage=_dividerImage - In the implementation block
@property (nonatomic,retain) UIImage * selectedDividerImage;                 //@synthesize selectedDividerImage=_selectedDividerImage - In the implementation block
@property (nonatomic,retain) UIImage * selectionIndicatorImage;              //@synthesize selectionIndicatorImage=_selectionIndicatorImage - In the implementation block
@property (assign,nonatomic) float tabBarButtonSpacing;                      //@synthesize tabBarButtonSpacing=_tabBarButtonSpacing - In the implementation block
@property (assign,nonatomic) float tabBarButtonWidth;                        //@synthesize tabBarButtonWidth=_tabBarButtonWidth - In the implementation block
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIImage *)backgroundImage;
-(void)setTitleTextAttributes:(id)arg1 forState:(unsigned)arg2 ;
-(id)titleTextAttributesForState:(unsigned)arg1 ;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(UIImage *)selectionIndicatorImage;
-(void)setSelectionIndicatorImage:(UIImage *)arg1 ;
-(float)tabBarButtonWidth;
-(float)tabBarButtonSpacing;
-(UIImage *)dividerImage;
-(UIImage *)selectedDividerImage;
-(void)enumerateTitleTextAttributesUsingBlock:(/*^block*/id)arg1 ;
-(void)setDividerImage:(UIImage *)arg1 ;
-(void)setSelectedDividerImage:(UIImage *)arg1 ;
-(void)setTabBarButtonSpacing:(float)arg1 ;
-(void)setTabBarButtonWidth:(float)arg1 ;
@end


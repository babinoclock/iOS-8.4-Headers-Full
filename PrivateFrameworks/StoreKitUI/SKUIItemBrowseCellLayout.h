/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:48 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIItemCellLayout.h>

@class _SKUIItemBrowseCellContentView, UIColor, NSString;

@interface SKUIItemBrowseCellLayout : SKUIItemCellLayout {

	_SKUIItemBrowseCellContentView* _cellContentView;
	CGSize _imageBoundingSize;
	char _largeSpacing;
	int _numberOfUserRatings;
	UIColor* _primaryTextColor;
	UIColor* _secondaryTextColor;
	float _userRating;

}

@property (nonatomic,copy) NSString * category; 
@property (nonatomic,copy) NSString * indexNumberString; 
@property (assign,nonatomic) int numberOfUserRatings;                              //@synthesize numberOfUserRatings=_numberOfUserRatings - In the implementation block
@property (assign,nonatomic) float userRating;                                     //@synthesize userRating=_userRating - In the implementation block
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,copy) NSString * title; 
@property (assign,getter=isLargeSpacing,nonatomic) char largeSpacing;              //@synthesize largeSpacing=_largeSpacing - In the implementation block
@property (assign,nonatomic) CGSize imageBoundingSize;                             //@synthesize imageBoundingSize=_imageBoundingSize - In the implementation block
-(void)setIconImage:(id)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)category;
-(NSString *)title;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(id)initWithTableViewCell:(id)arg1 ;
-(void)setUserRating:(float)arg1 ;
-(float)userRating;
-(void)setColoringWithColorScheme:(id)arg1 ;
-(int)numberOfUserRatings;
-(void)_reloadUserRatingViews;
-(id)_decimalNumberFormatter;
-(void)setNumberOfUserRatings:(int)arg1 ;
-(id)initWithParentView:(id)arg1 ;
-(void)setImageBoundingSize:(CGSize)arg1 ;
-(id)initWithCollectionViewCell:(id)arg1 ;
-(void)layoutForItemOfferChange;
-(CGSize)imageBoundingSize;
-(void)_initSKUIItemBrowseCellLayout;
-(NSString *)indexNumberString;
-(void)setIndexNumberString:(NSString *)arg1 ;
-(void)setLargeSpacing:(char)arg1 ;
-(char)isLargeSpacing;
@end


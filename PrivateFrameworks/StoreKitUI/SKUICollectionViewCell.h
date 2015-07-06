/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:43 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UIView, UIColor;

@interface SKUICollectionViewCell : UICollectionViewCell {

	UIView* _bottomBorderView;
	int _position;
	UIView* _leftBorderView;
	UIView* _rightBorderView;
	UIColor* _separatorColor;
	int _separatorStyle;
	UIEdgeInsets _separatorWidths;
	UIView* _topBorderView;
	UIEdgeInsets _separatorInsets;

}

@property (assign,nonatomic) int separatorStyle;                        //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (assign,nonatomic) char showsCellSeparators; 
@property (nonatomic,retain) UIColor * separatorColor;                  //@synthesize separatorColor=_separatorColor - In the implementation block
@property (assign,nonatomic) UIEdgeInsets separatorWidths;              //@synthesize separatorWidths=_separatorWidths - In the implementation block
@property (assign,nonatomic) UIEdgeInsets separatorInsets;              //@synthesize separatorInsets=_separatorInsets - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(char)arg1 ;
-(UIColor *)separatorColor;
-(void)setSeparatorStyle:(int)arg1 ;
-(void)setSeparatorColor:(UIColor *)arg1 ;
-(void)setSelected:(char)arg1 ;
-(int)separatorStyle;
-(void)applyLayoutAttributes:(id)arg1 ;
-(char)_showsBottomBorder;
-(char)_showsLeftBorder;
-(char)_showsRightBorder;
-(char)_showsTopBorder;
-(void)_updateBorderVisibility;
-(void)setSeparatorWidths:(UIEdgeInsets)arg1 ;
-(void)setShowsCellSeparators:(char)arg1 ;
-(char)showsCellSeparators;
-(UIEdgeInsets)separatorWidths;
-(UIEdgeInsets)separatorInsets;
-(void)setSeparatorInsets:(UIEdgeInsets)arg1 ;
-(void)_setPosition:(int)arg1 ;
@end


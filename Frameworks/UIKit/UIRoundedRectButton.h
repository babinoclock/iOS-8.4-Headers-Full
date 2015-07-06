/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:42 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIButton.h>

@class UIBezierPath, UIColor, UIGroupTableViewCellBackground, UIView;

@interface UIRoundedRectButton : UIButton {

	UIBezierPath* _fillPath;
	UIColor* _fillColor;
	UIGroupTableViewCellBackground* _tableViewStyleBackground;
	UIView* _shadowView;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(id)_backgroundView;
-(char)_canDrawContent;
-(void)setTintColor:(id)arg1 ;
-(void)setHighlighted:(char)arg1 ;
-(void)_updateState;
-(id)_contentBackgroundColor;
-(int)buttonType;
-(id)initWithFrame:(CGRect)arg1 fillColor:(id)arg2 ;
-(void)_commonRoundedRectButtonInit;
-(char)_wantsTableViewStyleBackground;
-(id)_setupBackgroundView;
-(void)_invalidatePaths;
-(void)_invalidateBackingViews;
@end

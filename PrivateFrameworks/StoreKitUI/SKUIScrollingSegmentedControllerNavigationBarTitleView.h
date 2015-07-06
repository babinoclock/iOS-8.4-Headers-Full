/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:53 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class SKUIScrollingSegmentedController;

@interface SKUIScrollingSegmentedControllerNavigationBarTitleView : UIView {

	CGSize _lastMeasuredNavigationBarTitleViewSizeBeforeCurrentCommit;
	SKUIScrollingSegmentedController* _owningController;

}

@property (assign,nonatomic,__weak) SKUIScrollingSegmentedController * owningController;              //@synthesize owningController=_owningController - In the implementation block
-(void)layoutSubviews;
-(void)setOwningController:(SKUIScrollingSegmentedController *)arg1 ;
-(CGSize)_navigationBarTitleViewSizeWithDesiredValue:(CGSize)arg1 originalValue:(CGSize)arg2 ;
-(SKUIScrollingSegmentedController *)owningController;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:05 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class UIView;


@protocol UIFocusContainer <NSObject>
@property (nonatomic,readonly) id<UIFocusContainer> preferredFocusedItem; 
@property (nonatomic,readonly) UIView * focusedView; 
@required
-(UIView *)focusedView;
-(id<UIFocusContainer>)preferredFocusedItem;
-(void)setNeedsPreferredFocusedItemUpdate;
-(char)isAncestorOfItem:(id)arg1;
-(char)shouldChangeFocusedItem:(id)arg1 heading:(unsigned)arg2;
-(void)focusedViewWillChange;
-(void)focusedViewDidChange;

@end

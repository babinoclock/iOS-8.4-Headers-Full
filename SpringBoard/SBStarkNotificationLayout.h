/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:57 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UICollectionViewLayout.h>

@class UICollectionViewLayoutAttributes, NSArray;

@interface SBStarkNotificationLayout : UICollectionViewLayout {

	UICollectionViewLayoutAttributes* _notificationAttributes;
	UICollectionViewLayoutAttributes* _previousNotificationAttributes;
	NSArray* _subActionsAttributes;
	NSArray* _previousSubActionsAttributes;
	UICollectionViewLayoutAttributes* _backgroundAttributes;
	UICollectionViewLayoutAttributes* _previousBackgroundAttributes;
	float _notificationHeight;
	float _transitionSpacing;
	UIEdgeInsets _subActionsInsets;
	float _subActionPadding;
	float _subActionHeight;

}

@property (assign,nonatomic) float notificationHeight;                   //@synthesize notificationHeight=_notificationHeight - In the implementation block
@property (assign,nonatomic) float transitionSpacing;                    //@synthesize transitionSpacing=_transitionSpacing - In the implementation block
@property (assign,nonatomic) UIEdgeInsets subActionsInsets;              //@synthesize subActionsInsets=_subActionsInsets - In the implementation block
@property (assign,nonatomic) float subActionPadding;                     //@synthesize subActionPadding=_subActionPadding - In the implementation block
@property (assign,nonatomic) float subActionHeight;                      //@synthesize subActionHeight=_subActionHeight - In the implementation block
-(void)setNotificationHeight:(float)arg1 ;
-(id)_transitionAttributesForAction:(int)arg1 withLayoutAttributes:(id)arg2 ;
-(float)notificationHeight;
-(float)transitionSpacing;
-(void)setTransitionSpacing:(float)arg1 ;
-(UIEdgeInsets)subActionsInsets;
-(void)setSubActionsInsets:(UIEdgeInsets)arg1 ;
-(float)subActionPadding;
-(void)setSubActionPadding:(float)arg1 ;
-(float)subActionHeight;
-(void)setSubActionHeight:(float)arg1 ;
-(void)dealloc;
-(id)init;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)prepareLayout;
-(char)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(id)finalLayoutAttributesForDisappearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(id)initialLayoutAttributesForAppearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)prepareForCollectionViewUpdates:(id)arg1 ;
-(void)finalizeCollectionViewUpdates;
-(id)_indexPathsToDeleteForDecorationViewOfKind:(id)arg1 ;
-(id)_indexPathsToInsertForDecorationViewOfKind:(id)arg1 ;
@end


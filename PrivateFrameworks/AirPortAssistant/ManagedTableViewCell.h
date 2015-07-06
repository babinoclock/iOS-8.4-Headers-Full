/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:23 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirPortAssistant/AirPortAssistant-Structs.h>
#import <UIKit/UITableViewCell.h>

@class TableViewManager, NSMutableDictionary, NSIndexPath;

@interface ManagedTableViewCell : UITableViewCell {

	TableViewManager* _parentTableManager;
	NSMutableDictionary* _cellDict;
	NSIndexPath* _currentIndexPath;
	float _cellXEdgeInset;
	float _neededContentHeight;
	float _computedRightmostEditTextInset;
	float _forcedRightmostEditTextInset;
	CGRect _modifiedContentViewFrame;

}

@property (assign,nonatomic) TableViewManager * parentTableManager;               //@synthesize parentTableManager=_parentTableManager - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cellDict;                      //@synthesize cellDict=_cellDict - In the implementation block
@property (nonatomic,retain) NSIndexPath * currentIndexPath;                      //@synthesize currentIndexPath=_currentIndexPath - In the implementation block
@property (nonatomic,readonly) float neededContentHeight;                         //@synthesize neededContentHeight=_neededContentHeight - In the implementation block
@property (nonatomic,readonly) float computedRightmostEditTextInset;              //@synthesize computedRightmostEditTextInset=_computedRightmostEditTextInset - In the implementation block
@property (assign,nonatomic) float forcedRightmostEditTextInset;                  //@synthesize forcedRightmostEditTextInset=_forcedRightmostEditTextInset - In the implementation block
-(NSIndexPath *)currentIndexPath;
-(void)setCurrentIndexPath:(NSIndexPath *)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(id)accessibilityValue;
-(void)setParentTableManager:(TableViewManager *)arg1 ;
-(void)setForcedRightmostEditTextInset:(float)arg1 ;
-(void)setCellDict:(NSMutableDictionary *)arg1 ;
-(float)neededContentHeight;
-(float)computedRightmostEditTextInset;
-(NSMutableDictionary *)cellDict;
-(float)edgeInsetValue:(id)arg1 ;
-(float)rightInsetForView:(id)arg1 withItem:(id)arg2 ;
-(float)usableContentWidthForItem:(id)arg1 withVerticalNeighborView:(id)arg2 ;
-(float)usableContentWidth;
-(float)leftInsetForView:(id)arg1 withItem:(id)arg2 ;
-(float)horizontalSpacingForView:(id)arg1 withItem:(id)arg2 ;
-(float)verticalSpacingForView:(id)arg1 withItem:(id)arg2 ;
-(float)verticalInset;
-(TableViewManager *)parentTableManager;
-(float)calculateFrameSizeForView:(id)arg1 forItem:(id)arg2 atItemIndex:(unsigned)arg3 withRemainingContentWidth:(float)arg4 ;
-(void)calculatePositionForView:(id)arg1 forItem:(id)arg2 atItemIndex:(unsigned)arg3 ;
-(void)repositionView:(id)arg1 ifOverlapsPreviousView:(id)arg2 ;
-(float)forcedRightmostEditTextInset;
@end


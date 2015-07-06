/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:35:58 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIAccessibilityElement.h>

@class NSIndexPath, UITableViewCell, NSMutableArray;

@interface UITableViewCellAccessibilityElement : UIAccessibilityElement {

	NSIndexPath* _indexPath;
	UITableViewCell* _tableViewCell;
	NSMutableArray* _mockChildren;
	char _usingRealTableViewCell;

}

@property (nonatomic,retain) NSIndexPath * indexPath;                                //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,retain) UITableViewCell * tableViewCell;                        //@synthesize tableViewCell=_tableViewCell - In the implementation block
@property (nonatomic,readonly) UITableViewCell * realTableViewCell; 
@property (nonatomic,readonly) UITableViewCell * existingTableViewCell; 
@property (assign,nonatomic) char usingRealTableViewCell;                            //@synthesize usingRealTableViewCell=_usingRealTableViewCell - In the implementation block
-(char)_accessibilityUserTestingIsCancelButton;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UITableViewCell *)realTableViewCell;
-(id)_accessibilityUserTestingChildren;
-(char)_accessibilityIsScannerGroup;
-(char)_accessibilityIsSpeakThisElement;
-(id)_accessibilityAbsoluteValue;
-(CGPoint)_accessibilityMinScrubberPosition;
-(CGPoint)_accessibilityMaxScrubberPosition;
-(char)_accessibilitySupportsActivateAction;
-(char)_accessibilityIsScannerElement;
-(void)unregisterAllChildren;
-(void)registerMockChild:(id)arg1 ;
-(UITableViewCell *)existingTableViewCell;
-(void)setTableViewCell:(UITableViewCell *)arg1 ;
-(void)unregisterMockChild:(id)arg1 ;
-(char)usingRealTableViewCell;
-(int)_accessibilityCompareElement:(id)arg1 toElement:(id)arg2 ;
-(id)_accessibilityCustomActions;
-(char)_accessibilityIsInTableCell;
-(char)_accessibilityIsTableCell;
-(float)_accessibilityAllowedGeometryOverlap;
-(id)_accessibilityDataDetectorScheme:(CGPoint)arg1 ;
-(CGRect)_accessibilityBoundsForRange:(NSRange)arg1 ;
-(id)accessibilityCustomRotorTitles;
-(char)_allowCustomActionHintSpeakOverride;
-(id)accessibilityCustomRotorItemsAtIndex:(int)arg1 ;
-(char)_accessibilityIsAwayAlertElement;
-(id)_accessibilityLineNumberAndColumnForPoint:(CGPoint)arg1 ;
-(NSRange)_accessibilityRangeForLineNumberAndColumn:(id)arg1 ;
-(CGRect)_accessibilityChargedLineBoundsForRange:(NSRange)arg1 ;
-(id)_accessibilityEquivalenceTag;
-(char)_accessibilityUserTestingIsDefaultButton;
-(char)_accessibilityIsOutsideParentBounds;
-(id)_accessibilityTextViewTextOperationResponder;
-(id)_accessibilityTextOperations;
-(void)_accessibilityCopy;
-(void)_accessibilityCut;
-(void)_accessibilitySelect;
-(void)_accessibilityPaste;
-(void)_accessibilitySelectAll;
-(char)_accessibilityHasTextOperations;
-(int)_accessibilityScannerActivateBehavior;
-(id)_accessibilitySpeakThisString;
-(char)_accessibilityRetainsCustomRotorActionSetting;
-(char)_accessibilityBackingElementIsValid;
-(id)_accessibilityUserTestingVisibleAncestor;
-(char)accessibilityScrollToVisibleWithChild:(id)arg1 ;
-(void)setUsingRealTableViewCell:(char)arg1 ;
-(UITableViewCell *)tableViewCell;
-(void)dealloc;
-(id)description;
-(NSIndexPath *)indexPath;
-(id)accessibilityIdentifier;
-(id)accessibilityLabel;
-(CGRect)accessibilityFrame;
-(id)accessibilityValue;
-(id)accessibilityHint;
-(CGPoint)accessibilityActivationPoint;
-(unsigned long long)accessibilityTraits;
-(char)isAccessibilityElement;
-(id)accessibilityLanguage;
-(char)shouldGroupAccessibilityChildren;
-(void)accessibilityElementDidBecomeFocused;
-(void)accessibilityElementDidLoseFocus;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(char)accessibilityPerformEscape;
-(char)accessibilityPerformMagicTap;
-(char)accessibilityActivate;
-(int)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(int)arg1 ;
-(int)indexOfAccessibilityElement:(id)arg1 ;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
-(NSRange)accessibilityRowRange;
-(NSRange)_accessibilitySelectedTextRange;
-(void)_accessibilitySetSelectedTextRange:(NSRange)arg1 ;
@end

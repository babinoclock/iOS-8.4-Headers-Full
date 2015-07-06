/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:35:59 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIAccessibilityElement.h>
#import <UIKit/UIAccessibilityElementMockViewDelegateProtocol.h>

@class NSMutableArray;

@interface UITableViewSectionElement : UIAccessibilityElement <UIAccessibilityElementMockViewDelegateProtocol> {

	char _isHeader;
	int _section;
	NSMutableArray* _children;

}

@property (assign,nonatomic) int section;                //@synthesize section=_section - In the implementation block
@property (assign,nonatomic) char isHeader;              //@synthesize isHeader=_isHeader - In the implementation block
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(char)_accessibilityIsNotFirstElement;
-(void)_accessibilityClearChildren;
-(char)isHeader;
-(void)setIsHeader:(char)arg1 ;
-(id)accessibilityContainerElements;
-(char)accessibilityScrollToVisible;
-(void)accessibilityScrollToVisibleWithChild:(id)arg1 ;
-(void)updateMockView:(id)arg1 ;
-(id)accessibilityChildren;
-(void)_appendTextChildWithTitle:(id)arg1 ;
-(id)_accessibilityAccessibleElementsInView:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(int)section;
-(id)accessibilityIdentifier;
-(CGRect)accessibilityFrame;
-(char)isAccessibilityElement;
-(void)setSection:(int)arg1 ;
@end


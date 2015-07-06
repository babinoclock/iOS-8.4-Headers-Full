/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:35:58 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIAccessibilityElement.h>

@interface UIAccessibilityTextLineElement : UIAccessibilityElement {

	NSRange _range;
	CGRect _bounds;

}

@property (assign,nonatomic) NSRange textRange;              //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) CGRect textBounds;              //@synthesize bounds=_bounds - In the implementation block
-(CGRect)textBounds;
-(void)setTextBounds:(CGRect)arg1 ;
-(id)accessibilityValue;
-(id)accessibilityHint;
-(unsigned long long)accessibilityTraits;
-(NSRange)textRange;
-(void)setTextRange:(NSRange)arg1 ;
-(NSRange)_accessibilitySelectedTextRange;
-(void)_accessibilitySetSelectedTextRange:(NSRange)arg1 ;
@end


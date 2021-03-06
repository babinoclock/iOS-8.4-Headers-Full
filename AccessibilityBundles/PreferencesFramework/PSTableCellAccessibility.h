/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:35:55 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/AccessibilityBundles/PreferencesFramework.axbundle/PreferencesFramework
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PreferencesFramework/PreferencesFramework-Structs.h>
#import <PreferencesFramework/__PSTableCellAccessibility_super.h>

@interface PSTableCellAccessibility : __PSTableCellAccessibility_super
+(void)_setAccessibilityData:(id)arg1 onCell:(id)arg2 ;
+(id)safeCategoryTargetClassName;
+(Class)safeCategoryTargetClass;
-(void)_accessibilityLoadAccessibilityInformationWithSpecifier:(id)arg1 ;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_accessibilityLoadAccessibilityInformation;
-(id)_accessibilityUserTestingChildren;
-(char)_accessibilityIsSpeakThisElement;
-(CGPoint)_accessibilityMinScrubberPosition;
-(CGPoint)_accessibilityMaxScrubberPosition;
-(char)_accessibilityIsScannerElement;
-(char)_accessibilityLanguageOverriddesUser;
-(id)accessibilityLabel;
-(void)prepareForReuse;
-(id)accessibilityValue;
-(id)accessibilityHint;
-(CGPoint)accessibilityActivationPoint;
-(unsigned long long)accessibilityTraits;
-(char)isAccessibilityElement;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
@end


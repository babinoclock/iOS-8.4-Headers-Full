/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:50 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /usr/lib/libAXSafeCategoryBundle.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <libAXSafeCategoryBundle.dylib/libAXSafeCategoryBundle.dylib-Structs.h>
@class NSString;

@interface UIAccessibilitySafeCategory : NSObject

@property (nonatomic,copy) NSString * accessibilityIdentifier; 
+(id)safeCategoryTargetClassName;
+(Class)safeCategoryTargetClass;
+(id)_installSafeCategoryValidationMethod;
+(id)_initializeSafeCategoryFromValidationManager;
+(id)_installSafeCategoryOnClassNamed:(id)arg1 isManaged:(char)arg2 ;
+(id)_installLocalValidationMethodOnClassNamed:(id)arg1 ;
+(void)_addCategoryMethod:(objc_methodRef)arg1 toClass:(Class)arg2 isClass:(char)arg3 ;
+(id)_installSafeCategoryOnClass:(Class)arg1 isManaged:(char)arg2 ;
+(Class)safeCategoryBaseClass;
+(void)safeCategoryAddDependenciesToCollection:(id)arg1 ;
+(void)_installSafeCategoryOnClassNamed:(id)arg1 ;
@end

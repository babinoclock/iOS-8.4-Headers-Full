/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:35:52 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/AccessibilityBundles/AccessibilitySettingsLoader.bundle/AccessibilitySettingsLoader
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AccessibilitySettingsLoader/AccessibilitySettingsLoader-Structs.h>
@interface AssistiveTouchHelper : NSObject
+(void)initializeMonitoring;
-(void)_sendKeyboardStatusUpdate:(CGRect)arg1 ;
-(void)installMediaCategoriesAndValidate;
-(void)installiPodUICategoriesAndValidate;
-(void)installKeyboardListener;
-(void)installMediaControlsListener;
-(void)_handleMediaPlaybackEnded;
-(id)init;
-(void)enable;
@end


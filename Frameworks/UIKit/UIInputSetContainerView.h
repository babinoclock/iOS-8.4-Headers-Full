/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:59 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIInputSetHostView.h>

@class UIKBRenderConfig;

@interface UIInputSetContainerView : UIInputSetHostView {

	UIKBRenderConfig* _renderConfig;
	char _disableGeometryObserverNotifications;

}
+(char)_shouldHitTestInputViewFirst;
+(char)_notifyOnExplicitLayout;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(char)_disableGeometryObserverNotification;
-(void)_setRenderConfig:(id)arg1 ;
-(int)textEffectsVisibilityLevel;
-(id)_inheritedRenderConfig;
-(CGRect)_accessoryViewFrame;
-(void)_setAccessoryViewFrame:(CGRect)arg1 ;
-(id)_inputWindowController;
-(void)performWithoutGeometryObserverNotifications:(/*^block*/id)arg1 ;
@end


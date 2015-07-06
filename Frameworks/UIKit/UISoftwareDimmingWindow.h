/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:40 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIWindow.h>

@interface UISoftwareDimmingWindow : UIWindow {

	float _overlayLevel;

}

@property (assign,nonatomic) float overlayLevel;              //@synthesize overlayLevel=_overlayLevel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(char)_ignoresHitTest;
-(void)updateOverlayColor;
-(void)setOverlayLevel:(float)arg1 ;
-(float)overlayLevel;
@end


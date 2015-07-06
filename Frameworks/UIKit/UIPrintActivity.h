/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:59 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIActivity.h>

@class UIViewController;

@interface UIPrintActivity : UIActivity {

	UIViewController* _wrapperViewController;

}

@property (retain) UIViewController * wrapperViewController;              //@synthesize wrapperViewController=_wrapperViewController - In the implementation block
-(void)dealloc;
-(id)activityType;
-(id)_activityImage;
-(id)activityTitle;
-(void)activityDidFinish:(char)arg1 ;
-(char)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(id)printInteractionControllerParentViewController:(id)arg1 ;
-(void)prepareWithActivityItems:(id)arg1 ;
-(id)_embeddedActivityViewController;
-(void)setWrapperViewController:(UIViewController *)arg1 ;
-(void)cancelPrintOptions;
-(id)printInteractionController;
-(UIViewController *)wrapperViewController;
@end

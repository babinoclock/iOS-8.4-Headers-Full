/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:55 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class _UIFallbackPresentationWindow, UIWindow;

@interface _UIFallbackPresentationViewController : UIViewController {

	_UIFallbackPresentationWindow* _presentationWindow;
	UIWindow* _rotationDecider;

}

@property (nonatomic,retain) UIWindow * rotationDecider;              //@synthesize rotationDecider=_rotationDecider - In the implementation block
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(char)shouldAutorotate;
-(unsigned)supportedInterfaceOrientations;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(char)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)setRotationDecider:(UIWindow *)arg1 ;
-(void)_presentViewController:(id)arg1 sendingView:(id)arg2 animated:(char)arg3 ;
-(UIWindow *)rotationDecider;
@end


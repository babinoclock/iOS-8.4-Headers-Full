/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:10 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSRootController.h>

@protocol PSController;
@class NSDictionary, UIViewController, PSRootController;

@interface PSSetupController : PSRootController {

	NSDictionary* _rootInfo;
	UIViewController*<PSController> _parentController;
	PSRootController* _parentRootController;

}
-(void)dealloc;
-(id)init;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)dismiss;
-(void)dismissAnimated:(char)arg1 ;
-(id)controller;
-(id)parentController;
-(void)setParentController:(id)arg1 ;
-(void)setupController;
-(void)dismissWithCompletion:(/*^block*/id)arg1 ;
-(void)dismissAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(char)usePopupStyle;
-(char)popupStyleIsModal;
-(void)showController:(id)arg1 animate:(char)arg2 ;
-(void)handleURL:(id)arg1 ;
-(void)statusBarWillChangeHeight:(id)arg1 ;
-(void)pushControllerOnParentWithSpecifier:(id)arg1 ;
-(void)popControllerOnParent;
@end

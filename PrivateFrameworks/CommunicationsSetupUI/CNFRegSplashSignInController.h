/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:05 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CommunicationsSetupUI/CNFRegSignInController.h>

@class CNFRegSigninLearnMoreView;

@interface CNFRegSplashSignInController : CNFRegSignInController {

	CNFRegSigninLearnMoreView* _signInView;

}
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(id)passwordTextField;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(id)specifierList;
-(void)_setFieldsEnabled:(char)arg1 animated:(char)arg2 ;
-(void)setUsernameText:(id)arg1 ;
-(id)usernameTextField;
-(id)_existingLearnMoreViewForSpecifier:(id)arg1 ;
-(id)_existingLearnMoreViewForSection:(int)arg1 ;
-(char)usernameIsEmpty;
-(char)passwordIsEmpty;
-(void)setPasswordText:(id)arg1 ;
@end


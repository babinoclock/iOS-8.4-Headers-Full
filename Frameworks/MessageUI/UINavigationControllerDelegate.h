/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:40 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol UINavigationControllerDelegate <NSObject>
@optional
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(char)arg3;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(char)arg3;
-(id)navigationController:(id)arg1 animationControllerForOperation:(int)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
-(id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
-(unsigned)navigationControllerSupportedInterfaceOrientations:(id)arg1;
-(int)navigationControllerPreferredInterfaceOrientationForPresentation:(id)arg1;

@end


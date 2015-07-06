/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:38 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <FuseUI/MusicJSUserInterfaceStatusController.h>

@protocol MusicJSUserInterfaceStatusController <JSExport>
@required
-(char)hasUserRequestedSubscriptionHidden;
-(void)setHasUserRequestedSubscriptionHidden:(char)arg1;
-(char)canShowConnect;
-(char)canShowRadio;
-(char)canShowSubscriptionContent;
-(id)tabState;
-(char)hasUserAcknowledgedWelcomeScreen;
-(void)setHasUserAcknowledgedWelcomeScreen:(char)arg1;

@end


@interface MusicJSUserInterfaceStatusController : IKJSObject <MusicJSUserInterfaceStatusController>
-(char)hasUserRequestedSubscriptionHidden;
-(void)setHasUserRequestedSubscriptionHidden:(char)arg1 ;
-(char)canShowConnect;
-(char)canShowRadio;
-(char)canShowSubscriptionContent;
-(id)tabState;
-(char)hasUserAcknowledgedWelcomeScreen;
-(void)setHasUserAcknowledgedWelcomeScreen:(char)arg1 ;
@end

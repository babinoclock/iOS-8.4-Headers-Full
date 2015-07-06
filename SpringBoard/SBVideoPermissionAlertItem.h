/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:50 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@class NSURL, SBApplication, NSString;

@interface SBVideoPermissionAlertItem : SBAlertItem {

	NSURL* _url;
	SBApplication* _appHandlingURL;
	NSString* _sender;

}
-(id)initWithURL:(id)arg1 applicationHandlingURL:(id)arg2 sender:(id)arg3 ;
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(char)dismissOnLock;
-(char)allowMenuButtonDismissal;
-(void)configure:(char)arg1 requirePasscodeForActions:(char)arg2 ;
-(char)shouldShowInLockScreen;
@end


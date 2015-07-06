/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:56 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@protocol SBThermalWarningAlertItemDelegate;
@interface SBThermalWarningAlertItem : SBAlertItem {

	id<SBThermalWarningAlertItemDelegate> _delegate;
	int _actionTaken;

}

@property (getter=isWaitingForResponse,nonatomic,readonly) char waitingForResponse; 
-(void)_tryToSendAction:(int)arg1 ;
-(void)_autoCoolDown;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)didDeactivateForReason:(int)arg1 ;
-(void)configure:(char)arg1 requirePasscodeForActions:(char)arg2 ;
-(void)willActivate;
-(id)initWithDelegate:(id)arg1 ;
-(void)_playPresentationSound;
-(char)undimsScreen;
-(char)unlocksScreen;
-(char)isWaitingForResponse;
@end


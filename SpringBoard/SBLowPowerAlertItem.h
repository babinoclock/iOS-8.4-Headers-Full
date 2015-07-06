/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:46 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@interface SBLowPowerAlertItem : SBAlertItem {

	unsigned _talkLevel;

}
+(void)saveLowBatteryLogWithCapacity:(int)arg1 voltage:(int)arg2 ;
+(char)_shouldIgnoreChangeToBatteryLevel:(unsigned)arg1 ;
+(unsigned)_thresholdForLevel:(unsigned)arg1 ;
+(void)initialize;
+(id)systemVersionDescription;
+(void)setBatteryLevel:(unsigned)arg1 ;
-(id)init;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)willPresentAlertView:(id)arg1 ;
-(void)configure:(char)arg1 requirePasscodeForActions:(char)arg2 ;
-(char)shouldShowInEmergencyCall;
-(char)shouldShowInLockScreen;
-(char)undimsScreen;
-(id)initWithLevel:(unsigned)arg1 ;
@end


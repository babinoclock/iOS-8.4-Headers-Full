/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:46 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface SBSoundPreferences : NSObject
+(void)userDefaultsDidChanged:(id)arg1 ;
+(char)playLockSound;
+(char)vibrateWhenSilent;
+(char)vibrateWhenRinging;
+(void)_loadDefaultsIfNeeded;
+(id)ringtoneIdentifier;
+(char)shouldVibrateForCurrentRingerStateWithAudioCategory:(id)arg1 ;
+(id)calendarAlarmPath;
+(id)ringtonePath;
+(id)vibratePattern;
+(char)shouldVibrateForCurrentRingerState;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:01 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <TelephonyUI/TelephonyUI-Structs.h>
@interface TPDialerSoundController : NSObject {

	CFSetRef _inflightSounds;
	unsigned _soundsActivated : 1;
	unsigned _incompleteSoundCount;

}

@property (assign) unsigned incompleteSoundCount;              //@synthesize incompleteSoundCount=_incompleteSoundCount - In the implementation block
+(void)_delayedDeactivate;
-(void)dealloc;
-(id)init;
-(void)_stopAllSoundsForcingCallbacks:(char)arg1 ;
-(void)stopSoundForDialerCharacter:(unsigned)arg1 ;
-(void)playSoundForDialerCharacter:(unsigned)arg1 ;
-(void)applicationSuspendedNotification:(id)arg1 ;
-(void)applicationResumedNotification:(id)arg1 ;
-(void)setSoundsActivated:(char)arg1 ;
-(unsigned)incompleteSoundCount;
-(void)setIncompleteSoundCount:(unsigned)arg1 ;
-(void)soundCompletedPlaying:(unsigned long)arg1 ;
@end


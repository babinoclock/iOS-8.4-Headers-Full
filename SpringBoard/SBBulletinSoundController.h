/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:55 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/BBObserverDelegate.h>
#import <SpringBoard/SBBulletinBusyClient.h>

@class BBObserver, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface SBBulletinSoundController : NSObject <BBObserverDelegate, SBBulletinBusyClient> {

	BBObserver* _observer;
	NSMutableArray* _blockQueue;
	NSMutableDictionary* _playingSounds;
	NSMutableSet* _internalBulletinsWePlayedSoundsFor;
	NSMutableSet* _bulletinsRequiringExplicitKill;
	char _deviceIsLocked;
	char _quietModeEnabled;
	unsigned _quietModeState;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_sharedInstanceCreateIfNecessary:(char)arg1 ;
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
-(void)bulletinWindowStoppedBeingBusy;
-(void)_hardwareButtonPressed:(id)arg1 ;
-(char)quietModeEnabled;
-(void)_stopSoundWithID:(id)arg1 internalOnly:(char)arg2 ;
-(char)_shouldHonorPlaySoundRequestForBulletin:(id)arg1 ;
-(void)_enqueueBlock:(/*^block*/id)arg1 forBulletin:(id)arg2 ;
-(unsigned)quietModeState;
-(void)dealloc;
-(id)init;
-(void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned)arg3 playLightsAndSirens:(char)arg4 withReply:(/*^block*/id)arg5 ;
-(void)observer:(id)arg1 removeBulletin:(id)arg2 ;
-(void)observer:(id)arg1 noteAlertBehaviorOverridesChanged:(unsigned)arg2 ;
-(void)observer:(id)arg1 noteAlertBehaviorOverrideStateChanged:(unsigned)arg2 ;
-(void)observer:(id)arg1 noteInvalidatedBulletinIDs:(id)arg2 ;
-(void)observer:(id)arg1 noteServerConnectionStateChanged:(char)arg2 ;
-(void)killSounds;
-(char)playSoundForBulletin:(id)arg1 ;
-(char)isPlayingSoundForBulletin:(id)arg1 ;
-(void)killSoundForBulletin:(id)arg1 ;
-(char)_playSoundForBulletin:(id)arg1 playedInternally:(char)arg2 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:34 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/SpringBoardPlugins/IncomingCall.servicebundle/IncomingCall
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IncomingCall/IncomingCall-Structs.h>
#import <IncomingCall/TUAudioPlayerDelegateProtocol.h>
#import <IncomingCall/SBPluginBundleController.h>

@class TUAudioPlayer, PHStarkHardwareControlsBroadcaster, TUCall;

@interface MPTelephonyManager : NSObject <TUAudioPlayerDelegateProtocol, SBPluginBundleController> {

	TUAudioPlayer* _player;
	char _listeningForCallNotifications;
	char _lockScreenPluginIsActive;
	char _passwordNotificationIsExpired;
	CFUserNotificationRef _passwordNotification;
	PHStarkHardwareControlsBroadcaster* _hardwareControlBroadcaster;

}

@property (readonly) TUCall * activeCall; 
@property (readonly) TUCall * incomingCall; 
@property (readonly) TUCall * heldCall; 
@property (assign,nonatomic) char listeningForCallNotifications;                                           //@synthesize listeningForCallNotifications=_listeningForCallNotifications - In the implementation block
@property (assign,nonatomic) char lockScreenPluginIsActive;                                                //@synthesize lockScreenPluginIsActive=_lockScreenPluginIsActive - In the implementation block
@property (assign,nonatomic) CFUserNotificationRef passwordNotification;                                   //@synthesize passwordNotification=_passwordNotification - In the implementation block
@property (assign) char passwordNotificationIsExpired;                                                     //@synthesize passwordNotificationIsExpired=_passwordNotificationIsExpired - In the implementation block
@property (nonatomic,retain) PHStarkHardwareControlsBroadcaster * hardwareControlBroadcaster;              //@synthesize hardwareControlBroadcaster=_hardwareControlBroadcaster - In the implementation block
+(id)sharedInstance;
+(void)_setupFiltering;
+(char)supportsCalls;
+(char)supportsVideoCalls;
+(void)awakeFromBundle;
-(void)_startListeningForNotifications;
-(void)dealloc;
-(id)init;
-(TUCall *)incomingCall;
-(void)handleCallStatusChanged:(id)arg1 ;
-(void)playSound:(int)arg1 numOfLoops:(int)arg2 pauseDuration:(float)arg3 ;
-(void)audioPlayerDidStopPlaying:(id)arg1 ;
-(char)isPlaying;
-(char)listeningForCallNotifications;
-(void)handleCallCenterFailure:(id)arg1 ;
-(void)handleIncomingCall:(id)arg1 ;
-(void)handleLockStateChanged:(id)arg1 ;
-(void)handleVideoCallStatusChanged:(id)arg1 ;
-(void)hardwareControlEventNotification:(id)arg1 ;
-(void)screenDidConnect:(id)arg1 ;
-(void)setListeningForCallNotifications:(char)arg1 ;
-(void)updateLockScreenPluginStatus:(char)arg1 ;
-(void)_handleVoicemailPasswordNeeded:(id)arg1 ;
-(TUCall *)activeCall;
-(TUCall *)heldCall;
-(char)activeCallExists;
-(char)incomingCallExists;
-(id)sendingCallExists;
-(void)showInCallAlertWithBackgroundStyle:(int)arg1 ;
-(void)showInCallAlertForStark;
-(void)displayAlertForCall:(id)arg1 ;
-(char)getEmergencyDialerPresenceToken;
-(void)stopAudioPlayer;
-(void)_showAlertsIfNecessaryForDisconnectedCall:(id)arg1 ;
-(void)_showCallFailureAlertForCall:(id)arg1 ;
-(void)_showCallerUnavailableNotificationForCall:(id)arg1 userInfo:(id)arg2 ;
-(char)activeVideoCallExists;
-(char)incomingVideoCallExists;
-(char)heldCallExists;
-(char)shouldRespondToHardwareControlEvents;
-(char)lockScreenPluginIsActive;
-(void)setLockScreenPluginIsActive:(char)arg1 ;
-(CFUserNotificationRef)passwordNotification;
-(void)setPasswordNotificationIsExpired:(char)arg1 ;
-(char)passwordNotificationIsExpired;
-(void)setPasswordNotification:(CFUserNotificationRef)arg1 ;
-(char)isTTYEnabled;
-(void)handlePasswordRequestResponse:(CFUserNotificationRef)arg1 flags:(unsigned long)arg2 ;
-(PHStarkHardwareControlsBroadcaster *)hardwareControlBroadcaster;
-(void)setHardwareControlBroadcaster:(PHStarkHardwareControlsBroadcaster *)arg1 ;
-(int)callCount;
@end


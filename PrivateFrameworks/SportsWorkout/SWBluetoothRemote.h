/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:35 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SportsWorkout/SportsWorkout-Structs.h>
#import <SportsWorkout/SWRemote.h>

@class NSMutableData, SWBluetoothMessageHandler, SWPacketUnscrambler, NSTimer;

@interface SWBluetoothRemote : SWRemote {

	NSMutableData* _bluetoothInputData;
	SWBluetoothMessageHandler* _messageHandler;
	SWPacketUnscrambler* _packetUnscrambler;
	NSTimer* _remoteLeftKeyLongPressTimer;
	NSTimer* _remoteRightKeyLongPressTimer;
	NSTimer* _remoteNikeKeyLongPressTimer;
	NSTimer* _remotePlayKeyLongPressTimer;
	NSTimer* _playKeyTimer;
	NSTimer* _volumeUpKeyTimer;
	NSTimer* _volumeDownKeyTimer;
	NSTimer* _leftKeyTimer;
	NSTimer* _rightKeyTimer;
	NSTimer* _nikeKeyTimer;
	char _playKeyWasDown;
	char _volumeUpKeyWasDown;
	char _volumeDownKeyWasDown;
	char _leftKeyWasDown;
	char _rightKeyWasDown;
	char _nikeKeyWasDown;

}
-(void)dealloc;
-(id)init;
-(void)deactivate;
-(void)beginLinking;
-(void)cancelLinking;
-(void)beginSearching;
-(void)cancelSearching;
-(void)unlink;
-(void)_receivedActivationNotification:(id)arg1 ;
-(void)_receivedDiscoveryNotification:(id)arg1 ;
-(void)_receivedConnectionNotification:(id)arg1 ;
-(void)_receivedConnectionFailureNotification:(id)arg1 ;
-(void)_discoverDevice;
-(SCD_Struct_SW7)_deviceAddressForSerialNumber:(id)arg1 ;
-(void)_connectToDeviceWithAddress:(SCD_Struct_SW7)arg1 ;
-(void)_registerToReadInput;
-(void)_receivedInputReadNotification:(id)arg1 ;
-(id)_serialNumberForPacket:(id)arg1 timestamp:(unsigned)arg2 radioId:(unsigned*)arg3 ;
-(void)_handleSimpleRemotePlayKeyIsDown:(char)arg1 ;
-(void)_handleSimpleRemoteVolumeUpKeyIsDown:(char)arg1 ;
-(void)_handleSimpleRemoteVolumeDownKeyIsDown:(char)arg1 ;
-(void)_handleSimpleRemoteLeftKeyIsDown:(char)arg1 ;
-(void)_handleSimpleRemoteRightKeyIsDown:(char)arg1 ;
-(void)_handleNikeKeyIsDown:(char)arg1 ;
-(void)_handleSimpleRemotePlayKeyUpTimer:(id)arg1 ;
-(void)_postEndWorkoutNotification:(id)arg1 ;
-(void)_handleSimpleRemoteVolumeUpKeyUpTimer:(id)arg1 ;
-(void)_handleSimpleRemoteVolumeDownKeyUpTimer:(id)arg1 ;
-(void)_handleSimpleRemoteLeftKeyUpTimer:(id)arg1 ;
-(void)_postBeginMusicRewindNotification:(id)arg1 ;
-(void)_handleSimpleRemoteRightKeyUpTimer:(id)arg1 ;
-(void)_postBeginMusicFastForwardNotification:(id)arg1 ;
-(void)_handleNikeKeyUpTimer:(id)arg1 ;
-(void)_postFirePowersongNotification:(id)arg1 ;
@end


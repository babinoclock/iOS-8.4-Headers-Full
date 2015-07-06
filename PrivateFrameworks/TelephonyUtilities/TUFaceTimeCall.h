/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:01 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUtilities/TUCall.h>

@class IMAVChat;

@interface TUFaceTimeCall : TUCall {

	IMAVChat* _chat;

}

@property (nonatomic,retain) IMAVChat * chat;              //@synthesize chat=_chat - In the implementation block
+(id)sourceAccount:(char)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(void)disconnect;
-(double)startTime;
-(IMAVChat *)chat;
-(id)initWithChat:(id)arg1 ;
-(void)setChat:(IMAVChat *)arg1 ;
-(char)isOutgoing;
-(char)isBlocked;
-(void)setIsSendingAudio:(char)arg1 ;
-(int)endedError;
-(void)resetWantsHoldMusic;
-(char)isSendingAudio;
-(void)answerWithSourceIdentifier:(id)arg1 ;
-(char)wasDeclined;
-(char)shouldPlayHoldMusic;
-(char)isUplinkMuted;
-(char)setUplinkMuted:(char)arg1 ;
-(char)isDownlinkMuted;
-(char)setDownlinkMuted:(char)arg1 ;
-(id)destinationID;
-(void)inviteWithCallIdentifier:(int)arg1 ;
-(void)updateForDisconnection;
-(char)isStatusFinal;
-(char)shouldPlayDTMFTone;
-(char)isConferenced;
-(void)joinConference;
-(void)leaveConference;
-(id)remoteParticipant;
-(id)callerNameFromNetwork;
-(char)isAlerting;
-(int)callIdentifier;
-(id)callUUID;
-(id)callHistoryIdentifier;
-(id)totalDataUsed;
-(int)faceTimeIDStatus;
-(char)managesAudioInterruptions;
-(char)needsManualInCallSounds;
-(char)playsConnectedSound;
-(char)isTTY;
-(float)localVolume;
-(id)localFrequency;
-(char)managesAudioRelay;
-(id)conferenceIdentifier;
-(id)remoteFrequency;
-(id)conferenceInviteDictionary;
-(id)remoteUnavailableUserInfo;
-(unsigned)endedReason;
-(double)callDuration;
@end


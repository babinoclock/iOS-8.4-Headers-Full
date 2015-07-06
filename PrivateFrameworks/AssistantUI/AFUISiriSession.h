/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:30 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AssistantUI/AFAssistantUIService.h>
#import <AssistantUI/AFSpeechDelegate.h>
#import <AssistantUI/AFUIStateMachineDelegate.h>
#import <AssistantUI/AFUISpeechSynthesisLocalDelegate.h>
#import <AssistantUI/AFUISiriSession.h>

@protocol AFUISiriSession <NSObject>
@required
-(void)end;
-(void)preheat;
-(void)forceAudioSessionActive;
-(void)setIsStark:(char)arg1;
-(void)recordMetrics:(id)arg1;
-(void)rollbackClearContext;
-(void)setOverriddenApplicationContext:(id)arg1 withSMSContext:(id)arg2;
-(void)telephonyRequestCompleted;
-(void)sendReplyCommand:(id)arg1;
-(void)setLockState:(unsigned)arg1;
-(void)resetContext;
-(void)startRequestWithOptions:(id)arg1;
-(void)stopRequestWithOptions:(id)arg1;
-(void)updateRequestOptions:(id)arg1;
-(void)stopRecordingSpeech;
-(void)cancelSpeechRequest;
-(void)startCorrectedRequestWithText:(id)arg1 correctionIdentifier:(id)arg2;
-(void)performAceCommand:(id)arg1 conflictHandler:(/*^block*/id)arg2;
-(void)performAceCommand:(id)arg1;
-(void)resultDidChangeForAceCommand:(id)arg1;
-(void)requestDidPresent;
-(void)clearContext;
-(void)setAlertContext;
-(void)setApplicationContext;

@end


@protocol OS_dispatch_queue, AFUISiriSessionDelegate, AFUISiriSessionLocalDataSource, AFUISiriSessionLocalDelegate, OS_dispatch_group;
@class NSObject, AFUIStateMachine, AFUISpeechSynthesis, NSMutableSet, AFConnection, NSString;

@interface AFUISiriSession : NSObject <AFAssistantUIService, AFSpeechDelegate, AFUIStateMachineDelegate, AFUISpeechSynthesisLocalDelegate, AFUISiriSession> {

	NSObject*<OS_dispatch_queue> _delegateQueue;
	char _currentRequestDidPresent;
	AFUIStateMachine* _stateMachine;
	AFUISpeechSynthesis* _speechSynthesis;
	NSMutableSet* _speechRequestGroupGraveyard;
	char _eyesFree;
	id<AFUISiriSessionDelegate> _delegate;
	id<AFUISiriSessionLocalDataSource> _localDataSource;
	id<AFUISiriSessionLocalDelegate> _localDelegate;
	AFConnection* _connection;
	NSObject*<OS_dispatch_group> _currentSpeechRequestGroup;

}

@property (nonatomic,retain) id<AFUISiriSessionDelegate> delegate;                                                                                                        //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<AFUISiriSessionLocalDataSource> localDataSource;                                                                                   //@synthesize localDataSource=_localDataSource - In the implementation block
@property (assign,nonatomic,__weak) id<AFUISiriSessionLocalDelegate> localDelegate;                                                                                       //@synthesize localDelegate=_localDelegate - In the implementation block
@property (assign,getter=isEyesFree,nonatomic) char eyesFree;                                                                                                             //@synthesize eyesFree=_eyesFree - In the implementation block
@property (getter=_connection,nonatomic,readonly) AFConnection * connection;                                                                                              //@synthesize connection=_connection - In the implementation block
@property (setter=_setCurrentSpeechRequestGroup:,getter=_currentSpeechRequestGroup,nonatomic,retain) NSObject*<OS_dispatch_group> currentSpeechRequestGroup;              //@synthesize currentSpeechRequestGroup=_currentSpeechRequestGroup - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned)availabilityState;
+(void)beginMonitoringSiriAvailability;
+(id)effectiveCoreLocationBundle;
-(void)dealloc;
-(void)setDelegate:(id<AFUISiriSessionDelegate>)arg1 ;
-(id<AFUISiriSessionDelegate>)delegate;
-(int)_state;
-(void)end;
-(id)_connection;
-(void)preheat;
-(char)isListening;
-(void)assistantConnection:(id)arg1 receivedCommand:(id)arg2 ;
-(void)assistantConnectionDidChangeAudioRecordingPower:(id)arg1 ;
-(void)assistantConnectionRequestWillStart:(id)arg1 ;
-(void)assistantConnectionRequestFinished:(id)arg1 ;
-(void)assistantConnection:(id)arg1 requestFailedWithError:(id)arg2 requestClass:(id)arg3 ;
-(void)assistantConnection:(id)arg1 shouldSpeak:(char)arg2 ;
-(void)assistantConnection:(id)arg1 didChangeAudioSessionID:(unsigned)arg2 ;
-(void)assistantConnectionDidDetectMusic:(id)arg1 ;
-(void)assistantConnection:(id)arg1 didFinishAcousticIDRequestWithSuccess:(char)arg2 ;
-(void)assistantConnectionSpeechRecordingWillBegin:(id)arg1 ;
-(void)assistantConnection:(id)arg1 speechRecordingDidBeginOnAVRecordRoute:(id)arg2 ;
-(void)assistantConnection:(id)arg1 speechRecordingDidChangeAVRecordRoute:(id)arg2 ;
-(void)assistantConnectionSpeechRecordingDidEnd:(id)arg1 ;
-(void)assistantConnectionSpeechRecordingDidCancel:(id)arg1 ;
-(void)assistantConnection:(id)arg1 speechRecordingDidFail:(id)arg2 ;
-(void)assistantConnection:(id)arg1 speechRecognized:(id)arg2 ;
-(void)assistantConnection:(id)arg1 speechRecognizedPartialResult:(id)arg2 ;
-(void)forceAudioSessionActive;
-(void)setIsStark:(char)arg1 ;
-(void)recordMetrics:(id)arg1 ;
-(void)rollbackClearContext;
-(void)setOverriddenApplicationContext:(id)arg1 withSMSContext:(id)arg2 ;
-(void)telephonyRequestCompleted;
-(void)sendReplyCommand:(id)arg1 ;
-(void)assistantConnection:(id)arg1 openURL:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)assistantConnectionDismissAssistant:(id)arg1 ;
-(char)isEyesFree;
-(void)setLockState:(unsigned)arg1 ;
-(void)resetContext;
-(void)startRequestWithOptions:(id)arg1 ;
-(void)stopRequestWithOptions:(id)arg1 ;
-(void)updateRequestOptions:(id)arg1 ;
-(void)stopRecordingSpeech;
-(void)cancelSpeechRequest;
-(void)startCorrectedRequestWithText:(id)arg1 correctionIdentifier:(id)arg2 ;
-(void)performAceCommand:(id)arg1 conflictHandler:(/*^block*/id)arg2 ;
-(void)performAceCommand:(id)arg1 ;
-(void)resultDidChangeForAceCommand:(id)arg1 ;
-(void)requestDidPresent;
-(void)_outputVoiceDidChange:(id)arg1 ;
-(void)_voiceOverStatusDidChange:(id)arg1 ;
-(void)_siriNetworkAvailabilityDidChange:(id)arg1 ;
-(void)_performBlockWithDelegate:(/*^block*/id)arg1 ;
-(id)_stateMachine;
-(id<AFUISiriSessionLocalDelegate>)localDelegate;
-(void)_startDirectActionRequestWithString:(id)arg1 appID:(id)arg2 withMessagesContext:(id)arg3 ;
-(void)_startContinuityRequestWithInfo:(id)arg1 ;
-(void)_startSpeechPronunciationRequestWithContext:(id)arg1 options:(id)arg2 ;
-(void)_startRequestWithText:(id)arg1 ;
-(void)_startSpeechRequestWithSpeechFileAtURL:(id)arg1 ;
-(void)_startSpeechRequestWithOptions:(id)arg1 ;
-(id)_currentSpeechRequestGroup;
-(void)_setCurrentSpeechRequestGroup:(id)arg1 ;
-(void)_startRequestWithFinalOptions:(id)arg1 ;
-(id)_preparedSpeechRequestWithRequestOptions:(id)arg1 ;
-(void)setLocalDelegate:(id<AFUISiriSessionLocalDelegate>)arg1 ;
-(void)_didChangeDialogPhase:(id)arg1 ;
-(void)_handleUnlockDeviceCommand:(id)arg1 ;
-(void)_handleRequestUpdateViewsCommand:(id)arg1 ;
-(void)_performTransitionForEvent:(int)arg1 ;
-(void)_requestDidFinishWithError:(id)arg1 ;
-(float)recordingPowerLevel;
-(void)_requestWillStart;
-(void)_requestContextWithCompletion:(/*^block*/id)arg1 ;
-(char)_hasActiveRequest;
-(id)underlyingConnection;
-(void)_startRequestWithBlock:(/*^block*/id)arg1 ;
-(id<AFUISiriSessionLocalDataSource>)localDataSource;
-(void)_performAceCommand:(id)arg1 forRequestUpdateViewsCommand:(id)arg2 afterDelay:(double)arg3 ;
-(void)stateMachine:(id)arg1 didTransitionFromState:(int)arg2 forEvent:(int)arg3 ;
-(id)stateMachine:(id)arg1 descriptionForEvent:(int)arg2 ;
-(void)speechSynthesisWillStartSpeaking:(id)arg1 ;
-(char)speechSynthesisShouldStartSpeaking:(id)arg1 ;
-(id)initWithConnection:(id)arg1 delegateQueue:(id)arg2 ;
-(void)setLocalDataSource:(id<AFUISiriSessionLocalDataSource>)arg1 ;
-(id)speechSynthesis;
-(char)isPreventingActivationGesture;
-(void)clearContext;
-(void)setEyesFree:(char)arg1 ;
-(void)setAlertContext;
-(void)setApplicationContext;
@end


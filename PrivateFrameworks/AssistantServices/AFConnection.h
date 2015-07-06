/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:28 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_source, AFAssistantUIService, AFSpeechDelegate;
@class NSXPCConnection, NSString, NSArray, NSMutableDictionary, NSObject, NSError;

@interface AFConnection : NSObject {

	NSXPCConnection* _connection;
	NSString* _outstandingRequestClass;
	NSArray* _cachedBulletins;
	char _hasActiveRequest;
	char _hasActiveTimeout;
	NSMutableDictionary* _replyHandlerForAceId;
	unsigned _stateInSync : 1;
	unsigned _shouldSpeak : 1;
	unsigned _isCapturingSpeech : 1;
	unsigned _hasOutstandingRequest : 1;
	unsigned _audioSessionID;
	void* _levelsSharedMem;
	unsigned long _sharedMemSize;
	NSObject*<OS_dispatch_source> _levelsTimer;
	unsigned _clientStateIsInSync : 1;
	unsigned _voiceOverIsActive : 1;
	NSError* _lastRetryError;
	id<AFAssistantUIService> _delegate;
	id<AFSpeechDelegate> _speechDelegate;

}

@property (assign,nonatomic,__weak) id<AFAssistantUIService> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<AFSpeechDelegate> speechDelegate;              //@synthesize speechDelegate=_speechDelegate - In the implementation block
@property (nonatomic,readonly) char isRecording; 
+(void)initialize;
+(void)preheat;
+(void)beginMonitoringAvailability;
+(id)outputVoice;
+(void)preheatWithStyle:(int)arg1 ;
+(char)assistantIsSupportedForLanguageCode:(id)arg1 error:(id*)arg2 ;
+(char)siriIsSupportedForLanguageCode:(id)arg1 deviceProductVersion:(id)arg2 error:(id*)arg3 ;
+(char)assistantIsSupported;
+(void)stopMonitoringAvailability;
+(char)userDataSyncNeeded;
+(char)isReadyForLanguageCode:(id)arg1 ;
+(void)defrost;
+(char)isAvailable;
+(id)currentLanguageCode;
-(char)isRecording;
-(void)dealloc;
-(void)setDelegate:(id<AFAssistantUIService>)arg1 ;
-(id)init;
-(id<AFAssistantUIService>)delegate;
-(void)_updateState;
-(id)_connection;
-(float)averagePower;
-(void)endSession;
-(void)cancelSpeech;
-(void)stopSpeechWithOptions:(id)arg1 ;
-(void)preheat;
-(void)_stopLevelUpdates;
-(void)_requestWillBeginWithRequestClass:(id)arg1 isSpeechRequest:(char)arg2 isBackgroundRequest:(char)arg3 ;
-(void)_willStartRequestForSpeech:(char)arg1 ;
-(void)_tellDelegateRequestWillStart;
-(void)_scheduleRequestTimeout;
-(void)_cancelRequestTimeout;
-(char)shouldSpeak;
-(void)_tellDelegateShouldSpeakChanged:(char)arg1 ;
-(void)_tellDelegateAudioSessionIDChanged:(unsigned)arg1 ;
-(void)_willCompleteRequest;
-(void)_willFailRequestWithError:(id)arg1 ;
-(void)_tellSpeechDelegateRecordingDidFail:(id)arg1 ;
-(void)_requestDidEnd;
-(void)_tellDelegateRequestFailed:(id)arg1 requestClass:(id)arg2 ;
-(void)_connectionInterrupted;
-(void)_updateClientState;
-(void)_invokeRequestTimeout;
-(id)_clientService;
-(void)_extendRequestTimeout;
-(void)_setShouldSpeak:(char)arg1 ;
-(void)_setAudioSessionID:(unsigned)arg1 ;
-(void)setVoiceOverIsActive:(char)arg1 ;
-(void)_willCancelRequest;
-(void)preheatWithStyle:(int)arg1 ;
-(void)forceAudioSessionActive;
-(void)setIsStark:(char)arg1 ;
-(void)_requestWillBeginWithRequestClass:(id)arg1 isSpeechRequest:(char)arg2 ;
-(void)startContinuationRequestWithUserInfo:(id)arg1 ;
-(void)_checkAndSetIsCapturingSpeech:(char)arg1 ;
-(void)startSpeechRequestWithOptions:(id)arg1 ;
-(void)startSpeechPronunciationRequestWithOptions:(id)arg1 pronunciationContext:(id)arg2 ;
-(void)updateSpeechOptions:(id)arg1 ;
-(void)recordMetrics:(id)arg1 ;
-(void)rollbackClearContext;
-(void)sendGenericAceCommand:(id)arg1 conflictHandler:(/*^block*/id)arg2 ;
-(void)setApplicationContextForApplicationInfos:(id)arg1 ;
-(void)setOverriddenApplicationContext:(id)arg1 withSMSContext:(id)arg2 ;
-(void)prepareForPhoneCall;
-(void)telephonyRequestCompleted;
-(void)_doCommand:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)_aceConnectionWillRetryOnError:(id)arg1 ;
-(void)_setLevelsWithSharedMem:(id)arg1 ;
-(void)_tellDelegateRequestFinished;
-(void)_tellDelegateWillStartAcousticIDRequest;
-(void)_tellDelegateDidDetectMusic;
-(void)_tellDelegateDidFinishAcousticIDRequestWithSuccess:(char)arg1 ;
-(void)_tellDelegateSetUserActivityInfo:(id)arg1 webpageURL:(id)arg2 ;
-(void)_tellDelegateInvalidateCurrentUserActivity;
-(void)_tellSpeechDelegateRecordingWillBegin;
-(void)_tellSpeechDelegateRecordingDidBeginOnAVRecordRoute:(id)arg1 ;
-(void)_tellSpeechDelegateRecordingDidChangeAVRecordRoute:(id)arg1 ;
-(void)_tellSpeechDelegateRecordingDidEnd;
-(void)_tellSpeechDelegateRecordingDidCancel;
-(void)_tellSpeechDelegateSpeechRecognized:(id)arg1 ;
-(void)_tellSpeechDelegateSpeechRecognizedPartialResult:(id)arg1 ;
-(void)_tellSpeechDelegateRecognitionDidFail:(id)arg1 ;
-(void)_extendExistingRequestTimeout;
-(void)setLockState:(char)arg1 screenLocked:(char)arg2 ;
-(void)startRequestWithText:(id)arg1 ;
-(void)startDirectActionRequestWithString:(id)arg1 ;
-(void)startRecordingForPendingSpeechRequestWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)startAcousticIDRequestWithOptions:(id)arg1 ;
-(void)stopSpeech;
-(void)startRequestWithCorrectedText:(id)arg1 forSpeechIdentifier:(id)arg2 ;
-(unsigned)audioSessionID;
-(float)peakPower;
-(void)sendGenericAceCommand:(id)arg1 ;
-(void)sendReplyCommand:(id)arg1 ;
-(void)setAlertContextWithBulletins:(id)arg1 ;
-(void)usefulUserResultWillPresent;
-(id<AFSpeechDelegate>)speechDelegate;
-(void)setSpeechDelegate:(id<AFSpeechDelegate>)arg1 ;
-(id)_cachedBulletins;
-(void)startSpeechRequestWithSpeechFileAtURL:(id)arg1 isNarrowBand:(char)arg2 ;
-(void)startSpeechRequestWithSpeechFileAtURL:(id)arg1 ;
-(id)_clientServiceWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_barrier;
-(void)_clearAssistantInfoForAccountWithIdentifier:(id)arg1 ;
-(void)cancelRequest;
-(void)setApplicationContext:(id)arg1 ;
-(void)clearContext;
-(void)rollbackRequest;
-(void)_clearConnection;
@end


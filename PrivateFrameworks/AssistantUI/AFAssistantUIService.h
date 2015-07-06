/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:30 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AFAssistantUIService <NSObject>
@optional
-(void)assistantConnection:(id)arg1 receivedCommand:(id)arg2;
-(void)assistantConnectionRequestWillStart:(id)arg1;
-(void)assistantConnectionRequestFinished:(id)arg1;
-(void)assistantConnection:(id)arg1 requestFailedWithError:(id)arg2 requestClass:(id)arg3;
-(void)assistantConnection:(id)arg1 shouldSpeak:(char)arg2;
-(void)assistantConnection:(id)arg1 didChangeAudioSessionID:(unsigned)arg2;
-(void)assistantConnectionWillStartAcousticIDRequest:(id)arg1;
-(void)assistantConnectionDidDetectMusic:(id)arg1;
-(void)assistantConnection:(id)arg1 didFinishAcousticIDRequestWithSuccess:(char)arg2;
-(void)assistantConnection:(id)arg1 setUserActivtiyInfoAndMakeCurrent:(id)arg2 webpageURL:(id)arg3;
-(void)assistantConnectionInvalidateCurrentUserActivity:(id)arg1;
-(void)assistantConnection:(id)arg1 openApplicationWithBundleID:(id)arg2 URL:(id)arg3 completion:(/*^block*/id)arg4;
-(void)assistantConnection:(id)arg1 openURL:(id)arg2 completion:(/*^block*/id)arg3;
-(void)assistantConnectionDismissAssistant:(id)arg1;

@end


/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:22 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirPortAssistant/AirPortAssistant-Structs.h>
#import <AirPortAssistant/AssistantCallbackUIDelegateResult.h>

@interface AssistantCallbackController : NSObject <AssistantCallbackUIDelegateResult> {

	char _saveScanState;
	id _uiDelegate;
	AssistantCallbackContext* _callbackContext;

}

@property (nonatomic,retain) id<AssistantCallbackUIDelegate> uiDelegate;              //@synthesize uiDelegate=_uiDelegate - In the implementation block
+(long)updateKeychainNetworkPassword:(id)arg1 forNetworkNamed:(id)arg2 ;
+(long)updateKeychainBasePassword:(id)arg1 forMACAddress:(id)arg2 withBaseName:(id)arg3 ;
+(id)keychainPasswordForBaseStation:(id)arg1 ;
+(void)keychainPasswordForBaseStation:(id)arg1 delegate:(id)arg2 ;
+(long)removeKeychainPasswordForBaseStation:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(/*function pointer*/void*)assistantCallback;
-(void)userResponseToJoinNetwork:(long)arg1 ;
-(void)userResponseToWarning:(long)arg1 ;
-(void)userResponseToPPPoECredsFailed:(long)arg1 ;
-(void)callbackAskUserForPasswordResult:(long)arg1 password:(id)arg2 remember:(int)arg3 ;
-(void)callbackAskUserToChooseFromStringListResult:(long)arg1 selectedString:(id)arg2 ;
-(void)callbackAskUserAQuestionResult:(int)arg1 result:(long)arg2 ;
-(long)subclassAssistantCallback:(AssistantCallbackContext*)arg1 ;
-(id<AssistantCallbackUIDelegate>)uiDelegate;
-(void)setUiDelegate:(id<AssistantCallbackUIDelegate>)arg1 ;
-(long)startDirectedScan:(id)arg1 wifiType:(int)arg2 retries:(int)arg3 ;
-(long)startScanForNetworks;
-(long)startJoinNetwork:(id)arg1 password:(id)arg2 rememberChoice:(int)arg3 ;
-(void)joinNetworkDone:(id)arg1 ;
-(void)directedScanDone:(id)arg1 ;
-(void)scanForNetworksDone:(id)arg1 ;
-(long)assistantCallback:(AssistantCallbackContext*)arg1 withSelector:(int)arg2 ;
@end


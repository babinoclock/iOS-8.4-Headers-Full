/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:22 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AssistantCallbackUIDelegateResult
@optional
-(void)callbackAskUserForUncertifiedResult:(long)arg1;
-(void)callbackAskUserForSetupCodeResult:(long)arg1 password:(id)arg2;

@required
-(void)callbackAskUserForPasswordResult:(long)arg1 password:(id)arg2 remember:(int)arg3;
-(void)callbackAskUserToChooseFromStringListResult:(long)arg1 selectedString:(id)arg2;
-(void)callbackAskUserAQuestionResult:(int)arg1 result:(long)arg2;

@end


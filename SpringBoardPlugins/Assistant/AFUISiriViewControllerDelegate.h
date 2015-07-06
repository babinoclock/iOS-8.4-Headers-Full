/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:34 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/SpringBoardPlugins/Assistant.uibundle/Assistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AFUISiriViewControllerDelegate <NSObject>
@required
-(void)siriViewControllerDidChangeVisibility:(id)arg1;
-(void)siriViewController:(id)arg1 didEncounterUnexpectedError:(id)arg2;
-(void)dismissSiriViewController:(id)arg1;
-(void)startGuidedAccessForSiriViewController:(id)arg1;
-(void)userRelevantEventDidOccurInSiriViewController:(id)arg1;
-(char)siriViewController:(id)arg1 launchApplicationWithBundleIdentifier:(id)arg2 withURL:(id)arg3;
-(void)notifyOnNextUserInteractionForSiriViewController:(id)arg1;
-(void)siriViewController:(id)arg1 siriIdleAndQuietStatusDidChange:(char)arg2;
-(void)siriViewController:(id)arg1 didReadBulletinWithIdentifier:(id)arg2;
-(char)siriViewController:(id)arg1 openURL:(id)arg2 delaySessionEndForTTS:(char)arg3;
-(char)siriViewController:(id)arg1 openURL:(id)arg2 appBundleID:(id)arg3 allowSiriDismissal:(char)arg4;
-(id)siriViewController:(id)arg1 willStartRequestWithOptions:(id)arg2;
-(char)siriViewControllerShouldEndSession:(id)arg1;
-(char)siriViewController:(id)arg1 attemptUnlockWithPassword:(id)arg2;
-(void)siriViewControllerDidChangeListeningState:(id)arg1;
-(void)siriViewController:(id)arg1 didChangeDialogPhase:(id)arg2;

@end


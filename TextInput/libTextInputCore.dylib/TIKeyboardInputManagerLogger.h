/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:36 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libTextInputCore.dylib/TIKeyboardInputManagerLogging.h>

@class TITypologyLog, NSString;

@interface TIKeyboardInputManagerLogger : NSObject <TIKeyboardInputManagerLogging> {

	TITypologyLog* _typologyLog;

}

@property (nonatomic,retain) TITypologyLog * typologyLog;              //@synthesize typologyLog=_typologyLog - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)setConfig:(id)arg1 ;
-(void)logKeyboardConfig:(id)arg1 forSyncToKeyboardState:(id)arg2 ;
-(void)logKeyboardOutput:(id)arg1 keyboardConfiguration:(id)arg2 forKeyboardInput:(id)arg3 ;
-(void)logToHumanReadableTrace:(id)arg1 ;
-(void)logAutocorrections:(id)arg1 forKeyboardState:(id)arg2 ;
-(void)logCandidateResultSet:(id)arg1 ;
-(void)logKeyboardConfig:(id)arg1 textToCommit:(id)arg2 forAcceptedCandidate:(id)arg3 ;
-(void)logReplacements:(id)arg1 forString:(id)arg2 keyLayout:(id)arg3 ;
-(void)logRefinements:(id)arg1 forCandidate:(id)arg2 ;
-(void)logHitKeyCode:(int)arg1 forTouchEvent:(id)arg2 ;
-(void)logReceivedSkipHitTestForTouchEvent:(id)arg1 ;
-(void)logKeyboardConfig:(id)arg1 forAdjustedPhraseBoundaryInForwardDirection:(char)arg2 ;
-(void)logReceivedSetOriginalInput:(id)arg1 ;
-(void)logReceivedTextAccepted:(id)arg1 ;
-(void)logReceivedCandidateRejected:(id)arg1 ;
-(void)logReceivedLastAcceptedCandidateCorrected;
-(id)writeToFile;
-(TITypologyLog *)typologyLog;
-(void)setTypologyLog:(TITypologyLog *)arg1 ;
-(char)shouldWriteToSyslog;
-(char)shouldDisableTypologyLogForKeyboardState:(id)arg1 ;
@end


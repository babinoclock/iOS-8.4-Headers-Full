/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:36 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TextInput_zh/TIKeyboardInputManagerShapeBased.h>
#import <TextInput_zh/TIKeyboardInputManagerChineseCompletion.h>

@class TIKeyboardCandidate;

@interface TIKeyboardInputManagerWubi : TIKeyboardInputManagerShapeBased <TIKeyboardInputManagerChineseCompletion> {

	TIKeyboardCandidate* _autoConfirmationCandidate;

}

@property (nonatomic,retain) TIKeyboardCandidate * autoConfirmationCandidate;              //@synthesize autoConfirmationCandidate=_autoConfirmationCandidate - In the implementation block
+(Class)wordSearchClass;
+(id)ASCIIToWubi:(id)arg1 ;
+(id)wubiToASCIIMap;
-(void)dealloc;
-(void)setInSplitKeyboardMode:(char)arg1 ;
-(unsigned)inputCount;
-(unsigned)inputIndex;
-(char)acceptInputString:(id)arg1 ;
-(id)keyEventMap;
-(char)updateCandidatesWithTIWordSearch:(id)arg1 predictionEnabled:(char)arg2 ;
-(id)formattedSearchString;
-(void)notifyUpdateCandidates:(id)arg1 forOperation:(id)arg2 ;
-(char)supportsPairedPunctutationInput;
-(char)isWubi:(id)arg1 ;
-(id)wubiToAscii:(id)arg1 ;
-(void)setAutoConfirmationCandidate:(TIKeyboardCandidate *)arg1 ;
-(TIKeyboardCandidate *)autoConfirmationCandidate;
-(void)setInputIndex:(unsigned)arg1 ;
-(void)checkAutocorrectionDictionaries;
-(id)deleteFromInput:(unsigned*)arg1 ;
-(char)shouldAddModifierSymbolsToWordCharacters;
-(id)inputsToReject;
-(void)closeCandidateGenerationContextWithResults:(id)arg1 ;
-(void)addInput:(id)arg1 withContext:(id)arg2 ;
-(void)openCandidateGenerationContextWithCompletionHandler:(/*^block*/id)arg1 ;
@end


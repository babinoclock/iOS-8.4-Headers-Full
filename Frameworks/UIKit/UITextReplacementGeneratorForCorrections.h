/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:51 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITextReplacementGenerator.h>

@class UITextChecker, TIKeyboardCandidate;

@interface UITextReplacementGeneratorForCorrections : UITextReplacementGenerator {

	char _forceHistoryReplacement;
	char _forceAutocorrectionGuesses;
	char _forceSpellingGuesses;
	UITextChecker* _textChecker;
	TIKeyboardCandidate* _autocorrectionRecord;
	unsigned _maxEditDistance;
	unsigned _maxCountAfterAutocorrectionGuesses;
	unsigned _maxCountAfterSpellingGuesses;

}

@property (nonatomic,retain) UITextChecker * textChecker;                              //@synthesize textChecker=_textChecker - In the implementation block
@property (nonatomic,retain) TIKeyboardCandidate * autocorrectionRecord;               //@synthesize autocorrectionRecord=_autocorrectionRecord - In the implementation block
@property (assign,nonatomic) char forceHistoryReplacement;                             //@synthesize forceHistoryReplacement=_forceHistoryReplacement - In the implementation block
@property (assign,nonatomic) unsigned maxEditDistance;                                 //@synthesize maxEditDistance=_maxEditDistance - In the implementation block
@property (assign,nonatomic) unsigned maxCountAfterAutocorrectionGuesses;              //@synthesize maxCountAfterAutocorrectionGuesses=_maxCountAfterAutocorrectionGuesses - In the implementation block
@property (assign,nonatomic) char forceAutocorrectionGuesses;                          //@synthesize forceAutocorrectionGuesses=_forceAutocorrectionGuesses - In the implementation block
@property (assign,nonatomic) unsigned maxCountAfterSpellingGuesses;                    //@synthesize maxCountAfterSpellingGuesses=_maxCountAfterSpellingGuesses - In the implementation block
@property (assign,nonatomic) char forceSpellingGuesses;                                //@synthesize forceSpellingGuesses=_forceSpellingGuesses - In the implementation block
-(void)dealloc;
-(id)init;
-(void)setTextChecker:(UITextChecker *)arg1 ;
-(void)setAutocorrectionRecord:(TIKeyboardCandidate *)arg1 ;
-(void)setForceHistoryReplacement:(char)arg1 ;
-(void)setForceAutocorrectionGuesses:(char)arg1 ;
-(void)setForceSpellingGuesses:(char)arg1 ;
-(void)setMaxCountAfterAutocorrectionGuesses:(unsigned)arg1 ;
-(void)setMaxCountAfterSpellingGuesses:(unsigned)arg1 ;
-(id)replacements;
-(void)setMaxEditDistance:(unsigned)arg1 ;
-(UITextChecker *)textChecker;
-(TIKeyboardCandidate *)autocorrectionRecord;
-(unsigned)maxCountAfterAutocorrectionGuesses;
-(unsigned)maxEditDistance;
-(unsigned)maxCountAfterSpellingGuesses;
-(char)isStringMisspelled:(id)arg1 ;
-(char)forceHistoryReplacement;
-(id)addReplacementRevertingAutocorrectionToReplacements:(id)arg1 ;
-(void)addPreviouslySuggestedAutocorrectionToReplacements:(id)arg1 ;
-(char)forceAutocorrectionGuesses;
-(void)addAutocorrectionGuessesToReplacements:(id)arg1 ;
-(char)forceSpellingGuesses;
-(void)addSpellingGuessesForString:(id)arg1 ToReplacements:(id)arg2 ;
@end


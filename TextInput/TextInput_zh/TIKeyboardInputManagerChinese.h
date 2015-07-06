/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:36 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TextInput_zh/TextInput_zh-Structs.h>
#import <libTextInputCore.dylib/TIKeyboardInputManager_zh_ja.h>

@class TIMecabraContext, TIWordSearch, TIWordSearchCandidateResultSet, NSString, CIMCandidateData, NSOperationQueue, TICandidateCommitHistory;

@interface TIKeyboardInputManagerChinese : TIKeyboardInputManager_zh_ja {

	TIMecabraContext* _adaptationContext;
	TIWordSearch* _wordSearch;
	TIWordSearchCandidateResultSet* _wordSearchCandidateResultSet;
	char _isInCompletionMode;
	char _showingFacemarks;
	char _shouldLearnAcceptedCandidate;
	char _isAlphabeticPlane;
	NSString* _language;
	NSString* _modeName;
	CIMCandidateData* _candidateData;
	NSOperationQueue* _operationQueue;
	NSString* _pairedPunctuationOpenQuote;
	NSString* _pairedPunctuationSelectedText;
	TICandidateCommitHistory* _candidateCommitHistory;

}

@property (nonatomic,copy) NSString * language;                                                          //@synthesize language=_language - In the implementation block
@property (nonatomic,copy) NSString * modeName;                                                          //@synthesize modeName=_modeName - In the implementation block
@property (assign,nonatomic) char isInCompletionMode;                                                    //@synthesize isInCompletionMode=_isInCompletionMode - In the implementation block
@property (assign,nonatomic) char showingFacemarks;                                                      //@synthesize showingFacemarks=_showingFacemarks - In the implementation block
@property (assign,nonatomic) char shouldLearnAcceptedCandidate;                                          //@synthesize shouldLearnAcceptedCandidate=_shouldLearnAcceptedCandidate - In the implementation block
@property (nonatomic,readonly) TIMecabraContext * adaptationContext;                                     //@synthesize adaptationContext=_adaptationContext - In the implementation block
@property (nonatomic,retain) TIWordSearchCandidateResultSet * wordSearchCandidateResultSet;              //@synthesize wordSearchCandidateResultSet=_wordSearchCandidateResultSet - In the implementation block
@property (assign,nonatomic) char isAlphabeticPlane;                                                     //@synthesize isAlphabeticPlane=_isAlphabeticPlane - In the implementation block
@property (nonatomic,copy) NSString * pairedPunctuationOpenQuote;                                        //@synthesize pairedPunctuationOpenQuote=_pairedPunctuationOpenQuote - In the implementation block
@property (nonatomic,copy) NSString * pairedPunctuationSelectedText;                                     //@synthesize pairedPunctuationSelectedText=_pairedPunctuationSelectedText - In the implementation block
@property (nonatomic,retain) TICandidateCommitHistory * candidateCommitHistory;                          //@synthesize candidateCommitHistory=_candidateCommitHistory - In the implementation block
@property (nonatomic,readonly) unsigned long predictionOptions; 
@property (readonly) CIMCandidateData * candidateData;                                                   //@synthesize candidateData=_candidateData - In the implementation block
@property (readonly) NSOperationQueue * operationQueue;                                                  //@synthesize operationQueue=_operationQueue - In the implementation block
+(id)GB18030CandidateFromString:(id)arg1 ;
+(id)unicodeCandidateFromString:(id)arg1 ;
+(char)shouldEnableHalfWidthPunctuationForDocumentContext:(id)arg1 composedText:(id)arg2 ;
+(id)pairedPunctuationDictionary;
+(Class)wordSearchClass;
-(void)dealloc;
-(unsigned)initialSelectedIndex;
-(char)isAlphabeticPlane;
-(void)setIsAlphabeticPlane:(char)arg1 ;
-(id)replacementForDoubleSpace;
-(unsigned)initialCandidateBatchCount;
-(id)keyEventMap;
-(char)canHandleKeyHitTest;
-(char)needsKeyHitTestResults;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(NSOperationQueue *)operationQueue;
-(id)firstCandidate;
-(char)showingFacemarks;
-(char)updateCompletionCandidatesIfAppropriate;
-(void)setShowingFacemarks:(char)arg1 ;
-(char)isInCompletionMode;
-(void)setIsInCompletionMode:(char)arg1 ;
-(char)shouldEnableHalfWidthPunctuationForCurrentInputContext;
-(CIMCandidateData *)candidateData;
-(TIInputManagerZephyr*)initImplementationWithMode:(id)arg1 andLanguage:(id)arg2 ;
-(TIWordSearchCandidateResultSet *)wordSearchCandidateResultSet;
-(void)setWordSearchCandidateResultSet:(TIWordSearchCandidateResultSet *)arg1 ;
-(void)setModeName:(NSString *)arg1 ;
-(void*)mecabraCandidateRefFromCandidate:(id)arg1 ;
-(char)shouldSearchCompletionForSubstrings;
-(TIMecabraContext *)adaptationContext;
-(unsigned long)predictionOptions;
-(char)analyzeForPredictionsWithOption:(unsigned long)arg1 ;
-(void)willExitCompletionMode;
-(id)generateCompletions;
-(char)supportsPairedPunctutationInput;
-(NSString *)pairedPunctuationOpenQuote;
-(NSString *)pairedPunctuationSelectedText;
-(void)setPairedPunctuationOpenQuote:(NSString *)arg1 ;
-(void)setPairedPunctuationSelectedText:(NSString *)arg1 ;
-(void)acceptFirstCandidateWithContext:(id)arg1 ;
-(void)resetCommitHistory;
-(WordTrie*)loadTrie:(id)arg1 ;
-(id)candidateResultSetUsedForCompletionQuery;
-(void*)mecabraCandidateRefFromPointerValue:(id)arg1 ;
-(id)candidateResultSetFromWordSearchCandidateResultSet:(id)arg1 ;
-(char)handlePairedPunctuationInput:(id)arg1 context:(id)arg2 ;
-(NSString *)modeName;
-(TICandidateCommitHistory *)candidateCommitHistory;
-(void)setCandidateCommitHistory:(TICandidateCommitHistory *)arg1 ;
-(id)initWithInputMode:(id)arg1 ;
-(id)wordSearch;
-(MecabraRef)mecabra;
-(char)shouldLearnAcceptedCandidate;
-(void)setShouldLearnAcceptedCandidate:(char)arg1 ;
-(void)syncToKeyboardState:(id)arg1 afterContextChange:(char)arg2 ;
-(void)setLearnsCorrection:(char)arg1 ;
-(id)wordCharacters;
-(void)syncToLayoutState:(id)arg1 ;
-(id)sortingMethods;
-(id)titleForSortingMethod:(id)arg1 ;
-(id)groupedCandidatesFromCandidates:(id)arg1 usingSortingMethod:(id)arg2 ;
-(char)alwaysShowExtensionCandidatesForSortingMethod:(id)arg1 ;
-(id)sortMethodsGroupsForCandidates:(id)arg1 ;
-(id)didAcceptCandidate:(id)arg1 ;
-(void)groupedCandidatesFromCandidates:(id)arg1 usingSortingMethod:(id)arg2 completion:(/*^block*/id)arg3 ;
@end


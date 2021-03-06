/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:37 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libTextInputCore.dylib/TIWordSearchOperation.h>

@class NSString, TIWordSearchCandidateResultSet, NSArray, TIWordSearch;

@interface TIWordSearchOperationGetCandidates : TIWordSearchOperation {

	char _predictionEnabled;
	char _reanalysisMode;
	NSString* _inputString;
	TIWordSearchCandidateResultSet* _results;
	id _target;
	NSArray* _geometryModelData;
	SEL _action;
	TIWordSearch* _wordSearch;
	unsigned _autocapitalizationType;
	NSArray* _candidateContext;
	NSString* _stringContext;

}

@property (nonatomic,readonly) NSString * inputString;                              //@synthesize inputString=_inputString - In the implementation block
@property (nonatomic,retain) TIWordSearchCandidateResultSet * results;              //@synthesize results=_results - In the implementation block
@property (nonatomic,readonly) id target;                                           //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) SEL action;                                          //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) char predictionEnabled;                              //@synthesize predictionEnabled=_predictionEnabled - In the implementation block
@property (nonatomic,readonly) char reanalysisMode;                                 //@synthesize reanalysisMode=_reanalysisMode - In the implementation block
@property (nonatomic,readonly) unsigned autocapitalizationType;                     //@synthesize autocapitalizationType=_autocapitalizationType - In the implementation block
@property (nonatomic,readonly) NSArray * geometryModelData;                         //@synthesize geometryModelData=_geometryModelData - In the implementation block
@property (nonatomic,readonly) NSArray * candidateContext;                          //@synthesize candidateContext=_candidateContext - In the implementation block
@property (nonatomic,readonly) NSString * stringContext;                            //@synthesize stringContext=_stringContext - In the implementation block
@property (retain) TIWordSearch * wordSearch;                                       //@synthesize wordSearch=_wordSearch - In the implementation block
-(void)dealloc;
-(SEL)action;
-(id)target;
-(TIWordSearchCandidateResultSet *)results;
-(unsigned)autocapitalizationType;
-(void)perform;
-(NSString *)inputString;
-(void)setResults:(TIWordSearchCandidateResultSet *)arg1 ;
-(TIWordSearch *)wordSearch;
-(void)setWordSearch:(TIWordSearch *)arg1 ;
-(char)predictionEnabled;
-(void)checkForCachedResults;
-(void)completeSearchOnMainThreadWithResults:(id)arg1 ;
-(id)initWithWordSearch:(id)arg1 inputString:(id)arg2 predictionEnabled:(char)arg3 reanalysisMode:(char)arg4 autocapitalizationType:(unsigned)arg5 target:(id)arg6 action:(SEL)arg7 geometryModelData:(id)arg8 candidateContext:(id)arg9 stringContext:(id)arg10 ;
-(NSArray *)geometryModelData;
-(char)reanalysisMode;
-(NSArray *)candidateContext;
-(NSString *)stringContext;
@end


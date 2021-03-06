/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:37 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class TIInputMode, NSString;

@interface TIKeyboardInputManagerConfig : NSObject {

	char _allowsSpaceCorrections;
	char _usesTextChecker;
	char _usesRetrocorrection;
	char _usesWordNgramModel;
	char _usesWordNgramModelAdaptation;
	char _completionsShouldSharePrefix;
	char _testing;
	TIInputMode* _inputMode;
	NSString* _staticDictionaryPath;
	NSString* _dynamicDictionaryPath;
	NSString* _ngramModelPath;
	unsigned _maxWordsPerPrediction;

}

@property (nonatomic,retain) TIInputMode * inputMode;                        //@synthesize inputMode=_inputMode - In the implementation block
@property (nonatomic,copy) NSString * staticDictionaryPath;                  //@synthesize staticDictionaryPath=_staticDictionaryPath - In the implementation block
@property (nonatomic,copy) NSString * dynamicDictionaryPath;                 //@synthesize dynamicDictionaryPath=_dynamicDictionaryPath - In the implementation block
@property (nonatomic,copy) NSString * ngramModelPath;                        //@synthesize ngramModelPath=_ngramModelPath - In the implementation block
@property (assign,nonatomic) char allowsSpaceCorrections;                    //@synthesize allowsSpaceCorrections=_allowsSpaceCorrections - In the implementation block
@property (assign,nonatomic) char usesTextChecker;                           //@synthesize usesTextChecker=_usesTextChecker - In the implementation block
@property (assign,nonatomic) char usesRetrocorrection;                       //@synthesize usesRetrocorrection=_usesRetrocorrection - In the implementation block
@property (assign,nonatomic) char usesWordNgramModel;                        //@synthesize usesWordNgramModel=_usesWordNgramModel - In the implementation block
@property (assign,nonatomic) char usesWordNgramModelAdaptation;              //@synthesize usesWordNgramModelAdaptation=_usesWordNgramModelAdaptation - In the implementation block
@property (assign,nonatomic) unsigned maxWordsPerPrediction;                 //@synthesize maxWordsPerPrediction=_maxWordsPerPrediction - In the implementation block
@property (assign,nonatomic) char completionsShouldSharePrefix;              //@synthesize completionsShouldSharePrefix=_completionsShouldSharePrefix - In the implementation block
@property (assign,getter=isTesting,nonatomic) char testing;                  //@synthesize testing=_testing - In the implementation block
+(id)configurationForInputMode:(id)arg1 ;
-(id)propertyList;
-(void)dealloc;
-(void)setInputMode:(TIInputMode *)arg1 ;
-(TIInputMode *)inputMode;
-(void)setTesting:(char)arg1 ;
-(char)isTesting;
-(char)allowsSpaceCorrections;
-(char)usesTextChecker;
-(char)usesRetrocorrection;
-(char)completionsShouldSharePrefix;
-(NSString *)staticDictionaryPath;
-(NSString *)dynamicDictionaryPath;
-(char)usesWordNgramModel;
-(char)usesWordNgramModelAdaptation;
-(unsigned)maxWordsPerPrediction;
-(void)setAllowsSpaceCorrections:(char)arg1 ;
-(void)setUsesTextChecker:(char)arg1 ;
-(void)setUsesRetrocorrection:(char)arg1 ;
-(void)setUsesWordNgramModel:(char)arg1 ;
-(void)setUsesWordNgramModelAdaptation:(char)arg1 ;
-(void)setMaxWordsPerPrediction:(unsigned)arg1 ;
-(void)setCompletionsShouldSharePrefix:(char)arg1 ;
-(void)setStaticDictionaryPath:(NSString *)arg1 ;
-(void)setNgramModelPath:(NSString *)arg1 ;
-(void)setDynamicDictionaryPath:(NSString *)arg1 ;
-(NSString *)ngramModelPath;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:56 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /usr/lib/libmecabra.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libmecabra.dylib/libmecabra.dylib-Structs.h>
#import <libmecabra.dylib/NSCopying.h>

@class NSString;

@interface MecabraCandidate : NSObject <NSCopying> {

	void* _rawCandidate;

}

@property (nonatomic,readonly) char isConversionCandidate; 
@property (nonatomic,readonly) char isExtensionCandidate; 
@property (nonatomic,readonly) char isEmojiCandidate; 
@property (nonatomic,readonly) char isPersonName; 
@property (nonatomic,readonly) char isLearningDictionaryCandidate; 
@property (nonatomic,readonly) char isUserWordCandidate; 
@property (nonatomic,readonly) char isPredictionCandidate; 
@property (nonatomic,readonly) char isFuzzyMatchCandidate; 
@property (nonatomic,readonly) char isAutocorrectedCandidate; 
@property (nonatomic,readonly) int type; 
@property (nonatomic,readonly) unsigned wordCount; 
@property (nonatomic,readonly) NSString * surface; 
@property (nonatomic,readonly) NSString * analysisString; 
@property (nonatomic,readonly) NSString * convertedAnalysisString; 
@property (nonatomic,readonly) NSString * dictionaryReading; 
@property (nonatomic,readonly) MecabraCandidateBase* rawCandidate; 
@property (nonatomic,readonly) ConversionCandidate* rawConversionCandidate; 
+(id)createSyntheticCandidate:(id)arg1 withLexicon:(void*)arg2 language:(int)arg3 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isExtensionCandidate;
-(unsigned short)kind;
-(id)words;
-(int)weight;
-(void)setWeight:(unsigned)arg1 ;
-(id)initWithCandidate:(MecabraCandidateBase*)arg1 ;
-(ConversionCandidate*)rawConversionCandidate;
-(char)isEmojiCandidate;
-(NSString *)surface;
-(NSString *)dictionaryReading;
-(MecabraCandidateBase*)rawCandidate;
-(NSString *)analysisString;
-(unsigned short)matchedLengthType;
-(char)isConversionCandidate;
-(NSString *)convertedAnalysisString;
-(char)isPersonName;
-(char)isLearningDictionaryCandidate;
-(char)isUserWordCandidate;
-(char)isPredictionCandidate;
-(char)isFuzzyMatchCandidate;
-(long)phraseBoundaryAfterWordAtIndex:(long)arg1 ;
-(unsigned)wordCount;
-(unsigned short)wordLengthAtIndex:(unsigned)arg1 ;
-(unsigned short)wordReadingLengthAtIndex:(unsigned)arg1 ;
-(char)wordIsFromSystemDictionaryAtIndex:(unsigned)arg1 ;
-(CFArrayRef)copySyllableLengthArrayForWordAtIndex:(unsigned)arg1 ;
-(unsigned short)lcAttrAtIndex:(unsigned)arg1 ;
-(unsigned short)rcAttrAtIndex:(unsigned)arg1 ;
-(unsigned)trieValueAtIndex:(unsigned)arg1 ;
-(unsigned short)lastPrefixValue;
-(unsigned short)matchType;
-(CFArrayRef)copySyllableLengthArrayInAnalysisString;
-(CFArrayRef)copySyllableLengthArrayInConvertedAnalysisString;
-(CFArrayRef)copySyllableLengthArrayInDictionaryReading;
-(SCD_Struct_Me4)wordRangeAtIndex:(long)arg1 ;
-(id)syllablesInAnalysisString;
-(id)syllablesInConvertedAnalysisString;
-(id)syllablesInDictionaryReading;
-(id)syllablesInString:(id)arg1 syllableLengths:(id)arg2 ;
-(char)isAutocorrectedCandidate;
-(id)convertedAnalysisStringForFirstSyllable;
-(id)syllabifiedAnalysisString;
-(id)syllabifiedConvertedAnalysisString;
-(id)syllabifiedDictionaryReading;
-(id)wordReadings;
-(id)wordIDs;
@end


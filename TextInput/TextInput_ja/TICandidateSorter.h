/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:35 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/TextInput/TextInput_ja.bundle/TextInput_ja
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <TextInput_ja/TextInput_ja-Structs.h>
@interface TICandidateSorter : NSObject {

	IDXIndexRef _index;
	CFDictionaryRef _radicalToSortPosition;

}

@property (assign) IDXIndexRef index;                                  //@synthesize index=_index - In the implementation block
@property (assign) CFDictionaryRef radicalToSortPosition;              //@synthesize radicalToSortPosition=_radicalToSortPosition - In the implementation block
-(void)dealloc;
-(id)init;
-(IDXIndexRef)index;
-(void)setIndex:(IDXIndexRef)arg1 ;
-(id)candidatesFromCandidates:(id)arg1 inputString:(id)arg2 sortedBy:(unsigned)arg3 ;
-(char)hasCandidatesFromCandidates:(id)arg1 inputString:(id)arg2 sortedBy:(unsigned)arg3 ;
-(void)setRadicalToSortPosition:(CFDictionaryRef)arg1 ;
-(char)getInfoForCharacter:(id)arg1 strokeCount:(unsigned*)arg2 radicals:(id*)arg3 yomis:(id*)arg4 ;
-(CFDictionaryRef)radicalToSortPosition;
-(char)hasCandidatesSortedByRadicalFromCandidates:(id)arg1 ;
-(char)hasCandidatesSortedByYomiFromCandidates:(id)arg1 inputString:(id)arg2 ;
-(id)candidatesSortedByRadicalFromCandidates:(id)arg1 ;
-(id)candidatesSortedByYomiFromCandidates:(id)arg1 inputString:(id)arg2 ;
@end


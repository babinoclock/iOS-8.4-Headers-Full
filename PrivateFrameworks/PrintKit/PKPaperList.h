/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:12 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PrintKit/PrintKit-Structs.h>
@class NSArray;

@interface PKPaperList : NSObject {

	char _hasMediaReady;
	NSArray* _papers;
	NSArray* _simplexPapers;
	NSArray* _duplexPapers;
	NSArray* _photoPapers;
	NSArray* _rolls;

}

@property (assign) char hasMediaReady;                     //@synthesize hasMediaReady=_hasMediaReady - In the implementation block
@property (retain) NSArray * papers;                       //@synthesize papers=_papers - In the implementation block
@property (retain) NSArray * simplexPapers;                //@synthesize simplexPapers=_simplexPapers - In the implementation block
@property (retain) NSArray * duplexPapers;                 //@synthesize duplexPapers=_duplexPapers - In the implementation block
@property (retain) NSArray * photoPapers;                  //@synthesize photoPapers=_photoPapers - In the implementation block
@property (nonatomic,retain) NSArray * rolls;              //@synthesize rolls=_rolls - In the implementation block
+(id)paperListWithAttrs:(ipp_s*)arg1 ;
+(id)paperListWithTXTRecord:(id)arg1 ;
+(id)mediaDictFromAttrs:(ipp_s*)arg1 ;
-(void)dealloc;
-(id)papersForPhotoWithSize:(CGSize)arg1 ;
-(id)papersForDocumentWithSize:(CGSize)arg1 andDuplex:(char)arg2 ;
-(NSArray *)photoPapers;
-(id)availableRollPapersPreferBorderless:(char)arg1 ;
-(char)isPaperReady:(id)arg1 ;
-(id)matchedPaper:(id)arg1 preferBorderless:(char)arg2 withDuplexMode:(id)arg3 didMatch:(char*)arg4 ;
-(char)hasMediaReady;
-(id)rollReadyPaperListForPhotoWithContentSize:(CGSize)arg1 ;
-(id)rollReadyPaperListWithContentSize:(CGSize)arg1 forPhoto:(char)arg2 ;
-(id)paperListForDuplexMode:(id)arg1 ;
-(id)initWithAttrs:(ipp_s*)arg1 ;
-(void)setHasMediaReady:(char)arg1 ;
-(void)setPapers:(NSArray *)arg1 ;
-(void)setRolls:(NSArray *)arg1 ;
-(NSArray *)papers;
-(void)categorizePapers:(id)arg1 ;
-(id)initWithTXTRecord:(id)arg1 ;
-(id)conjureMediaFromTXT:(id)arg1 ;
-(char)hasMatchingLoadedRoll:(id)arg1 ;
-(NSArray *)simplexPapers;
-(id)matchPaper:(id)arg1 inList:(id)arg2 ;
-(NSArray *)duplexPapers;
-(id)adjustMargins:(id)arg1 forDuplex:(id)arg2 ;
-(NSArray *)rolls;
-(id)rollReadyPaperListForDocumentWithContentSize:(CGSize)arg1 ;
-(id)tersePaperFrom:(id)arg1 withRequest:(id)arg2 ;
-(id)tersePaperFrom:(id)arg1 withMediaInfo:(id)arg2 ;
-(void)addPaperSet:(id*)arg1 withCount:(int)arg2 toArrays:(id*)arg3 ;
-(void)setSimplexPapers:(NSArray *)arg1 ;
-(void)setDuplexPapers:(NSArray *)arg1 ;
-(void)setPhotoPapers:(NSArray *)arg1 ;
-(id)filterUsingBlock:(/*^block*/id)arg1 ;
-(id)filterPapers:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(int)jobTypesSupported:(id)arg1 ;
-(id)matchPaper:(id)arg1 ;
@end


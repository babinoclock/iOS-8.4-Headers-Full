/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:36 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libTextInputCore.dylib/TIWordSearchOperation.h>

@class TIMecabraWrapper, NSArray, NSString;

@interface TIWordSearchOperationAdaptContext : TIWordSearchOperation {

	TIMecabraWrapper* _mecabraWrapper;
	NSArray* _candidateContext;
	NSString* _stringContext;

}

@property (nonatomic,retain) TIMecabraWrapper * mecabraWrapper;              //@synthesize mecabraWrapper=_mecabraWrapper - In the implementation block
@property (nonatomic,copy) NSArray * candidateContext;                       //@synthesize candidateContext=_candidateContext - In the implementation block
@property (nonatomic,copy) NSString * stringContext;                         //@synthesize stringContext=_stringContext - In the implementation block
-(void)cancel;
-(void)dealloc;
-(void)perform;
-(TIMecabraWrapper *)mecabraWrapper;
-(void)setMecabraWrapper:(TIMecabraWrapper *)arg1 ;
-(id)initWithWordSearch:(id)arg1 candidateContext:(id)arg2 stringContext:(id)arg3 ;
-(void)setStringContext:(NSString *)arg1 ;
-(NSArray *)candidateContext;
-(NSString *)stringContext;
-(void)setCandidateContext:(NSArray *)arg1 ;
@end


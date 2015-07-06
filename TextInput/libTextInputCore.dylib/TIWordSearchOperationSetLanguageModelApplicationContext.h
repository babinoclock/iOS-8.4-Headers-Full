/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:36 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libTextInputCore.dylib/TIWordSearchOperation.h>

@class TIMecabraWrapper, NSString;

@interface TIWordSearchOperationSetLanguageModelApplicationContext : TIWordSearchOperation {

	TIMecabraWrapper* _mecabraWrapper;
	NSString* _context;

}

@property (nonatomic,retain) TIMecabraWrapper * mecabraWrapper;              //@synthesize mecabraWrapper=_mecabraWrapper - In the implementation block
@property (nonatomic,copy) NSString * context;                               //@synthesize context=_context - In the implementation block
-(void)cancel;
-(void)dealloc;
-(NSString *)context;
-(void)setContext:(NSString *)arg1 ;
-(void)perform;
-(TIMecabraWrapper *)mecabraWrapper;
-(void)setMecabraWrapper:(TIMecabraWrapper *)arg1 ;
-(id)initWithWordSearch:(id)arg1 context:(id)arg2 ;
@end

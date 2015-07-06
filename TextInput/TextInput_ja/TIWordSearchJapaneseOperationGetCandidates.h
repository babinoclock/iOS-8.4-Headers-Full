/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:35 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/TextInput/TextInput_ja.bundle/TextInput_ja
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libTextInputCore.dylib/TIWordSearchOperationGetCandidates.h>

@class NSString;

@interface TIWordSearchJapaneseOperationGetCandidates : TIWordSearchOperationGetCandidates {

	char _flickUsed;
	NSString* _contextString;

}

@property (nonatomic,readonly) NSString * contextString;              //@synthesize contextString=_contextString - In the implementation block
@property (assign,nonatomic) char flickUsed;                          //@synthesize flickUsed=_flickUsed - In the implementation block
-(void)dealloc;
-(char)flickUsed;
-(void)setFlickUsed:(char)arg1 ;
-(id)initWithWordSearch:(id)arg1 inputString:(id)arg2 contextString:(id)arg3 predictionEnabled:(char)arg4 reanalysisMode:(char)arg5 autocapitalizationType:(unsigned)arg6 target:(id)arg7 action:(SEL)arg8 geometryModelData:(id)arg9 candidateContext:(id)arg10 stringContext:(id)arg11 flickUsed:(char)arg12 ;
-(NSString *)contextString;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:30 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScreenReaderCore/SCRCMathExpression.h>

@class SCRCMathExpression;

@interface SCRCMathRadicalExpression : SCRCMathExpression {

	SCRCMathExpression* _radicand;
	SCRCMathExpression* _rootIndex;

}

@property (nonatomic,retain) SCRCMathExpression * radicand;               //@synthesize radicand=_radicand - In the implementation block
@property (nonatomic,retain) SCRCMathExpression * rootIndex;              //@synthesize rootIndex=_rootIndex - In the implementation block
-(void)dealloc;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(char)arg2 ;
-(id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned)arg1 treePosition:(id)arg2 ;
-(id)subExpressions;
-(id)speakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned)arg2 treePosition:(id)arg3 ;
-(id)latexMathModeDescription;
-(unsigned)fractionLevel;
-(void)setRadicand:(SCRCMathExpression *)arg1 ;
-(void)setRootIndex:(SCRCMathExpression *)arg1 ;
-(SCRCMathExpression *)radicand;
-(SCRCMathExpression *)rootIndex;
-(char)_isSquareRoot;
-(char)_isCubeRoot;
-(id)mathMLString;
@end

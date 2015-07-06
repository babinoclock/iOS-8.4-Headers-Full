/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:25 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKit/_HKCFGExpression.h>

@class NSString, NSMutableArray, NSCharacterSet;

@interface _HKCFGNonTerminal : _HKCFGExpression {

	NSString* _label;
	NSMutableArray* _replacementRules;
	NSCharacterSet* _charactersToBeSkipped;

}

@property (nonatomic,copy) NSCharacterSet * charactersToBeSkipped;              //@synthesize charactersToBeSkipped=_charactersToBeSkipped - In the implementation block
+(id)nonTerminalWithLabel:(id)arg1 ;
-(NSCharacterSet *)charactersToBeSkipped;
-(void)_tryNodesWithContext:(id)arg1 solutionTest:(/*^block*/id)arg2 ;
-(unsigned)_minimumLength;
-(char)_tryNodesForExpressions:(id)arg1 nodes:(id)arg2 context:(id)arg3 solutionTest:(/*^block*/id)arg4 ;
-(void)_checkForCycles:(id)arg1 ;
-(void)addReplacementRuleWithExpressions:(id)arg1 nodeEvaluator:(/*^block*/id)arg2 ;
-(id)_parseTreeWithContext:(id)arg1 ;
-(id)_replacementRules;
-(void)_checkForCycles;
-(id)_label;
-(void)_invalidate;
-(void)setCharactersToBeSkipped:(NSCharacterSet *)arg1 ;
-(id)initWithLabel:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:43 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class NSString;

@interface FigStateMachine : NSObject {

	id _owner;
	int _lock;
	char _performsAtomicStateTransitions;
	unsigned _currentState;
	FigStateMachineStateConfiguration* _stateConfigurations;
	char _stateCount;
	NSString* _label;

}

@property (assign,nonatomic) char performsAtomicStateTransitions;              //@synthesize performsAtomicStateTransitions=_performsAtomicStateTransitions - In the implementation block
@property (readonly) unsigned currentState; 
@property (readonly) NSString * label; 
@property (readonly) NSString * currentStateLabel; 
+(void)initialize;
-(void)dealloc;
-(id)description;
-(unsigned)currentState;
-(NSString *)label;
-(id)initWithLabel:(id)arg1 stateCount:(char)arg2 initialState:(unsigned)arg3 owner:(id)arg4 ;
-(void)setLabel:(id)arg1 forState:(unsigned)arg2 ;
-(void)whenTransitioningFromState:(unsigned)arg1 toState:(unsigned)arg2 callHandler:(/*^block*/id)arg3 ;
-(void)whenTransitioningToState:(unsigned)arg1 callHandler:(/*^block*/id)arg2 ;
-(char)transitionToState:(unsigned)arg1 fromState:(unsigned)arg2 ;
-(char)transitionToState:(unsigned)arg1 errorStatus:(long)arg2 ;
-(NSString *)currentStateLabel;
-(void)setPerformsAtomicStateTransitions:(char)arg1 ;
-(void)whenTransitioningToStateFails:(unsigned)arg1 callHandler:(/*^block*/id)arg2 ;
-(char)_transitionToState:(unsigned)arg1 fromStates:(unsigned)arg2 errorStatus:(long)arg3 ;
-(id)labelForState:(unsigned)arg1 ;
-(void)markStateAsTerminal:(unsigned)arg1 ;
-(void)whenTransitioningToStates:(unsigned)arg1 callHandler:(/*^block*/id)arg2 ;
-(void)whenTransitioningToStatesFail:(unsigned)arg1 callHandler:(/*^block*/id)arg2 ;
-(char)transitionToState:(unsigned)arg1 fromStates:(unsigned)arg2 ;
-(char)performsAtomicStateTransitions;
-(char)transitionToState:(unsigned)arg1 ;
@end


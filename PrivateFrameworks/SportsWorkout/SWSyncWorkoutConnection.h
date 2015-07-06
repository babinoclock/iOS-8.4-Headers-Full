/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:35 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SportsWorkout/SWSyncServiceConnection.h>

@protocol SWSyncServiceConnectionDelegateSWSyncWorkoutConnectionDelegate;
@class NSString, NSInputStream;

@interface SWSyncWorkoutConnection : SWSyncServiceConnection {

	id<SWSyncServiceConnectionDelegate><SWSyncWorkoutConnectionDelegate> _delegate;
	NSString* _PIN;
	NSInputStream* _workoutXMLStream;

}

@property (assign,nonatomic) id<SWSyncServiceConnectionDelegate><SWSyncWorkoutConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * PIN;                                                                           //@synthesize PIN=_PIN - In the implementation block
@property (nonatomic,readonly) NSInputStream * workoutXMLStream;                                                         //@synthesize workoutXMLStream=_workoutXMLStream - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id<SWSyncServiceConnectionDelegate><SWSyncWorkoutConnectionDelegate>)arg1 ;
-(id<SWSyncServiceConnectionDelegate><SWSyncWorkoutConnectionDelegate>)delegate;
-(NSString *)PIN;
-(void)handleResponse:(id)arg1 ;
-(id)initWithPIN:(id)arg1 workoutXMLStream:(id)arg2 host:(id)arg3 delegate:(id)arg4 ;
-(NSInputStream *)workoutXMLStream;
@end


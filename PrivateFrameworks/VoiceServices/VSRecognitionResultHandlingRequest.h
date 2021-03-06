/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:14 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol VSRecognitionResultHandler;
@class NSArray, VSRecognitionAction;

@interface VSRecognitionResultHandlingRequest : NSObject {

	id<VSRecognitionResultHandler> _handler;
	NSArray* _results;
	VSRecognitionAction* _action;

}
-(void)dealloc;
-(id)results;
-(id)handler;
-(id)initWithHandler:(id)arg1 results:(id)arg2 ;
-(id)nextAction;
-(void)setNextAction:(id)arg1 ;
@end


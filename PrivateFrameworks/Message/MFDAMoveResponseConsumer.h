/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:25 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Message/MFDAMailAccountConsumer.h>
#import <Message/DAMessageMoveRequestConsumer.h>

@class NSSet, NSMutableDictionary, NSMutableSet, MFError;

@interface MFDAMoveResponseConsumer : MFDAMailAccountConsumer <DAMessageMoveRequestConsumer> {

	NSSet* _messagesIDs;
	NSMutableDictionary* _newRemoteIDsByMessageID;
	NSMutableSet* _failures;
	MFError* _error;

}

@property (nonatomic,retain) MFError * error;              //@synthesize error=_error - In the implementation block
-(void)dealloc;
-(MFError *)error;
-(id)initWithMessageIDs:(id)arg1 newRemoteIDsByMessageID:(id)arg2 failures:(id)arg3 ;
-(void)taskFailed:(id)arg1 statusCode:(int)arg2 error:(id)arg3 ;
-(void)resultsForMessageMove:(id)arg1 ;
-(void)setError:(MFError *)arg1 ;
@end


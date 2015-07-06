/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:29 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet;

@interface ML3SuicidePact : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableSet* _signatures;
	int _notifyToken;

}

@property (nonatomic,readonly) char isSigned; 
+(id)sharedPact;
-(void)dealloc;
-(id)init;
-(char)isSigned;
-(void)signForReason:(int)arg1 ;
-(void)_carryOutSuicidePact;
-(void)secedeForReason:(int)arg1 ;
-(char)isSignedForReason:(int)arg1 ;
-(void)execute;
@end


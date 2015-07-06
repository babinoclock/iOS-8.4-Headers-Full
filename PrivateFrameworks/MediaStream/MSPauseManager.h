/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:23 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MSPauseManagerDelegate;
@class NSMutableDictionary;

@interface MSPauseManager : NSObject {

	NSMutableDictionary* _UUIDToTimerMap;
	id<MSPauseManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MSPauseManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedManager;
-(void)dealloc;
-(void)setDelegate:(id<MSPauseManagerDelegate>)arg1 ;
-(id)init;
-(id<MSPauseManagerDelegate>)delegate;
-(void)_timerDidFire:(id)arg1 ;
-(void)_addPauseUUID:(id)arg1 ;
-(void)_removeTimerUUID:(id)arg1 ;
-(void)pingPauseUUID:(id)arg1 ;
-(void)unpauseUUID:(id)arg1 ;
-(char)isPaused;
@end


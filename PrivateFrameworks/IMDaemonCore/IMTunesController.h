/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:09 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDate, NSDictionary, NSMutableDictionary, NSMutableArray, NSString;

@interface IMTunesController : NSObject {

	NSDate* _lastChange;
	NSDictionary* _lastInfo;
	NSMutableDictionary* _playerInfo;
	NSMutableArray* _listeners;
	NSString* _messageFormat;

}

@property (nonatomic,readonly) char isEnabled; 
@property (nonatomic,readonly) NSDictionary * playerInfo;              //@synthesize playerInfo=_playerInfo - In the implementation block
@property (nonatomic,readonly) NSString * messageFormat; 
+(id)sharedTunesController;
-(void)dealloc;
-(id)init;
-(char)isEnabled;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(NSDictionary *)playerInfo;
-(NSString *)messageFormat;
-(void)_updateMessage;
-(void)_playerChanged:(id)arg1 ;
-(void)_playerChangedNotification:(id)arg1 ;
@end


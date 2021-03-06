/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:55 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class SSXPCConnection, SSMetricsConfiguration, NSObject, NSTimer;

@interface SSMetricsController : NSObject {

	SSXPCConnection* _connection;
	SSMetricsConfiguration* _configuration;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _flushSerialQueue;
	char _flushTimerEnabled;
	char _flushOnForeground;
	NSTimer* _flushEventsTimer;

}

@property (assign,getter=isFlushTimerEnabled,nonatomic) char flushTimerEnabled;              //@synthesize flushTimerEnabled=_flushTimerEnabled - In the implementation block
-(void)dealloc;
-(id)init;
-(id)_connection;
-(id)configuration;
-(id)serialQueue;
-(void)setGlobalConfiguration:(id)arg1 ;
-(void)_applicationWillEnterForeground;
-(void)setPageConfiguration:(id)arg1 ;
-(id)pingURLs;
-(id)locationWithPosition:(int)arg1 type:(id)arg2 fieldData:(id)arg3 ;
-(char)isDisabled;
-(void)flushUnreportedEventsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)insertEvent:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)_userType;
-(id)_cookieValuesForConfiguration:(id)arg1 ;
-(void)_flushUnreportedEventsIfEnabled;
-(void)_handleFlushTimer;
-(void)_setupFlushTimer;
-(void)insertEvents:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_serialQueueInsertEvents:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_enumerateFieldValuesWithMap:(id)arg1 fieldData:(id)arg2 block:(/*^block*/id)arg3 ;
-(id)_valueForField:(id)arg1 withFieldData:(id)arg2 ;
-(void)setFlushTimerEnabled:(char)arg1 ;
-(char)isFlushTimerEnabled;
@end


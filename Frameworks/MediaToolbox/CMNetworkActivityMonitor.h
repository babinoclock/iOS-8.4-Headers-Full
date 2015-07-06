/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:40 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, CMNetworkActivityObserver;

@interface CMNetworkActivityMonitor : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	char _networkIsActive;
	CMNetworkActivityObserver* _cmObserver;
	int _showingNetworkActivityCount;
	int _monitoringActiveCount;

}

@property (assign,nonatomic) char networkIsActive;                                                      //@synthesize networkIsActive=_networkIsActive - In the implementation block
@property (setter=setCMObserver:,nonatomic,retain) CMNetworkActivityObserver * cmObserver;              //@synthesize cmObserver=_cmObserver - In the implementation block
@property (assign,nonatomic) int showingNetworkActivityCount;                                           //@synthesize showingNetworkActivityCount=_showingNetworkActivityCount - In the implementation block
@property (assign,nonatomic) int monitoringActiveCount;                                                 //@synthesize monitoringActiveCount=_monitoringActiveCount - In the implementation block
+(id)sharedActivityMonitor;
-(void)setNetworkIsActive:(char)arg1 ;
-(void)setCMObserver:(id)arg1 ;
-(int)monitoringActiveCount;
-(void)setMonitoringActiveCount:(int)arg1 ;
-(CMNetworkActivityObserver *)cmObserver;
-(void)beginMonitoring;
-(void)endMonitoring;
-(int)showingNetworkActivityCount;
-(void)setShowingNetworkActivityCount:(int)arg1 ;
-(char)networkIsActive;
-(void)dealloc;
-(id)init;
@end

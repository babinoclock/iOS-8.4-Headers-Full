/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:19 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
#import <CoreUtils/CoreUtils-Structs.h>
@class NSMutableSet, NSObject, NSSet;

@interface WiFiScanner : NSObject {

	char _started;
	NSMutableSet* _devices;
	char _autoPoweredOn;
	NSObject*<OS_dispatch_source> _scanTimer;
	long _stopErr;
	WiFiManagerClientRef _wifiManager;
	WiFiDeviceClientRef _wifiDevice;
	CFArrayRef _scanChannels;
	char _scanActive;
	NSObject*<OS_dispatch_queue> _queue;
	LogCategory* _ucat;
	unsigned _scanFlags;
	/*^block*/id _handler;

}

@property (copy,readonly) NSSet * devices; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) unsigned scanFlags;                                      //@synthesize scanFlags=_scanFlags - In the implementation block
@property (assign,nonatomic) LogCategory* logCategory;                                //@synthesize ucat=_ucat - In the implementation block
@property (nonatomic,copy) id handler;                                                //@synthesize handler=_handler - In the implementation block
-(void)dealloc;
-(id)init;
-(void)stop;
-(void)_start;
-(void)setHandler:(id)arg1 ;
-(id)handler;
-(void)start;
-(void)_scanTimer;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_stop:(long)arg1 ;
-(LogCategory*)logCategory;
-(void)setLogCategory:(LogCategory*)arg1 ;
-(void)_stop2;
-(char)_isUnconfiguredIE:(id)arg1 ;
-(void)_scanProcessResults:(id)arg1 ;
-(unsigned)scanFlags;
-(void)setScanFlags:(unsigned)arg1 ;
-(NSSet *)devices;
@end


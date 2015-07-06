/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:45 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/_GEOCountryConfigurationServerProxy.h>

@protocol OS_dispatch_queue, _GEOCountryConfigurationServerProxyDelegate, OS_dispatch_source;
@class NSObject, NSString;

@interface _GEOCountryConfigurationLocalProxy : NSObject <_GEOCountryConfigurationServerProxy> {

	NSObject*<OS_dispatch_queue> _queue;
	id<_GEOCountryConfigurationServerProxyDelegate> _delegate;
	NSObject*<OS_dispatch_source> _scheduledUpdateTimer;
	CTServerConnectionRef _telephonyServerConnection;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<_GEOCountryConfigurationServerProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id<_GEOCountryConfigurationServerProxyDelegate>)arg1 ;
-(id)init;
-(id<_GEOCountryConfigurationServerProxyDelegate>)delegate;
-(void)updateCountryCode:(/*^block*/id)arg1 ;
-(void)_scheduleUpdate;
-(void)_updateCountryCode:(/*^block*/id)arg1 ;
-(void)_determineCurrentCountryCode:(/*^block*/id)arg1 ;
-(void)_reachabilityChanged:(id)arg1 ;
@end


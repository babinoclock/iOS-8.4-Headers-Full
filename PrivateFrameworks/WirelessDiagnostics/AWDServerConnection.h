/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:24 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/WirelessDiagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WirelessDiagnostics/WirelessDiagnostics-Structs.h>
@interface AWDServerConnection : NSObject {

	AWDServerConnection* fServerConnection;

}
-(void)dealloc;
-(id)newMetricContainerWithIdentifier:(unsigned long)arg1 ;
-(unsigned long long)getAWDTimestamp;
-(char)submitMetric:(id)arg1 ;
-(id)initWithComponentId:(unsigned long)arg1 andBlockOnConfiguration:(char)arg2 ;
-(char)registerQueriableMetricCallback:(/*^block*/id)arg1 forIdentifier:(unsigned long)arg2 ;
-(char)registerConfigChangeCallback:(/*^block*/id)arg1 ;
-(id)initWithComponentId:(unsigned long)arg1 ;
-(char)registerQueriableMetric:(unsigned long)arg1 callback:(/*^block*/id)arg2 ;
-(void)flushToQueue:(dispatch_queue_sRef)arg1 block:(/*^block*/id)arg2 ;
@end


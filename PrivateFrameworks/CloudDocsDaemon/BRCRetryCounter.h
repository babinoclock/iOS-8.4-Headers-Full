/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:54 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface BRCRetryCounter : NSObject {

	char _scheduled;
	unsigned _retryCount;
	long long _latestRetry;
	long long _throttleHash;

}

@property (nonatomic,readonly) unsigned retryCount;                 //@synthesize retryCount=_retryCount - In the implementation block
@property (nonatomic,readonly) long long latestRetry;               //@synthesize latestRetry=_latestRetry - In the implementation block
@property (nonatomic,readonly) long long throttleHash;              //@synthesize throttleHash=_throttleHash - In the implementation block
-(void)schedule;
-(void)incrementRetry;
-(id)initWithThrottleHash:(long long)arg1 ;
-(unsigned)retryCount;
-(long long)latestRetry;
-(long long)throttleHash;
@end


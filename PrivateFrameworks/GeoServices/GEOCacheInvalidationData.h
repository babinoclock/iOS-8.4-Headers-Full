/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:45 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface GEOCacheInvalidationData : NSObject {

	double _timestamp;
	double _ttl;
	unsigned _version;
	NSArray* _versionDomains;

}

@property (nonatomic,readonly) double timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) double ttl;                            //@synthesize ttl=_ttl - In the implementation block
@property (nonatomic,readonly) unsigned version;                      //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSArray * versionDomains;              //@synthesize versionDomains=_versionDomains - In the implementation block
-(void)dealloc;
-(double)timestamp;
-(unsigned)version;
-(double)ttl;
-(NSArray *)versionDomains;
-(id)initWithTimestamp:(double)arg1 ttl:(double)arg2 version:(unsigned)arg3 domains:(id)arg4 ;
@end


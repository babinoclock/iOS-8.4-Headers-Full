/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:45 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMapTable;

@interface GEORequestThrottler : NSObject {

	NSMapTable* _throttleMap;

}
+(id)sharedThrottler;
-(void)dealloc;
-(id)init;
-(void)clear;
-(void)_countryProvidersDidChange:(id)arg1 ;
-(char)allowRequest:(unsigned)arg1 toURL:(id)arg2 ;
@end


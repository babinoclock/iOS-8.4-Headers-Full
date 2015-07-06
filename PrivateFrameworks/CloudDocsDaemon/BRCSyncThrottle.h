/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:54 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/BRCThrottle.h>

@class NSPredicate;

@interface BRCSyncThrottle : BRCThrottle {

	NSPredicate* _predicate;

}

@property (nonatomic,retain) NSPredicate * predicate;              //@synthesize predicate=_predicate - In the implementation block
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(char)_validateThrottleParams:(id)arg1 ;
-(id)initWithName:(id)arg1 andParameters:(id)arg2 ;
-(char)matchesItem:(id)arg1 nsecsToRetry:(unsigned long long*)arg2 now:(unsigned long long)arg3 ;
@end


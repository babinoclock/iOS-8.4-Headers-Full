/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:52 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface PAGenealogyTimestampedMessage : NSObject {

	double _machTime;
	unsigned long long _activityId;

}

@property (readonly) double machTime;                            //@synthesize machTime=_machTime - In the implementation block
@property (readonly) unsigned long long activityId;              //@synthesize activityId=_activityId - In the implementation block
@property (readonly) NSString * message; 
-(char)isEqual:(id)arg1 ;
-(NSString *)message;
-(double)machTime;
-(unsigned long long)activityId;
-(id)initWithActivityId:(unsigned long long)arg1 atMachTime:(double)arg2 ;
-(int)compareToOtherMessage:(id)arg1 ;
@end


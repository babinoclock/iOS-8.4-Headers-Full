/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:59 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class AnalyticsWorkspace, NSMutableDictionary, NSObject;

@interface AnalyticsEngineCore : NSObject {

	AnalyticsWorkspace* workspace;
	NSMutableDictionary* spaces;
	NSObject*<OS_dispatch_source> mem_alerts;
	unsigned pending_mem_alerts;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
+(id)queue;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)shutdown;
-(void)_saveAndUnloadAllState;
-(int)performQueryOnEntityFromCache:(id)arg1 pred:(id)arg2 altpred:(id*)arg3 actions:(id)arg4 found:(id*)arg5 ;
-(void)performQueryPostProcessing:(id)arg1 actions:(id)arg2 processOutcome:(id)arg3 ;
-(id)initWithWorkspace:(id)arg1 params:(id)arg2 queue:(id)arg3 ;
-(BOOL)handlesEntity:(id)arg1 ;
-(void)performQueryOnEntity:(id)arg1 pred:(id)arg2 sort:(id)arg3 actions:(id)arg4 service:(id)arg5 connection:(id)arg6 reply:(/*^block*/id)arg7 ;
-(void)createSnapshotFor:(id)arg1 pred:(id)arg2 actions:(id)arg3 reply:(/*^block*/id)arg4 ;
-(id)setOption:(id)arg1 ;
-(void)resetDataFor:(id)arg1 nameKind:(id)arg2 ;
-(void)performQueryOnEntityCore:(id)arg1 pred:(id)arg2 sort:(id)arg3 actions:(id)arg4 service:(id)arg5 reply:(/*^block*/id)arg6 ;
-(id)extractQueryStringFrom:(id)arg1 isGeneric:(BOOL*)arg2 ;
@end


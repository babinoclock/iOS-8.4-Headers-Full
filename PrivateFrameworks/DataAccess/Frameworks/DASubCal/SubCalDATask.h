/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:26 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DASubCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DASubCal/DATask.h>

@class DATaskManager, DAStatusReport, NSString;

@interface SubCalDATask : NSObject <DATask> {

	char _finished;
	DATaskManager* _taskManager;
	DAStatusReport* _statusReport;

}

@property (assign,nonatomic) char finished;                                   //@synthesize finished=_finished - In the implementation block
@property (assign,nonatomic,__weak) DATaskManager * taskManager;              //@synthesize taskManager=_taskManager - In the implementation block
@property (nonatomic,retain) DAStatusReport * statusReport;                   //@synthesize statusReport=_statusReport - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFinished:(char)arg1 ;
-(DAStatusReport *)statusReport;
-(void)finishWithError:(id)arg1 ;
-(char)finished;
-(void)didFinish;
-(void)setStatusReport:(DAStatusReport *)arg1 ;
-(DATaskManager *)taskManager;
-(void)performTask;
-(void)cancelTaskWithReason:(int)arg1 underlyingError:(id)arg2 ;
-(char)shouldHoldPowerAssertion;
-(void)setTaskManager:(DATaskManager *)arg1 ;
-(void)willFinish;
-(void)performDelegateCallbackWithError:(id)arg1 ;
-(id)consumerDictKey;
@end


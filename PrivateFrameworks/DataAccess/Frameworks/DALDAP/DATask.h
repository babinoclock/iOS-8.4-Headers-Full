/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:26 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DALDAP.framework/DALDAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol DATask <NSObject>
@optional
-(void)startModal;
-(void)requestCancelTaskWithReason:(int)arg1;
-(char)shouldHoldPowerAssertion;
-(void)setTaskManager:(id)arg1;
-(char)shouldForceNetworking;

@required
-(void)finishWithError:(id)arg1;
-(void)performTask;
-(void)cancelTaskWithReason:(int)arg1 underlyingError:(id)arg2;

@end


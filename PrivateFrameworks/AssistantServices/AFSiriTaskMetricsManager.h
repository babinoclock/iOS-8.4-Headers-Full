/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:29 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, CDSession;

@interface AFSiriTaskMetricsManager : NSObject {

	NSObject*<OS_dispatch_queue> _duetQueue;
	CDSession* _coreDuetSession;

}
+(id)sharedManager;
-(id)init;
-(char)_parseCoreDuetAttributeValue:(id)arg1 aceId:(id*)arg2 duration:(double*)arg3 ;
-(void)registerPunchoutIdentifier:(id)arg1 ;
-(void)retrieveMetricsFromPreviousPunchout:(/*^block*/id)arg1 ;
-(void)deleteRegisteredIdentifiers;
@end


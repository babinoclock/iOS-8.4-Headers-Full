/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:05 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, PLOperator, NSObject;

@interface PLCFNotificationOperatorComposition : NSObject {

	char _listeningForNotifications;
	char _isStateRequired;
	NSString* _notificationName;
	/*^block*/id _operatorBlock;
	PLOperator* _operator;
	NSObject*<OS_dispatch_queue> _workQueue;
	int _stateToken;

}

@property (retain) NSString * notificationName;                         //@synthesize notificationName=_notificationName - In the implementation block
@property (nonatomic,copy) id operatorBlock;                            //@synthesize operatorBlock=_operatorBlock - In the implementation block
@property (assign) char listeningForNotifications;                      //@synthesize listeningForNotifications=_listeningForNotifications - In the implementation block
@property (__weak) PLOperator * operator;                               //@synthesize operator=_operator - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (assign) char isStateRequired;                                //@synthesize isStateRequired=_isStateRequired - In the implementation block
@property (assign) int stateToken;                                      //@synthesize stateToken=_stateToken - In the implementation block
-(void)dealloc;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(PLOperator *)operator;
-(id)operatorBlock;
-(void)setOperatorBlock:(id)arg1 ;
-(id)initWithWorkQueue:(id)arg1 forNotification:(id)arg2 requireState:(char)arg3 withBlock:(/*^block*/id)arg4 ;
-(char)listeningForNotifications;
-(void)setListeningForNotifications:(char)arg1 ;
-(char)isStateRequired;
-(NSString *)notificationName;
-(void)setNotificationName:(NSString *)arg1 ;
-(void)setIsStateRequired:(char)arg1 ;
-(int)stateToken;
-(void)setStateToken:(int)arg1 ;
-(id)initWithOperator:(id)arg1 forNotification:(id)arg2 requireState:(char)arg3 withBlock:(/*^block*/id)arg4 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(char)listenForNotifications:(char)arg1 ;
-(void)setOperator:(PLOperator *)arg1 ;
@end


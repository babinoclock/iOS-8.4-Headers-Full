/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:01 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HomeKitDaemon/HMMessageReceiver.h>
#import <HomeKitDaemon/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSUUID, NSString, NSMutableArray, HMDHome, NSObject, HMMessageDispatcher, NSDate;

@interface HMDTrigger : NSObject <HMMessageReceiver, NSSecureCoding> {

	char _active;
	NSString* _name;
	NSUUID* _uuid;
	NSMutableArray* _currentActionSets;
	HMDHome* _home;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMMessageDispatcher* _msgDispatcher;
	NSDate* _mostRecentFireDate;

}

@property (nonatomic,retain) NSString * name;                                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                                   //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSMutableArray * currentActionSets;                              //@synthesize currentActionSets=_currentActionSets - In the implementation block
@property (assign,nonatomic,__weak) HMDHome * home;                                           //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                          //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) HMMessageDispatcher * msgDispatcher;                             //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (assign,nonatomic) char active;                                                     //@synthesize active=_active - In the implementation block
@property (nonatomic,copy) NSDate * mostRecentFireDate;                                       //@synthesize mostRecentFireDate=_mostRecentFireDate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(char)supportsSecureCoding;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)invalidate;
-(char)active;
-(void)setActive:(char)arg1 ;
-(NSUUID *)uuid;
-(id)initWithName:(id)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(HMMessageDispatcher *)msgDispatcher;
-(id)actionSets;
-(id)_activate:(char)arg1 ;
-(void)checkForNoActions;
-(HMDHome *)home;
-(void)setMostRecentFireDate:(NSDate *)arg1 ;
-(NSDate *)mostRecentFireDate;
-(void)setHome:(HMDHome *)arg1 ;
-(void)setMsgDispatcher:(HMMessageDispatcher *)arg1 ;
-(void)_registerForMessages;
-(id)_updateActionSets:(id)arg1 add:(char)arg2 ;
-(void)_handleRenameRequest:(id)arg1 ;
-(void)_handleUpdateActionSetRequest:(id)arg1 ;
-(void)_handleActivateTriggerRequest:(id)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)removeActionSet:(id)arg1 ;
-(void)reEvaluate;
-(void)triggerFired;
-(void)configure:(id)arg1 messageDispatcher:(id)arg2 queue:(id)arg3 ;
-(NSMutableArray *)currentActionSets;
-(void)setCurrentActionSets:(NSMutableArray *)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
@end


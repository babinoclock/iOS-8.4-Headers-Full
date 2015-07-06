/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:26 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DADaemonSubCal.bundle/DADaemonSubCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DADaemonSupport/DAAgent.h>
#import <DADaemonSubCal/DARefreshManagerDelegate.h>
#import <DADaemonSubCal/SubCalDaemonAccountDelegate.h>

@class DATrustHandler, NSString;

@interface SubCalAgent : DAAgent <DARefreshManagerDelegate, SubCalDaemonAccountDelegate>

@property (nonatomic,readonly) DATrustHandler * trustHandler; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startMonitoring;
-(id)scheduleIdentifier;
-(id)watchedCollections;
-(void)refreshCollections:(id)arg1 withReason:(int)arg2 ;
-(void)syncFolderIDs:(id)arg1 forDataclasses:(int)arg2 isUserRequested:(char)arg3 ;
-(void)requestAgentStopMonitoringWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)onBehalfOfBundleIdentifier;
-(void)accountDidCompleteRefresh:(id)arg1 withError:(id)arg2 ;
@end

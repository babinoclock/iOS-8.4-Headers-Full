/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:01 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDOperation.h>

@class NSArray, NSMutableDictionary, NSMutableSet;

@interface CKDMarkNotificationsReadOperation : CKDOperation {

	/*^block*/id _notificationMarkedRead;
	NSArray* _notificationIDs;
	NSMutableDictionary* _errorByNotificationID;
	NSMutableSet* _successfulNotificationIDs;

}

@property (nonatomic,copy) id notificationMarkedRead;                                  //@synthesize notificationMarkedRead=_notificationMarkedRead - In the implementation block
@property (nonatomic,retain) NSArray * notificationIDs;                                //@synthesize notificationIDs=_notificationIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * errorByNotificationID;              //@synthesize errorByNotificationID=_errorByNotificationID - In the implementation block
@property (nonatomic,retain) NSMutableSet * successfulNotificationIDs;                 //@synthesize successfulNotificationIDs=_successfulNotificationIDs - In the implementation block
-(void)main;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setNotificationMarkedRead:(id)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(NSArray *)notificationIDs;
-(NSMutableSet *)successfulNotificationIDs;
-(NSMutableDictionary *)errorByNotificationID;
-(void)_handleNotificationID:(id)arg1 withResponse:(id)arg2 ;
-(id)notificationMarkedRead;
-(void)setNotificationIDs:(NSArray *)arg1 ;
-(void)setErrorByNotificationID:(NSMutableDictionary *)arg1 ;
-(void)setSuccessfulNotificationIDs:(NSMutableSet *)arg1 ;
@end


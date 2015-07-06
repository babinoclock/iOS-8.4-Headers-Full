/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:54 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class SSVSubscriptionStatusRequest, NSObject, SSVFamilyNotificationObserver, SSVSubscriptionStatus, NSDate, NSMutableArray;

@interface SSVSubscriptionStatusCoordinator : NSObject {

	SSVSubscriptionStatusRequest* _activeRequest;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	char _didReset;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	SSVFamilyNotificationObserver* _familyNotificationObserver;
	SSVSubscriptionStatus* _lastKnownStatus;
	NSDate* _lastStatusDate;
	int _notificationToken;
	NSMutableArray* _statusBlocks;

}

@property (copy,readonly) SSVSubscriptionStatus * lastKnownStatus; 
+(id)sharedCoordinator;
+(id)_existingSharedCoordinator;
-(SSVSubscriptionStatus *)lastKnownStatus;
-(void)getStatusWithOptions:(id)arg1 statusBlock:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)reset;
-(void)_externalChangeNotification;
-(void)_validateLastKnownStatus;
-(void)_deviceStoreFrontChangedNotification;
-(void)_familyDidChangeNotification;
-(id)_copyValidStatusForStatus:(id)arg1 ;
-(void)_fireStatusBlocksWithStatus:(id)arg1 isFinal:(char)arg2 error:(id)arg3 ;
-(void)_handleRequestResponseWithStatus:(id)arg1 isFinal:(char)arg2 error:(id)arg3 ;
-(id)_copyStatusFromUserDefaults;
-(void)modifyLastKnownStatusUsingBlock:(/*^block*/id)arg1 ;
-(void)_invalidateLastKnownStatus;
@end


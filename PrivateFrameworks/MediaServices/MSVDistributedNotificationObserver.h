/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:21 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, MSVDistributedNotificationObserverDelegate;
@class NSString, NSObject, NSDictionary;

@interface MSVDistributedNotificationObserver : NSObject {

	int _notifyToken;
	NSString* _distributedName;
	NSString* _localName;
	NSObject*<OS_dispatch_queue> _queue;
	id<MSVDistributedNotificationObserverDelegate> _delegate;
	NSDictionary* _userInfoForLocalNotification;

}

@property (nonatomic,readonly) NSString * distributedName;                                                //@synthesize distributedName=_distributedName - In the implementation block
@property (nonatomic,readonly) NSString * localName;                                                      //@synthesize localName=_localName - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                        //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<MSVDistributedNotificationObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfoForLocalNotification;                                   //@synthesize userInfoForLocalNotification=_userInfoForLocalNotification - In the implementation block
+(id)observerWithDistributedName:(id)arg1 localName:(id)arg2 queue:(id)arg3 ;
-(void)dealloc;
-(void)setDelegate:(id<MSVDistributedNotificationObserverDelegate>)arg1 ;
-(id)init;
-(id<MSVDistributedNotificationObserverDelegate>)delegate;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSString *)localName;
-(NSDictionary *)userInfoForLocalNotification;
-(void)_handleDistributedNotificationWithNotifyToken:(int)arg1 ;
-(void)setUserInfoForLocalNotification:(NSDictionary *)arg1 ;
-(id)initWithDistributedName:(id)arg1 localName:(id)arg2 queue:(id)arg3 ;
-(NSString *)distributedName;
-(int)notifyToken;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:46 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <NetworkExtension/NetworkExtension-Structs.h>
@class NSObject;

@interface NEUserNotification : NSObject {

	char _isBanner;
	CFUserNotificationRef _notification;
	CFRunLoopSourceRef _notificationSource;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	/*^block*/id _callback;

}

@property (assign) char isBanner;                                           //@synthesize isBanner=_isBanner - In the implementation block
@property (assign) CFUserNotificationRef notification;                      //@synthesize notification=_notification - In the implementation block
@property (assign) CFRunLoopSourceRef notificationSource;                   //@synthesize notificationSource=_notificationSource - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,copy) id callback;                                     //@synthesize callback=_callback - In the implementation block
-(void)setIsBanner:(char)arg1 ;
-(CFRunLoopSourceRef)notificationSource;
-(char)isBanner;
-(void)setNotificationSource:(CFRunLoopSourceRef)arg1 ;
-(id)initBannerWithHeader:(id)arg1 message:(id)arg2 disagreeMessage:(id)arg3 ;
-(id)initAuthenticationWithHeader:(id)arg1 options:(id)arg2 flags:(unsigned)arg3 ;
-(char)postNotificationWithCallbackQueue:(id)arg1 callbackHandler:(/*^block*/id)arg2 ;
-(void)cancel;
-(void)dealloc;
-(CFUserNotificationRef)notification;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setNotification:(CFUserNotificationRef)arg1 ;
-(id)callback;
-(void)setCallback:(id)arg1 ;
@end


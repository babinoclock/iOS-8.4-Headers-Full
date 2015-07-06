/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:33 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BulletinBoard/NSXPCListenerDelegate.h>
#import <BulletinBoard/BBDataProviderConnectionClientEndpoint.h>

@protocol OS_dispatch_queue;
@class NSXPCListener, BBDataProviderConnection, NSObject, NSXPCConnection, NSString;

@interface BBDataProviderConnectionResolver : NSObject <NSXPCListenerDelegate, BBDataProviderConnectionClientEndpoint> {

	NSXPCListener* _wakeupListener;
	BBDataProviderConnection* __dataProviderConnection;
	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _connectionToServer;
	int _listeningToken;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)resolverForConnection:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)ping:(/*^block*/id)arg1 ;
-(void)_registerForPublicationNotification;
-(void)setDataProviderConnection:(id)arg1 ;
-(void)_queue_registerWithServer:(/*^block*/id)arg1 ;
-(id)dataProviderConnection;
-(id)initWithConnection:(id)arg1 ;
@end

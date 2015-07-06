/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:16 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AOSNotification.framework/AOSNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AOSNotification/AOSXPCClientProtocol.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSString;

@interface AOSNotifySession : NSObject <AOSXPCClientProtocol> {

	NSXPCConnection* _xpcConnection;
	NSObject*<OS_dispatch_queue> _xpcConnectionCreationQueue;
	/*^block*/id _fmfAppPushMsgHandler;
	/*^block*/id _fmfAppPushTokenHandler;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;                                      //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> xpcConnectionCreationQueue;              //@synthesize xpcConnectionCreationQueue=_xpcConnectionCreationQueue - In the implementation block
@property (nonatomic,copy) id fmfAppPushMsgHandler;                                                //@synthesize fmfAppPushMsgHandler=_fmfAppPushMsgHandler - In the implementation block
@property (nonatomic,copy) id fmfAppPushTokenHandler;                                              //@synthesize fmfAppPushTokenHandler=_fmfAppPushTokenHandler - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)copyStoreAccount;
-(void)dealloc;
-(id)init;
-(void)retrieveLegacyFMFAccountUsingCallback:(/*^block*/id)arg1 ;
-(void)removeLegacyFMFAccountUsingCallback:(/*^block*/id)arg1 ;
-(oneway void)didReceiveFMFAppPushMessage:(id)arg1 ;
-(oneway void)didReceiveFMFAppPushToken:(id)arg1 ;
-(void)setFmfAppPushMsgHandler:(id)arg1 ;
-(void)setFmfAppPushTokenHandler:(id)arg1 ;
-(id)fmfAppPushMsgHandler;
-(id)fmfAppPushTokenHandler;
-(void)didEnterFMFRegion:(id)arg1 atLocation:(id)arg2 ;
-(void)didExitFMFRegion:(id)arg1 atLocation:(id)arg2 ;
-(void)didChangeFMFAccountInfo:(id)arg1 ;
-(id)addFMFAccount:(id)arg1 ;
-(id)removeFMFAccountWithUsername:(id)arg1 ;
-(id)retrieveFMFAccount:(id*)arg1 ;
-(void)willDeleteiCloudAccountWithCompletion:(/*^block*/id)arg1 ;
-(void)startListeningOnTopic:(id)arg1 ;
-(void)stopListeningOnTopic:(id)arg1 ;
-(id)retrieveAllAccounts:(id*)arg1 ;
-(id)fmfDeviceId;
-(void)retrieveFMFAccountUsingCallback:(/*^block*/id)arg1 ;
-(void)renewFMFAccountCredentialsUsingCallback:(/*^block*/id)arg1 ;
-(void)startListeningForFMFAppPushInEnvironment:(id)arg1 withMessageHandler:(/*^block*/id)arg2 tokenHandler:(/*^block*/id)arg3 ;
-(void)stopListeningForFMFAppPush;
-(void)locationAuthorizationForShareMyLocationWithCompletion:(/*^block*/id)arg1 ;
-(void)_destroyXPCConnection;
-(id)currentXPCConnection;
-(id)newErrorForCode:(int)arg1 message:(id)arg2 ;
-(id)fmipDeviceId;
-(id)fmipAccount;
-(NSObject*<OS_dispatch_queue>)xpcConnectionCreationQueue;
-(void)setXpcConnectionCreationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)iCloudAccount;
-(id)initWithDelegate:(id)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(id)storeAccount;
-(char)performMigration;
@end


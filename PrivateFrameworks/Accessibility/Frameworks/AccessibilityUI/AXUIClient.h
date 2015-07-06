/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:19 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUI.framework/AccessibilityUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccessibilityUI/AXUIMessageSenderDelegate.h>

@protocol AXUIClientDelegate;
@class NSString, AXUIMessageSender, AXUIClientConnection, NSDictionary;

@interface AXUIClient : NSObject <AXUIMessageSenderDelegate> {

	char _registeredWithServer;
	id<AXUIClientDelegate> _delegate;
	NSString* _serviceBundleName;
	AXUIMessageSender* _messageSender;
	AXUIClientConnection* _clientConnection;
	NSString* _clientIdentifier;
	NSDictionary* _initializationMessage;

}

@property (assign,nonatomic) id<AXUIClientDelegate> delegate;                                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * serviceBundleName;                                           //@synthesize serviceBundleName=_serviceBundleName - In the implementation block
@property (nonatomic,retain) AXUIMessageSender * messageSender;                                    //@synthesize messageSender=_messageSender - In the implementation block
@property (nonatomic,retain) AXUIClientConnection * clientConnection;                              //@synthesize clientConnection=_clientConnection - In the implementation block
@property (assign,getter=isRegisteredWithServer,nonatomic) char registeredWithServer;              //@synthesize registeredWithServer=_registeredWithServer - In the implementation block
@property (nonatomic,copy) NSString * clientIdentifier;                                            //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * initializationMessage;                                   //@synthesize initializationMessage=_initializationMessage - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)clientIdentifier;
-(void)setMessageSender:(AXUIMessageSender *)arg1 ;
-(AXUIMessageSender *)messageSender;
-(void)dealloc;
-(void)setDelegate:(id<AXUIClientDelegate>)arg1 ;
-(NSString *)description;
-(id<AXUIClientDelegate>)delegate;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithIdentifier:(id)arg1 serviceBundleName:(id)arg2 ;
-(void)sendAsynchronousMessage:(id)arg1 withIdentifier:(unsigned)arg2 targetAccessQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setServiceBundleName:(NSString *)arg1 ;
-(void)setClientConnection:(AXUIClientConnection *)arg1 ;
-(AXUIClientConnection *)clientConnection;
-(char)isRegisteredWithServer;
-(void)setRegisteredWithServer:(char)arg1 ;
-(void)setInitializationMessage:(NSDictionary *)arg1 ;
-(void)_requestInitializationMessageFromDelegateIfNeeded;
-(NSString *)serviceBundleName;
-(NSDictionary *)initializationMessage;
-(void)messageSender:(id)arg1 accessXPCConnectionForMessageWithContext:(void*)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void*)messageSender:(id)arg1 extractCustomDataFromXPCReply:(id)arg2 numberOfKeyValuePairsForCustomData:(unsigned*)arg3 ;
-(void)messageSender:(id)arg1 processCustomDataFromXPCReply:(void*)arg2 ;
-(void)messageSender:(id)arg1 willSendXPCMessage:(id)arg2 context:(void*)arg3 ;
-(void)sendAsynchronousMessage:(id)arg1 withIdentifier:(unsigned)arg2 targetAccessQueue:(id)arg3 completionRequiresWritingBlock:(char)arg4 completion:(/*^block*/id)arg5 ;
-(id)sendSynchronousMessage:(id)arg1 withIdentifier:(unsigned)arg2 error:(id*)arg3 ;
@end


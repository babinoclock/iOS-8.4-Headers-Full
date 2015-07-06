/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:16 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ATFoundation/ATServiceProxyConnection.h>

@protocol ATServiceProxyConnection <NSObject>
@required
-(void)connectWithCompletion:(/*^block*/id)arg1;
-(void)fetchMessageLinksWithCompletion:(/*^block*/id)arg1;

@end

#import <ATFoundation/ATServiceObserver.h>

@class ATService, NSXPCConnection, NSString;

@interface ATServiceProxyConnection : NSObject <ATServiceProxyConnection, ATServiceObserver> {

	ATService* _service;
	NSXPCConnection* _connection;

}

@property (assign,nonatomic,__weak) ATService * service;                //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(id)initWithService:(id)arg1 connection:(id)arg2 ;
-(void)connectWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchMessageLinksWithCompletion:(/*^block*/id)arg1 ;
-(void)service:(id)arg1 willOpenMessageLink:(id)arg2 ;
-(ATService *)service;
-(void)setService:(ATService *)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:24 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WirelessProximity/XPCClientDelegate.h>

@protocol WPAdvertisingDelegate;
@class XPCClient, NSString;

@interface WPAdvertising : NSObject <XPCClientDelegate> {

	int _state;
	XPCClient* _connection;
	id<WPAdvertisingDelegate> _delegate;

}

@property (assign) int state;                                                 //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) XPCClient * connection;                          //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) id<WPAdvertisingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)connectionInterrupted;
-(void)dealloc;
-(void)setDelegate:(id<WPAdvertisingDelegate>)arg1 ;
-(NSString *)description;
-(id<WPAdvertisingDelegate>)delegate;
-(int)state;
-(void)setState:(int)arg1 ;
-(XPCClient *)connection;
-(void)setConnection:(XPCClient *)arg1 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)updateState:(int)arg1 ;
-(void)messageArrived:(id)arg1 ;
-(void)connectionDied;
-(void)registerService:(id)arg1 ;
-(void)deregisterService:(id)arg1 ;
@end


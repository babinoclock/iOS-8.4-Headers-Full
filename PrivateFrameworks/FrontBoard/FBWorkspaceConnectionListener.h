/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:31 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FrontBoard/BSXPCConnectionListenerHandler.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface FBWorkspaceConnectionListener : NSObject <BSXPCConnectionListenerHandler> {

	NSObject*<OS_dispatch_queue> _connectionDispatcherQueue;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)handleIncomingConnection:(id)arg1 forService:(id)arg2 ;
@end


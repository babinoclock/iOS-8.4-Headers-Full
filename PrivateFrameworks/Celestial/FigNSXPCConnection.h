/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:44 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSXPCConnection.h>

@protocol OS_dispatch_group;
@class NSObject;

@interface FigNSXPCConnection : NSXPCConnection {

	NSObject*<OS_dispatch_group> _connectionRunningGroup;
	char _explicitlyInvalidated;

}

@property (nonatomic,readonly) char explicitlyInvalidated;              //@synthesize explicitlyInvalidated=_explicitlyInvalidated - In the implementation block
-(void)dealloc;
-(void)invalidate;
-(void)resume;
-(void)setInvalidationHandler:(/*^block*/id)arg1 ;
-(void)blockUntilInvalidateHandlerHasBeenCalled;
-(char)explicitlyInvalidated;
@end


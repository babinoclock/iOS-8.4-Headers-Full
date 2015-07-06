/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:32 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_source, SFAirDropBrowserDelegate;
#import <Sharing/Sharing-Structs.h>
@class NSObject, NSMutableDictionary, NSArray;

@interface SFAirDropBrowser : NSObject {

	char _didDelay;
	SFBrowserRef _browser;
	NSObject*<OS_dispatch_source> _timer;
	double _startTime;
	NSMutableDictionary* _nodes;
	NSArray* _people;
	id<SFAirDropBrowserDelegate> _delegate;

}

@property (nonatomic,readonly) NSArray * people;                       //@synthesize people=_people - In the implementation block
@property (__weak) id<SFAirDropBrowserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id<SFAirDropBrowserDelegate>)arg1 ;
-(id)init;
-(id<SFAirDropBrowserDelegate>)delegate;
-(void)stop;
-(void)start;
-(NSArray *)people;
-(void)updateDiscoveredPeople;
-(void)handleBrowserCallBack;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:59 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableSet, NSMutableArray, NSTimer;

@interface _UIViewServiceFencingController : NSObject {

	int _lock;
	NSMutableSet* _pendingFenceSendRights;
	NSMutableArray* _resumeActions;
	unsigned _expectedParticipatingFencingProxyCount;
	NSTimer* _fencingControlTimeoutTimer;

}
+(id)activeFencePort;
-(void)dealloc;
-(id)init;
-(void)fencingControlProxy:(id)arg1 didBeginFencingWithSendRight:(id)arg2 expectedParticipatingFencingProxyCount:(unsigned)arg3 ;
-(void)fencingControlProxy:(id)arg1 didEndFencingWithSendRight:(id)arg2 ;
-(void)_fencingControlTimedOut;
@end


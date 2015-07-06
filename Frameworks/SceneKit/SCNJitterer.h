/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:56 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SCNJittererDelegate, OS_dispatch_source;
@class NSObject;

@interface SCNJitterer : NSObject {

	char _enabled;
	unsigned _state;
	unsigned _iteration;
	char _jitteringSupported;
	char _restartSourceIsSuspended;
	id<SCNJittererDelegate> _delegate;
	NSObject*<OS_dispatch_source> _restartSource;

}

@property (assign,getter=isEnabled,nonatomic) char enabled; 
+(void)initialize;
-(void)restart;
-(void)stopIfNeeded;
-(void)jitter;
-(void)delegateWillDie;
-(char)isAborting;
-(void)dealloc;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(void)update;
-(id)initWithDelegate:(id)arg1 ;
@end


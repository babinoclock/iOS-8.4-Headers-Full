/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:56 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface _UIAsyncInvocationObserver : NSObject {

	NSObject*<OS_dispatch_queue> _postCompletionQueue;

}
+(void)whenInvocationsCompleteForObservers:(id)arg1 do:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)whenCompleteDo:(/*^block*/id)arg1 ;
-(void)_didCompleteInvocation;
@end


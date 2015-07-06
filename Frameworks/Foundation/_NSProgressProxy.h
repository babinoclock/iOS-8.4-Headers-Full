/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:23 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSProgress.h>

@protocol NSProgressPublisher;
@interface _NSProgressProxy : NSProgress {

	id<NSProgressPublisher> _forwarder;
	char _isOld;
	/*^block*/id _unpublishingHandler;

}
-(void)setPausingHandler:(/*^block*/id)arg1 ;
-(void)prioritize;
-(void)setPausable:(char)arg1 ;
-(void)publish;
-(void)unpublish;
-(void)acknowledgeWithSuccess:(char)arg1 ;
-(char)isOld;
-(void)setPrioritizable:(char)arg1 ;
-(void)setPrioritizationHandler:(/*^block*/id)arg1 ;
-(void)_acknowledgeWithSuccess:(char)arg1 ;
-(id)_initWithForwarder:(id)arg1 values:(id)arg2 isOld:(char)arg3 ;
-(void)_invokePublishingHandler:(/*^block*/id)arg1 ;
-(void)_invokeUnpublishingHandler;
-(void)becomeCurrentWithPendingUnitCount:(long long)arg1 ;
-(void)resignCurrent;
-(void)cancel;
-(void)dealloc;
-(void)setCancellationHandler:(/*^block*/id)arg1 ;
-(void)pause;
-(void)setTotalUnitCount:(long long)arg1 ;
-(void)setKind:(id)arg1 ;
-(void)setUserInfoObject:(id)arg1 forKey:(id)arg2 ;
-(void)setCancellable:(char)arg1 ;
-(void)setCompletedUnitCount:(long long)arg1 ;
-(void)setLocalizedDescription:(id)arg1 ;
@end


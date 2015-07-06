/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:52 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PCInterfaceUsabilityMonitorProtocol <PCInterfaceMonitorProtocol>
@property (nonatomic,readonly) char isRadioHot; 
@property (assign,nonatomic) id<PCInterfaceUsabilityMonitorDelegate> delegate; 
@required
-(void)setDelegate:(id)arg1;
-(id<PCInterfaceUsabilityMonitorDelegate>)delegate;
-(void)setTrackedTimeInterval:(double)arg1;
-(void)setThresholdOffTransitionCount:(unsigned)arg1;
-(void)setTrackUsability:(char)arg1;
-(char)isRadioHot;

@end

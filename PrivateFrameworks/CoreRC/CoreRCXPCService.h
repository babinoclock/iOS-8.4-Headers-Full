/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:15 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CoreRCXPCService
@required
-(void)setPropertyAsync:(id)arg1 forKey:(id)arg2 ofBus:(id)arg3 reply:(/*^block*/id)arg4;
-(void)getPropertyAsyncForKey:(id)arg1 ofBus:(id)arg2 reply:(/*^block*/id)arg3;
-(void)queryBusesAsync:(/*^block*/id)arg1;
-(void)sendHIDEventAsync:(id)arg1 fromDevice:(id)arg2 toDevice:(id)arg3 reply:(/*^block*/id)arg4;

@end


/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:15 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CoreRCXPCServiceCEC
@required
-(void)performActiveSourceAsync:(id)arg1 withMenus:(char)arg2 reply:(/*^block*/id)arg3;
-(void)performDeckControlSetDeckStatusAsync:(unsigned)arg1 forDevice:(id)arg2 reply:(/*^block*/id)arg3;
-(void)performDeckControlCommandAsync:(id)arg1 controlMode:(unsigned)arg2 targetDevice:(id)arg3 reply:(/*^block*/id)arg4;
-(void)performDeckControlPlayAsync:(id)arg1 playMode:(unsigned)arg2 targetDevice:(id)arg3 reply:(/*^block*/id)arg4;
-(void)performDeckControlRefreshStatusAsync:(id)arg1 targetDevice:(id)arg2 requestType:(unsigned)arg3 reply:(/*^block*/id)arg4;
-(void)performInactiveSourceAsync:(id)arg1 reply:(/*^block*/id)arg2;
-(void)performRefreshDevicesAsync:(id)arg1 reply:(/*^block*/id)arg2;
-(void)performRefreshProperties:(id)arg1 ofDevice:(id)arg2 withDeviceAsync:(id)arg3 reply:(/*^block*/id)arg4;
-(void)performRequestActiveSourceAsync:(id)arg1 reply:(/*^block*/id)arg2;
-(void)performSetSystemAudioControlEnabled:(char)arg1 withDeviceAsync:(id)arg2 reply:(/*^block*/id)arg3;
-(void)performSystemAudioModeRequestAsync:(id)arg1 withDesiredState:(unsigned)arg2 reply:(/*^block*/id)arg3;
-(void)performStandbyAsync:(id)arg1 targetDevice:(id)arg2 reply:(/*^block*/id)arg3;
-(void)queryLocalInstanceAsync:(unsigned)arg1 bus:(id)arg2 reply:(/*^block*/id)arg3;
-(void)setOsdNameAsync:(id)arg1 forBus:(id)arg2 reply:(/*^block*/id)arg3;
-(void)setTvLanguageCodeAsync:(id)arg1 forBus:(id)arg2 reply:(/*^block*/id)arg3;

@end


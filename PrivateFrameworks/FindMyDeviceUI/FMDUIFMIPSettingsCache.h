/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:30 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FindMyDeviceUI.framework/FindMyDeviceUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface FMDUIFMIPSettingsCache : NSObject {

	char _fmipStateAvailable;
	char _lowBatteryLocateStateAvailable;
	char _lowBatteryLocateEnabled;
	unsigned _fmipState;

}

@property (assign,nonatomic) char fmipStateAvailable;                          //@synthesize fmipStateAvailable=_fmipStateAvailable - In the implementation block
@property (assign,nonatomic) unsigned fmipState;                               //@synthesize fmipState=_fmipState - In the implementation block
@property (nonatomic,readonly) char fmipEnabled; 
@property (nonatomic,readonly) char fmipStateChangeInProgress; 
@property (assign,nonatomic) char lowBatteryLocateStateAvailable;              //@synthesize lowBatteryLocateStateAvailable=_lowBatteryLocateStateAvailable - In the implementation block
@property (assign,nonatomic) char lowBatteryLocateEnabled;                     //@synthesize lowBatteryLocateEnabled=_lowBatteryLocateEnabled - In the implementation block
+(id)sharedInstance;
-(id)init;
-(char)fmipStateAvailable;
-(unsigned)fmipState;
-(char)fmipStateChangeInProgress;
-(char)fmipEnabled;
-(char)lowBatteryLocateEnabled;
-(char)lowBatteryLocateStateAvailable;
-(void)_loadFMIPState;
-(void)_loadLowBatteryState;
-(void)setLowBatteryLocateEnabled:(char)arg1 ;
-(void)setLowBatteryLocateStateAvailable:(char)arg1 ;
-(void)setFmipState:(unsigned)arg1 ;
-(void)setFmipStateAvailable:(char)arg1 ;
@end


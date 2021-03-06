/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:07 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogLiteOperators/PowerlogLiteOperators-Structs.h>
#import <PowerlogLiteOperators/PLMav7BasebandHardwareMessage.h>

@interface PLBBMav10HwMsgParser : PLMav7BasebandHardwareMessage {

	SCD_Struct_PL24* _rfLTE;
	SCD_Struct_PL25* _rfWCDMA;
	SCD_Struct_PL26* _rfGSM;
	SCD_Struct_PL27* _rfTDS;
	SCD_Struct_PL30* _rf1x;
	SCD_Struct_PL31* _rfHDR;
	SCD_Struct_PL32* _rfOOS;
	SCD_Struct_PL33* _rpmNew;
	SCD_Struct_PL34* _apps_sleepNew;
	SCD_Struct_PL34* _mpss_sleepNew;
	SCD_Struct_PL35* _appsNew;
	SCD_Struct_PL36* _qdspNew;
	SCD_Struct_PL37* _mcpm_sleep_vetoNew;

}

@property (assign,nonatomic) SCD_Struct_PL24* rfLTE;                           //@synthesize rfLTE=_rfLTE - In the implementation block
@property (assign,nonatomic) SCD_Struct_PL25* rfWCDMA;                         //@synthesize rfWCDMA=_rfWCDMA - In the implementation block
@property (assign,nonatomic) SCD_Struct_PL26* rfGSM;                           //@synthesize rfGSM=_rfGSM - In the implementation block
@property (assign,nonatomic) SCD_Struct_PL27* rfTDS;                           //@synthesize rfTDS=_rfTDS - In the implementation block
@property (assign,nonatomic) SCD_Struct_PL30* rf1x;                            //@synthesize rf1x=_rf1x - In the implementation block
@property (assign,nonatomic) SCD_Struct_PL31* rfHDR;                           //@synthesize rfHDR=_rfHDR - In the implementation block
@property (assign,nonatomic) SCD_Struct_PL32* rfOOS;                           //@synthesize rfOOS=_rfOOS - In the implementation block
@property (assign,nonatomic) SCD_Struct_PL33* rpmNew;                          //@synthesize rpmNew=_rpmNew - In the implementation block
@property (assign,nonatomic) SCD_Struct_PL34* apps_sleepNew;                   //@synthesize apps_sleepNew=_apps_sleepNew - In the implementation block
@property (assign,nonatomic) SCD_Struct_PL34* mpss_sleepNew;                   //@synthesize mpss_sleepNew=_mpss_sleepNew - In the implementation block
@property (assign,nonatomic) SCD_Struct_PL35* appsNew;                         //@synthesize appsNew=_appsNew - In the implementation block
@property (assign,nonatomic) SCD_Struct_PL36* qdspNew;                         //@synthesize qdspNew=_qdspNew - In the implementation block
@property (assign,nonatomic) SCD_Struct_PL37* mcpm_sleep_vetoNew;              //@synthesize mcpm_sleep_vetoNew=_mcpm_sleep_vetoNew - In the implementation block
-(id)initWithData:(id)arg1 ;
-(void)parseData:(id)arg1 ;
-(void)logWithLogger:(id)arg1 ;
-(void)setRpmNew:(SCD_Struct_PL33*)arg1 ;
-(void)setAppsNew:(SCD_Struct_PL35*)arg1 ;
-(void)setApps_sleepNew:(SCD_Struct_PL34*)arg1 ;
-(void)setQdspNew:(SCD_Struct_PL36*)arg1 ;
-(void)setMpss_sleepNew:(SCD_Struct_PL34*)arg1 ;
-(void)setRfLTE:(SCD_Struct_PL24*)arg1 ;
-(void)setRfWCDMA:(SCD_Struct_PL25*)arg1 ;
-(void)setRfGSM:(SCD_Struct_PL26*)arg1 ;
-(void)setRfTDS:(SCD_Struct_PL27*)arg1 ;
-(void)setRf1x:(SCD_Struct_PL30*)arg1 ;
-(void)setRfHDR:(SCD_Struct_PL31*)arg1 ;
-(void)setRfOOS:(SCD_Struct_PL32*)arg1 ;
-(void)setMcpm_sleep_vetoNew:(SCD_Struct_PL37*)arg1 ;
-(int)GetClockCount:(PLMav7BasebandHWStatsClockStateMask*)arg1 ;
-(void)SetClocks:(PLMav7BasebandHWStatsClockStateMask*)arg1 oftype:(int)arg2 withData:(char*)arg3 ;
-(void)logRPMWithLogger:(id)arg1 ;
-(void)logAPPSWithLogger:(id)arg1 ;
-(void)logMPSSWithLogger:(id)arg1 ;
-(void)logSleepVetoWithLogger:(id)arg1 ;
-(void)logHwRFLTEWithLogger:(id)arg1 ;
-(void)logHwRFWCDMAWithLogger:(id)arg1 ;
-(void)logHwRFGSMWithLogger:(id)arg1 ;
-(void)logHwRFTDSWithLogger:(id)arg1 ;
-(void)logHwRF1xWithLogger:(id)arg1 ;
-(void)logHwRFHDRWithLogger:(id)arg1 ;
-(void)logHwRFOOSWithLogger:(id)arg1 ;
-(SCD_Struct_PL37*)mcpm_sleep_vetoNew;
-(SCD_Struct_PL33*)rpmNew;
-(SCD_Struct_PL35*)appsNew;
-(SCD_Struct_PL34*)apps_sleepNew;
-(SCD_Struct_PL34*)mpss_sleepNew;
-(SCD_Struct_PL36*)qdspNew;
-(SCD_Struct_PL24*)rfLTE;
-(SCD_Struct_PL25*)rfWCDMA;
-(SCD_Struct_PL26*)rfGSM;
-(SCD_Struct_PL27*)rfTDS;
-(SCD_Struct_PL30*)rf1x;
-(SCD_Struct_PL31*)rfHDR;
-(SCD_Struct_PL32*)rfOOS;
@end


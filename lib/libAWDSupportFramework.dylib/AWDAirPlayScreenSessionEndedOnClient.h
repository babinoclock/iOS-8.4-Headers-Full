/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:47 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libAWDSupportFramework.dylib/NSCopying.h>

@class NSString;

@interface AWDAirPlayScreenSessionEndedOnClient : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _avgBitrate;
	unsigned _avgEstimatedBandwidth;
	unsigned _avgUsedBandwidth;
	unsigned _clearScreens;
	unsigned _configChanges;
	unsigned _cpuAvg;
	unsigned _duration;
	unsigned _forcedRefreshes;
	unsigned _framesSent;
	int _reason;
	unsigned _resumes;
	unsigned _retransmitAvg;
	unsigned _rttAvg;
	NSString* _sessionUUID;
	unsigned _suspends;
	unsigned _unclearScreens;
	unsigned _wifiChannel;
	int _wifiRSSI;
	SCD_Struct_AW28 _has;

}

@property (nonatomic,readonly) char hasSessionUUID; 
@property (nonatomic,retain) NSString * sessionUUID;                      //@synthesize sessionUUID=_sessionUUID - In the implementation block
@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasReason; 
@property (assign,nonatomic) int reason;                                  //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) char hasDuration; 
@property (assign,nonatomic) unsigned duration;                           //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) char hasFramesSent; 
@property (assign,nonatomic) unsigned framesSent;                         //@synthesize framesSent=_framesSent - In the implementation block
@property (assign,nonatomic) char hasConfigChanges; 
@property (assign,nonatomic) unsigned configChanges;                      //@synthesize configChanges=_configChanges - In the implementation block
@property (assign,nonatomic) char hasClearScreens; 
@property (assign,nonatomic) unsigned clearScreens;                       //@synthesize clearScreens=_clearScreens - In the implementation block
@property (assign,nonatomic) char hasUnclearScreens; 
@property (assign,nonatomic) unsigned unclearScreens;                     //@synthesize unclearScreens=_unclearScreens - In the implementation block
@property (assign,nonatomic) char hasSuspends; 
@property (assign,nonatomic) unsigned suspends;                           //@synthesize suspends=_suspends - In the implementation block
@property (assign,nonatomic) char hasResumes; 
@property (assign,nonatomic) unsigned resumes;                            //@synthesize resumes=_resumes - In the implementation block
@property (assign,nonatomic) char hasForcedRefreshes; 
@property (assign,nonatomic) unsigned forcedRefreshes;                    //@synthesize forcedRefreshes=_forcedRefreshes - In the implementation block
@property (assign,nonatomic) char hasAvgEstimatedBandwidth; 
@property (assign,nonatomic) unsigned avgEstimatedBandwidth;              //@synthesize avgEstimatedBandwidth=_avgEstimatedBandwidth - In the implementation block
@property (assign,nonatomic) char hasAvgUsedBandwidth; 
@property (assign,nonatomic) unsigned avgUsedBandwidth;                   //@synthesize avgUsedBandwidth=_avgUsedBandwidth - In the implementation block
@property (assign,nonatomic) char hasAvgBitrate; 
@property (assign,nonatomic) unsigned avgBitrate;                         //@synthesize avgBitrate=_avgBitrate - In the implementation block
@property (assign,nonatomic) char hasRetransmitAvg; 
@property (assign,nonatomic) unsigned retransmitAvg;                      //@synthesize retransmitAvg=_retransmitAvg - In the implementation block
@property (assign,nonatomic) char hasRttAvg; 
@property (assign,nonatomic) unsigned rttAvg;                             //@synthesize rttAvg=_rttAvg - In the implementation block
@property (assign,nonatomic) char hasCpuAvg; 
@property (assign,nonatomic) unsigned cpuAvg;                             //@synthesize cpuAvg=_cpuAvg - In the implementation block
@property (assign,nonatomic) char hasWifiRSSI; 
@property (assign,nonatomic) int wifiRSSI;                                //@synthesize wifiRSSI=_wifiRSSI - In the implementation block
@property (assign,nonatomic) char hasWifiChannel; 
@property (assign,nonatomic) unsigned wifiChannel;                        //@synthesize wifiChannel=_wifiChannel - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned long long)timestamp;
-(unsigned)duration;
-(void)setDuration:(unsigned)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(int)reason;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(char)hasTimestamp;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setHasDuration:(char)arg1 ;
-(char)hasDuration;
-(void)setReason:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setSessionUUID:(NSString *)arg1 ;
-(char)hasSessionUUID;
-(NSString *)sessionUUID;
-(void)setHasReason:(char)arg1 ;
-(char)hasReason;
-(void)setConfigChanges:(unsigned)arg1 ;
-(void)setHasConfigChanges:(char)arg1 ;
-(char)hasConfigChanges;
-(void)setClearScreens:(unsigned)arg1 ;
-(void)setHasClearScreens:(char)arg1 ;
-(char)hasClearScreens;
-(void)setUnclearScreens:(unsigned)arg1 ;
-(void)setHasUnclearScreens:(char)arg1 ;
-(char)hasUnclearScreens;
-(void)setSuspends:(unsigned)arg1 ;
-(void)setHasSuspends:(char)arg1 ;
-(char)hasSuspends;
-(void)setResumes:(unsigned)arg1 ;
-(void)setHasResumes:(char)arg1 ;
-(char)hasResumes;
-(void)setForcedRefreshes:(unsigned)arg1 ;
-(void)setHasForcedRefreshes:(char)arg1 ;
-(char)hasForcedRefreshes;
-(unsigned)configChanges;
-(unsigned)clearScreens;
-(unsigned)unclearScreens;
-(unsigned)suspends;
-(unsigned)resumes;
-(unsigned)forcedRefreshes;
-(void)setFramesSent:(unsigned)arg1 ;
-(void)setHasFramesSent:(char)arg1 ;
-(char)hasFramesSent;
-(void)setAvgEstimatedBandwidth:(unsigned)arg1 ;
-(void)setHasAvgEstimatedBandwidth:(char)arg1 ;
-(char)hasAvgEstimatedBandwidth;
-(void)setAvgUsedBandwidth:(unsigned)arg1 ;
-(void)setHasAvgUsedBandwidth:(char)arg1 ;
-(char)hasAvgUsedBandwidth;
-(void)setAvgBitrate:(unsigned)arg1 ;
-(void)setHasAvgBitrate:(char)arg1 ;
-(char)hasAvgBitrate;
-(void)setRetransmitAvg:(unsigned)arg1 ;
-(void)setHasRetransmitAvg:(char)arg1 ;
-(char)hasRetransmitAvg;
-(void)setRttAvg:(unsigned)arg1 ;
-(void)setHasRttAvg:(char)arg1 ;
-(char)hasRttAvg;
-(void)setCpuAvg:(unsigned)arg1 ;
-(void)setHasCpuAvg:(char)arg1 ;
-(char)hasCpuAvg;
-(void)setWifiRSSI:(int)arg1 ;
-(void)setHasWifiRSSI:(char)arg1 ;
-(char)hasWifiRSSI;
-(void)setWifiChannel:(unsigned)arg1 ;
-(void)setHasWifiChannel:(char)arg1 ;
-(char)hasWifiChannel;
-(unsigned)framesSent;
-(unsigned)avgEstimatedBandwidth;
-(unsigned)avgUsedBandwidth;
-(unsigned)avgBitrate;
-(unsigned)retransmitAvg;
-(unsigned)rttAvg;
-(unsigned)cpuAvg;
-(int)wifiRSSI;
-(unsigned)wifiChannel;
@end

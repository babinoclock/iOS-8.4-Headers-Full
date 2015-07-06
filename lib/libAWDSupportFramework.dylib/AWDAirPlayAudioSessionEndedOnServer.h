/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:48 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libAWDSupportFramework.dylib/NSCopying.h>

@class NSString;

@interface AWDAirPlayAudioSessionEndedOnServer : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _bigLosses;
	unsigned _compressionPercent;
	unsigned _dacpNext;
	unsigned _dacpPauses;
	unsigned _dacpPrevious;
	unsigned _duration;
	unsigned _futileRetransmits;
	unsigned _glitches;
	unsigned _lastPackets;
	unsigned _lostPackets;
	unsigned _maxBurstLoss;
	unsigned _ntpOffsetAvg;
	unsigned _ntpOffsetMax;
	unsigned _ntpOffsetMin;
	unsigned _ntpOutliers;
	unsigned _ntpRTTAvg;
	unsigned _ntpRTTMax;
	unsigned _ntpRTTMin;
	unsigned _ntpSteps;
	int _reason;
	unsigned _retransmitAvgMs;
	unsigned _retransmitMaxMs;
	unsigned _retransmitMinMs;
	unsigned _retransmitNotFounds;
	unsigned _retransmitReceives;
	unsigned _retransmitRetryMaxMs;
	unsigned _retransmitRetryMinMs;
	unsigned _retransmitSends;
	unsigned _rtpMaxSkew;
	unsigned _rtpSkewResets;
	NSString* _sessionUUID;
	unsigned _unrecoveredPackets;
	SCD_Struct_AW30 _has;

}

@property (nonatomic,readonly) char hasSessionUUID; 
@property (nonatomic,retain) NSString * sessionUUID;                     //@synthesize sessionUUID=_sessionUUID - In the implementation block
@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasReason; 
@property (assign,nonatomic) int reason;                                 //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) char hasDuration; 
@property (assign,nonatomic) unsigned duration;                          //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) char hasCompressionPercent; 
@property (assign,nonatomic) unsigned compressionPercent;                //@synthesize compressionPercent=_compressionPercent - In the implementation block
@property (assign,nonatomic) char hasGlitches; 
@property (assign,nonatomic) unsigned glitches;                          //@synthesize glitches=_glitches - In the implementation block
@property (assign,nonatomic) char hasRetransmitSends; 
@property (assign,nonatomic) unsigned retransmitSends;                   //@synthesize retransmitSends=_retransmitSends - In the implementation block
@property (assign,nonatomic) char hasRetransmitReceives; 
@property (assign,nonatomic) unsigned retransmitReceives;                //@synthesize retransmitReceives=_retransmitReceives - In the implementation block
@property (assign,nonatomic) char hasFutileRetransmits; 
@property (assign,nonatomic) unsigned futileRetransmits;                 //@synthesize futileRetransmits=_futileRetransmits - In the implementation block
@property (assign,nonatomic) char hasRetransmitNotFounds; 
@property (assign,nonatomic) unsigned retransmitNotFounds;               //@synthesize retransmitNotFounds=_retransmitNotFounds - In the implementation block
@property (assign,nonatomic) char hasRetransmitMinMs; 
@property (assign,nonatomic) unsigned retransmitMinMs;                   //@synthesize retransmitMinMs=_retransmitMinMs - In the implementation block
@property (assign,nonatomic) char hasRetransmitMaxMs; 
@property (assign,nonatomic) unsigned retransmitMaxMs;                   //@synthesize retransmitMaxMs=_retransmitMaxMs - In the implementation block
@property (assign,nonatomic) char hasRetransmitAvgMs; 
@property (assign,nonatomic) unsigned retransmitAvgMs;                   //@synthesize retransmitAvgMs=_retransmitAvgMs - In the implementation block
@property (assign,nonatomic) char hasRetransmitRetryMinMs; 
@property (assign,nonatomic) unsigned retransmitRetryMinMs;              //@synthesize retransmitRetryMinMs=_retransmitRetryMinMs - In the implementation block
@property (assign,nonatomic) char hasRetransmitRetryMaxMs; 
@property (assign,nonatomic) unsigned retransmitRetryMaxMs;              //@synthesize retransmitRetryMaxMs=_retransmitRetryMaxMs - In the implementation block
@property (assign,nonatomic) char hasLostPackets; 
@property (assign,nonatomic) unsigned lostPackets;                       //@synthesize lostPackets=_lostPackets - In the implementation block
@property (assign,nonatomic) char hasUnrecoveredPackets; 
@property (assign,nonatomic) unsigned unrecoveredPackets;                //@synthesize unrecoveredPackets=_unrecoveredPackets - In the implementation block
@property (assign,nonatomic) char hasLastPackets; 
@property (assign,nonatomic) unsigned lastPackets;                       //@synthesize lastPackets=_lastPackets - In the implementation block
@property (assign,nonatomic) char hasMaxBurstLoss; 
@property (assign,nonatomic) unsigned maxBurstLoss;                      //@synthesize maxBurstLoss=_maxBurstLoss - In the implementation block
@property (assign,nonatomic) char hasBigLosses; 
@property (assign,nonatomic) unsigned bigLosses;                         //@synthesize bigLosses=_bigLosses - In the implementation block
@property (assign,nonatomic) char hasNtpRTTMin; 
@property (assign,nonatomic) unsigned ntpRTTMin;                         //@synthesize ntpRTTMin=_ntpRTTMin - In the implementation block
@property (assign,nonatomic) char hasNtpRTTMax; 
@property (assign,nonatomic) unsigned ntpRTTMax;                         //@synthesize ntpRTTMax=_ntpRTTMax - In the implementation block
@property (assign,nonatomic) char hasNtpRTTAvg; 
@property (assign,nonatomic) unsigned ntpRTTAvg;                         //@synthesize ntpRTTAvg=_ntpRTTAvg - In the implementation block
@property (assign,nonatomic) char hasNtpOffsetMin; 
@property (assign,nonatomic) unsigned ntpOffsetMin;                      //@synthesize ntpOffsetMin=_ntpOffsetMin - In the implementation block
@property (assign,nonatomic) char hasNtpOffsetMax; 
@property (assign,nonatomic) unsigned ntpOffsetMax;                      //@synthesize ntpOffsetMax=_ntpOffsetMax - In the implementation block
@property (assign,nonatomic) char hasNtpOffsetAvg; 
@property (assign,nonatomic) unsigned ntpOffsetAvg;                      //@synthesize ntpOffsetAvg=_ntpOffsetAvg - In the implementation block
@property (assign,nonatomic) char hasNtpOutliers; 
@property (assign,nonatomic) unsigned ntpOutliers;                       //@synthesize ntpOutliers=_ntpOutliers - In the implementation block
@property (assign,nonatomic) char hasNtpSteps; 
@property (assign,nonatomic) unsigned ntpSteps;                          //@synthesize ntpSteps=_ntpSteps - In the implementation block
@property (assign,nonatomic) char hasRtpMaxSkew; 
@property (assign,nonatomic) unsigned rtpMaxSkew;                        //@synthesize rtpMaxSkew=_rtpMaxSkew - In the implementation block
@property (assign,nonatomic) char hasRtpSkewResets; 
@property (assign,nonatomic) unsigned rtpSkewResets;                     //@synthesize rtpSkewResets=_rtpSkewResets - In the implementation block
@property (assign,nonatomic) char hasDacpPauses; 
@property (assign,nonatomic) unsigned dacpPauses;                        //@synthesize dacpPauses=_dacpPauses - In the implementation block
@property (assign,nonatomic) char hasDacpNext; 
@property (assign,nonatomic) unsigned dacpNext;                          //@synthesize dacpNext=_dacpNext - In the implementation block
@property (assign,nonatomic) char hasDacpPrevious; 
@property (assign,nonatomic) unsigned dacpPrevious;                      //@synthesize dacpPrevious=_dacpPrevious - In the implementation block
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
-(void)setFutileRetransmits:(unsigned)arg1 ;
-(void)setHasFutileRetransmits:(char)arg1 ;
-(char)hasFutileRetransmits;
-(unsigned)futileRetransmits;
-(void)setCompressionPercent:(unsigned)arg1 ;
-(void)setHasCompressionPercent:(char)arg1 ;
-(char)hasCompressionPercent;
-(void)setGlitches:(unsigned)arg1 ;
-(void)setHasGlitches:(char)arg1 ;
-(char)hasGlitches;
-(void)setRetransmitSends:(unsigned)arg1 ;
-(void)setHasRetransmitSends:(char)arg1 ;
-(char)hasRetransmitSends;
-(void)setRetransmitReceives:(unsigned)arg1 ;
-(void)setHasRetransmitReceives:(char)arg1 ;
-(char)hasRetransmitReceives;
-(void)setRetransmitNotFounds:(unsigned)arg1 ;
-(void)setHasRetransmitNotFounds:(char)arg1 ;
-(char)hasRetransmitNotFounds;
-(void)setRetransmitMinMs:(unsigned)arg1 ;
-(void)setHasRetransmitMinMs:(char)arg1 ;
-(char)hasRetransmitMinMs;
-(void)setRetransmitMaxMs:(unsigned)arg1 ;
-(void)setHasRetransmitMaxMs:(char)arg1 ;
-(char)hasRetransmitMaxMs;
-(void)setRetransmitAvgMs:(unsigned)arg1 ;
-(void)setHasRetransmitAvgMs:(char)arg1 ;
-(char)hasRetransmitAvgMs;
-(void)setRetransmitRetryMinMs:(unsigned)arg1 ;
-(void)setHasRetransmitRetryMinMs:(char)arg1 ;
-(char)hasRetransmitRetryMinMs;
-(void)setRetransmitRetryMaxMs:(unsigned)arg1 ;
-(void)setHasRetransmitRetryMaxMs:(char)arg1 ;
-(char)hasRetransmitRetryMaxMs;
-(void)setLostPackets:(unsigned)arg1 ;
-(void)setHasLostPackets:(char)arg1 ;
-(char)hasLostPackets;
-(void)setUnrecoveredPackets:(unsigned)arg1 ;
-(void)setHasUnrecoveredPackets:(char)arg1 ;
-(char)hasUnrecoveredPackets;
-(void)setLastPackets:(unsigned)arg1 ;
-(void)setHasLastPackets:(char)arg1 ;
-(char)hasLastPackets;
-(void)setMaxBurstLoss:(unsigned)arg1 ;
-(void)setHasMaxBurstLoss:(char)arg1 ;
-(char)hasMaxBurstLoss;
-(void)setBigLosses:(unsigned)arg1 ;
-(void)setHasBigLosses:(char)arg1 ;
-(char)hasBigLosses;
-(void)setNtpRTTMin:(unsigned)arg1 ;
-(void)setHasNtpRTTMin:(char)arg1 ;
-(char)hasNtpRTTMin;
-(void)setNtpRTTMax:(unsigned)arg1 ;
-(void)setHasNtpRTTMax:(char)arg1 ;
-(char)hasNtpRTTMax;
-(void)setNtpRTTAvg:(unsigned)arg1 ;
-(void)setHasNtpRTTAvg:(char)arg1 ;
-(char)hasNtpRTTAvg;
-(void)setNtpOffsetMin:(unsigned)arg1 ;
-(void)setHasNtpOffsetMin:(char)arg1 ;
-(char)hasNtpOffsetMin;
-(void)setNtpOffsetMax:(unsigned)arg1 ;
-(void)setHasNtpOffsetMax:(char)arg1 ;
-(char)hasNtpOffsetMax;
-(void)setNtpOffsetAvg:(unsigned)arg1 ;
-(void)setHasNtpOffsetAvg:(char)arg1 ;
-(char)hasNtpOffsetAvg;
-(void)setNtpOutliers:(unsigned)arg1 ;
-(void)setHasNtpOutliers:(char)arg1 ;
-(char)hasNtpOutliers;
-(void)setNtpSteps:(unsigned)arg1 ;
-(void)setHasNtpSteps:(char)arg1 ;
-(char)hasNtpSteps;
-(void)setRtpMaxSkew:(unsigned)arg1 ;
-(void)setHasRtpMaxSkew:(char)arg1 ;
-(char)hasRtpMaxSkew;
-(void)setRtpSkewResets:(unsigned)arg1 ;
-(void)setHasRtpSkewResets:(char)arg1 ;
-(char)hasRtpSkewResets;
-(void)setDacpPauses:(unsigned)arg1 ;
-(void)setHasDacpPauses:(char)arg1 ;
-(char)hasDacpPauses;
-(void)setDacpNext:(unsigned)arg1 ;
-(void)setHasDacpNext:(char)arg1 ;
-(char)hasDacpNext;
-(void)setDacpPrevious:(unsigned)arg1 ;
-(void)setHasDacpPrevious:(char)arg1 ;
-(char)hasDacpPrevious;
-(unsigned)compressionPercent;
-(unsigned)glitches;
-(unsigned)retransmitSends;
-(unsigned)retransmitReceives;
-(unsigned)retransmitNotFounds;
-(unsigned)retransmitMinMs;
-(unsigned)retransmitMaxMs;
-(unsigned)retransmitAvgMs;
-(unsigned)retransmitRetryMinMs;
-(unsigned)retransmitRetryMaxMs;
-(unsigned)lostPackets;
-(unsigned)unrecoveredPackets;
-(unsigned)lastPackets;
-(unsigned)maxBurstLoss;
-(unsigned)bigLosses;
-(unsigned)ntpRTTMin;
-(unsigned)ntpRTTMax;
-(unsigned)ntpRTTAvg;
-(unsigned)ntpOffsetMin;
-(unsigned)ntpOffsetMax;
-(unsigned)ntpOffsetAvg;
-(unsigned)ntpOutliers;
-(unsigned)ntpSteps;
-(unsigned)rtpMaxSkew;
-(unsigned)rtpSkewResets;
-(unsigned)dacpPauses;
-(unsigned)dacpNext;
-(unsigned)dacpPrevious;
@end


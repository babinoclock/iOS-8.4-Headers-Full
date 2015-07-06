/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:42 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libAWDSupportFramework.dylib/NSCopying.h>

@interface AWDWifiLinkQualityRecord : PBCodable <NSCopying> {

	double _gateOpenTime;
	double _trafficWatchDuration;
	double _trafficWatchTime;
	unsigned _arpFailureCount;
	unsigned _bcnPerSign;
	unsigned _bcnRcvs;
	unsigned _bcnSched;
	unsigned _dnsServersImpacted;
	unsigned _dnsServersTotal;
	unsigned _fwTxFail;
	unsigned _fwTxFrames;
	unsigned _fwTxPerSign;
	unsigned _fwTxRetrans;
	unsigned _gwArpExpiry;
	unsigned _netScore;
	int _rssi;
	unsigned _rxFrames;
	unsigned _sympAwdCode;
	unsigned _sympSign;
	unsigned _trafficWatchRx;
	unsigned _trgDisc;
	unsigned _txFail;
	unsigned _txFrames;
	unsigned _txPerSign;
	unsigned _txRetrans;
	unsigned _usrImpact;
	unsigned _usrInput;
	unsigned _validState;
	SCD_Struct_AW17 _has;

}

@property (assign,nonatomic) char hasTxFrames; 
@property (assign,nonatomic) unsigned txFrames;                         //@synthesize txFrames=_txFrames - In the implementation block
@property (assign,nonatomic) char hasTxFail; 
@property (assign,nonatomic) unsigned txFail;                           //@synthesize txFail=_txFail - In the implementation block
@property (assign,nonatomic) char hasTxRetrans; 
@property (assign,nonatomic) unsigned txRetrans;                        //@synthesize txRetrans=_txRetrans - In the implementation block
@property (assign,nonatomic) char hasBcnSched; 
@property (assign,nonatomic) unsigned bcnSched;                         //@synthesize bcnSched=_bcnSched - In the implementation block
@property (assign,nonatomic) char hasBcnRcvs; 
@property (assign,nonatomic) unsigned bcnRcvs;                          //@synthesize bcnRcvs=_bcnRcvs - In the implementation block
@property (assign,nonatomic) char hasFwTxFrames; 
@property (assign,nonatomic) unsigned fwTxFrames;                       //@synthesize fwTxFrames=_fwTxFrames - In the implementation block
@property (assign,nonatomic) char hasFwTxFail; 
@property (assign,nonatomic) unsigned fwTxFail;                         //@synthesize fwTxFail=_fwTxFail - In the implementation block
@property (assign,nonatomic) char hasFwTxRetrans; 
@property (assign,nonatomic) unsigned fwTxRetrans;                      //@synthesize fwTxRetrans=_fwTxRetrans - In the implementation block
@property (assign,nonatomic) char hasRxFrames; 
@property (assign,nonatomic) unsigned rxFrames;                         //@synthesize rxFrames=_rxFrames - In the implementation block
@property (assign,nonatomic) char hasRssi; 
@property (assign,nonatomic) int rssi;                                  //@synthesize rssi=_rssi - In the implementation block
@property (assign,nonatomic) char hasTrgDisc; 
@property (assign,nonatomic) unsigned trgDisc;                          //@synthesize trgDisc=_trgDisc - In the implementation block
@property (assign,nonatomic) char hasGwArpExpiry; 
@property (assign,nonatomic) unsigned gwArpExpiry;                      //@synthesize gwArpExpiry=_gwArpExpiry - In the implementation block
@property (assign,nonatomic) char hasUsrInput; 
@property (assign,nonatomic) unsigned usrInput;                         //@synthesize usrInput=_usrInput - In the implementation block
@property (assign,nonatomic) char hasTxPerSign; 
@property (assign,nonatomic) unsigned txPerSign;                        //@synthesize txPerSign=_txPerSign - In the implementation block
@property (assign,nonatomic) char hasFwTxPerSign; 
@property (assign,nonatomic) unsigned fwTxPerSign;                      //@synthesize fwTxPerSign=_fwTxPerSign - In the implementation block
@property (assign,nonatomic) char hasBcnPerSign; 
@property (assign,nonatomic) unsigned bcnPerSign;                       //@synthesize bcnPerSign=_bcnPerSign - In the implementation block
@property (assign,nonatomic) char hasSympSign; 
@property (assign,nonatomic) unsigned sympSign;                         //@synthesize sympSign=_sympSign - In the implementation block
@property (assign,nonatomic) char hasNetScore; 
@property (assign,nonatomic) unsigned netScore;                         //@synthesize netScore=_netScore - In the implementation block
@property (assign,nonatomic) char hasUsrImpact; 
@property (assign,nonatomic) unsigned usrImpact;                        //@synthesize usrImpact=_usrImpact - In the implementation block
@property (assign,nonatomic) char hasSympAwdCode; 
@property (assign,nonatomic) unsigned sympAwdCode;                      //@synthesize sympAwdCode=_sympAwdCode - In the implementation block
@property (assign,nonatomic) char hasArpFailureCount; 
@property (assign,nonatomic) unsigned arpFailureCount;                  //@synthesize arpFailureCount=_arpFailureCount - In the implementation block
@property (assign,nonatomic) char hasDnsServersImpacted; 
@property (assign,nonatomic) unsigned dnsServersImpacted;               //@synthesize dnsServersImpacted=_dnsServersImpacted - In the implementation block
@property (assign,nonatomic) char hasDnsServersTotal; 
@property (assign,nonatomic) unsigned dnsServersTotal;                  //@synthesize dnsServersTotal=_dnsServersTotal - In the implementation block
@property (assign,nonatomic) char hasGateOpenTime; 
@property (assign,nonatomic) double gateOpenTime;                       //@synthesize gateOpenTime=_gateOpenTime - In the implementation block
@property (assign,nonatomic) char hasTrafficWatchRx; 
@property (assign,nonatomic) unsigned trafficWatchRx;                   //@synthesize trafficWatchRx=_trafficWatchRx - In the implementation block
@property (assign,nonatomic) char hasTrafficWatchDuration; 
@property (assign,nonatomic) double trafficWatchDuration;               //@synthesize trafficWatchDuration=_trafficWatchDuration - In the implementation block
@property (assign,nonatomic) char hasTrafficWatchTime; 
@property (assign,nonatomic) double trafficWatchTime;                   //@synthesize trafficWatchTime=_trafficWatchTime - In the implementation block
@property (assign,nonatomic) char hasValidState; 
@property (assign,nonatomic) unsigned validState;                       //@synthesize validState=_validState - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setRssi:(int)arg1 ;
-(void)setHasRssi:(char)arg1 ;
-(char)hasRssi;
-(int)rssi;
-(void)setTxFrames:(unsigned)arg1 ;
-(void)setHasTxFrames:(char)arg1 ;
-(char)hasTxFrames;
-(void)setTxFail:(unsigned)arg1 ;
-(void)setHasTxFail:(char)arg1 ;
-(char)hasTxFail;
-(void)setTxRetrans:(unsigned)arg1 ;
-(void)setHasTxRetrans:(char)arg1 ;
-(char)hasTxRetrans;
-(void)setBcnSched:(unsigned)arg1 ;
-(void)setHasBcnSched:(char)arg1 ;
-(char)hasBcnSched;
-(void)setBcnRcvs:(unsigned)arg1 ;
-(void)setHasBcnRcvs:(char)arg1 ;
-(char)hasBcnRcvs;
-(void)setFwTxFrames:(unsigned)arg1 ;
-(void)setHasFwTxFrames:(char)arg1 ;
-(char)hasFwTxFrames;
-(void)setFwTxFail:(unsigned)arg1 ;
-(void)setHasFwTxFail:(char)arg1 ;
-(char)hasFwTxFail;
-(void)setFwTxRetrans:(unsigned)arg1 ;
-(void)setHasFwTxRetrans:(char)arg1 ;
-(char)hasFwTxRetrans;
-(void)setRxFrames:(unsigned)arg1 ;
-(void)setHasRxFrames:(char)arg1 ;
-(char)hasRxFrames;
-(void)setTrgDisc:(unsigned)arg1 ;
-(void)setHasTrgDisc:(char)arg1 ;
-(char)hasTrgDisc;
-(void)setGwArpExpiry:(unsigned)arg1 ;
-(void)setHasGwArpExpiry:(char)arg1 ;
-(char)hasGwArpExpiry;
-(void)setUsrInput:(unsigned)arg1 ;
-(void)setHasUsrInput:(char)arg1 ;
-(char)hasUsrInput;
-(void)setTxPerSign:(unsigned)arg1 ;
-(void)setHasTxPerSign:(char)arg1 ;
-(char)hasTxPerSign;
-(void)setFwTxPerSign:(unsigned)arg1 ;
-(void)setHasFwTxPerSign:(char)arg1 ;
-(char)hasFwTxPerSign;
-(void)setBcnPerSign:(unsigned)arg1 ;
-(void)setHasBcnPerSign:(char)arg1 ;
-(char)hasBcnPerSign;
-(void)setSympSign:(unsigned)arg1 ;
-(void)setHasSympSign:(char)arg1 ;
-(char)hasSympSign;
-(void)setNetScore:(unsigned)arg1 ;
-(void)setHasNetScore:(char)arg1 ;
-(char)hasNetScore;
-(void)setUsrImpact:(unsigned)arg1 ;
-(void)setHasUsrImpact:(char)arg1 ;
-(char)hasUsrImpact;
-(void)setSympAwdCode:(unsigned)arg1 ;
-(void)setHasSympAwdCode:(char)arg1 ;
-(char)hasSympAwdCode;
-(void)setArpFailureCount:(unsigned)arg1 ;
-(void)setHasArpFailureCount:(char)arg1 ;
-(char)hasArpFailureCount;
-(void)setDnsServersImpacted:(unsigned)arg1 ;
-(void)setHasDnsServersImpacted:(char)arg1 ;
-(char)hasDnsServersImpacted;
-(void)setDnsServersTotal:(unsigned)arg1 ;
-(void)setHasDnsServersTotal:(char)arg1 ;
-(char)hasDnsServersTotal;
-(void)setGateOpenTime:(double)arg1 ;
-(void)setHasGateOpenTime:(char)arg1 ;
-(char)hasGateOpenTime;
-(void)setTrafficWatchRx:(unsigned)arg1 ;
-(void)setHasTrafficWatchRx:(char)arg1 ;
-(char)hasTrafficWatchRx;
-(void)setTrafficWatchDuration:(double)arg1 ;
-(void)setHasTrafficWatchDuration:(char)arg1 ;
-(char)hasTrafficWatchDuration;
-(void)setTrafficWatchTime:(double)arg1 ;
-(void)setHasTrafficWatchTime:(char)arg1 ;
-(char)hasTrafficWatchTime;
-(void)setValidState:(unsigned)arg1 ;
-(void)setHasValidState:(char)arg1 ;
-(char)hasValidState;
-(unsigned)txFrames;
-(unsigned)txFail;
-(unsigned)txRetrans;
-(unsigned)bcnSched;
-(unsigned)bcnRcvs;
-(unsigned)fwTxFrames;
-(unsigned)fwTxFail;
-(unsigned)fwTxRetrans;
-(unsigned)rxFrames;
-(unsigned)trgDisc;
-(unsigned)gwArpExpiry;
-(unsigned)usrInput;
-(unsigned)txPerSign;
-(unsigned)fwTxPerSign;
-(unsigned)bcnPerSign;
-(unsigned)sympSign;
-(unsigned)netScore;
-(unsigned)usrImpact;
-(unsigned)sympAwdCode;
-(unsigned)arpFailureCount;
-(unsigned)dnsServersImpacted;
-(unsigned)dnsServersTotal;
-(double)gateOpenTime;
-(unsigned)trafficWatchRx;
-(double)trafficWatchDuration;
-(double)trafficWatchTime;
-(unsigned)validState;
@end


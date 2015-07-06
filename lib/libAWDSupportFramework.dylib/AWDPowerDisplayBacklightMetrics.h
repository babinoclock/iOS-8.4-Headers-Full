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

@class NSMutableArray;

@interface AWDPowerDisplayBacklightMetrics : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _alsAutoBrightnessChangeCount;
	int _alsAutoBrightnessCurveE0A;
	int _alsAutoBrightnessCurveE0B;
	int _alsAutoBrightnessCurveE1;
	int _alsAutoBrightnessCurveE2;
	int _alsAutoBrightnessCurveEdynth;
	int _alsAutoBrightnessCurveL0A;
	int _alsAutoBrightnessCurveL0B;
	int _alsAutoBrightnessCurveL1;
	int _alsAutoBrightnessCurveL2;
	unsigned _alsAutoBrightnessLux;
	unsigned _alsAutoBrightnessSlider;
	unsigned _alsBrightnessEnableCnt;
	NSMutableArray* _backlightBuckets;
	unsigned _dispOnCount;
	unsigned _displayIdlePercentage;
	unsigned _frameRateResidencyPercentage;
	unsigned _mieCount;
	unsigned _mieDuration;
	unsigned _pluggedDisplayOnDuration;
	unsigned _residencyPercentage30Hz;
	unsigned _residencyPercentage60Hz;
	unsigned _totalBacklightPower;
	unsigned _totalDisplayPower;
	unsigned _unpluggedDisplayOnDuration;
	SCD_Struct_AW16 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasDispOnCount; 
@property (assign,nonatomic) unsigned dispOnCount;                               //@synthesize dispOnCount=_dispOnCount - In the implementation block
@property (assign,nonatomic) char hasUnpluggedDisplayOnDuration; 
@property (assign,nonatomic) unsigned unpluggedDisplayOnDuration;                //@synthesize unpluggedDisplayOnDuration=_unpluggedDisplayOnDuration - In the implementation block
@property (assign,nonatomic) char hasPluggedDisplayOnDuration; 
@property (assign,nonatomic) unsigned pluggedDisplayOnDuration;                  //@synthesize pluggedDisplayOnDuration=_pluggedDisplayOnDuration - In the implementation block
@property (assign,nonatomic) char hasMieDuration; 
@property (assign,nonatomic) unsigned mieDuration;                               //@synthesize mieDuration=_mieDuration - In the implementation block
@property (assign,nonatomic) char hasMieCount; 
@property (assign,nonatomic) unsigned mieCount;                                  //@synthesize mieCount=_mieCount - In the implementation block
@property (assign,nonatomic) char hasDisplayIdlePercentage; 
@property (assign,nonatomic) unsigned displayIdlePercentage;                     //@synthesize displayIdlePercentage=_displayIdlePercentage - In the implementation block
@property (assign,nonatomic) char hasAlsAutoBrightnessCurveE1; 
@property (assign,nonatomic) int alsAutoBrightnessCurveE1;                       //@synthesize alsAutoBrightnessCurveE1=_alsAutoBrightnessCurveE1 - In the implementation block
@property (assign,nonatomic) char hasAlsAutoBrightnessCurveL1; 
@property (assign,nonatomic) int alsAutoBrightnessCurveL1;                       //@synthesize alsAutoBrightnessCurveL1=_alsAutoBrightnessCurveL1 - In the implementation block
@property (assign,nonatomic) char hasAlsAutoBrightnessCurveE2; 
@property (assign,nonatomic) int alsAutoBrightnessCurveE2;                       //@synthesize alsAutoBrightnessCurveE2=_alsAutoBrightnessCurveE2 - In the implementation block
@property (assign,nonatomic) char hasAlsAutoBrightnessCurveL2; 
@property (assign,nonatomic) int alsAutoBrightnessCurveL2;                       //@synthesize alsAutoBrightnessCurveL2=_alsAutoBrightnessCurveL2 - In the implementation block
@property (assign,nonatomic) char hasAlsAutoBrightnessCurveE0A; 
@property (assign,nonatomic) int alsAutoBrightnessCurveE0A;                      //@synthesize alsAutoBrightnessCurveE0A=_alsAutoBrightnessCurveE0A - In the implementation block
@property (assign,nonatomic) char hasAlsAutoBrightnessCurveL0A; 
@property (assign,nonatomic) int alsAutoBrightnessCurveL0A;                      //@synthesize alsAutoBrightnessCurveL0A=_alsAutoBrightnessCurveL0A - In the implementation block
@property (assign,nonatomic) char hasAlsAutoBrightnessCurveE0B; 
@property (assign,nonatomic) int alsAutoBrightnessCurveE0B;                      //@synthesize alsAutoBrightnessCurveE0B=_alsAutoBrightnessCurveE0B - In the implementation block
@property (assign,nonatomic) char hasAlsAutoBrightnessCurveL0B; 
@property (assign,nonatomic) int alsAutoBrightnessCurveL0B;                      //@synthesize alsAutoBrightnessCurveL0B=_alsAutoBrightnessCurveL0B - In the implementation block
@property (assign,nonatomic) char hasAlsAutoBrightnessCurveEdynth; 
@property (assign,nonatomic) int alsAutoBrightnessCurveEdynth;                   //@synthesize alsAutoBrightnessCurveEdynth=_alsAutoBrightnessCurveEdynth - In the implementation block
@property (assign,nonatomic) char hasAlsAutoBrightnessSlider; 
@property (assign,nonatomic) unsigned alsAutoBrightnessSlider;                   //@synthesize alsAutoBrightnessSlider=_alsAutoBrightnessSlider - In the implementation block
@property (assign,nonatomic) char hasAlsAutoBrightnessLux; 
@property (assign,nonatomic) unsigned alsAutoBrightnessLux;                      //@synthesize alsAutoBrightnessLux=_alsAutoBrightnessLux - In the implementation block
@property (assign,nonatomic) char hasAlsAutoBrightnessChangeCount; 
@property (assign,nonatomic) unsigned alsAutoBrightnessChangeCount;              //@synthesize alsAutoBrightnessChangeCount=_alsAutoBrightnessChangeCount - In the implementation block
@property (assign,nonatomic) char hasAlsBrightnessEnableCnt; 
@property (assign,nonatomic) unsigned alsBrightnessEnableCnt;                    //@synthesize alsBrightnessEnableCnt=_alsBrightnessEnableCnt - In the implementation block
@property (nonatomic,retain) NSMutableArray * backlightBuckets;                  //@synthesize backlightBuckets=_backlightBuckets - In the implementation block
@property (assign,nonatomic) char hasTotalDisplayPower; 
@property (assign,nonatomic) unsigned totalDisplayPower;                         //@synthesize totalDisplayPower=_totalDisplayPower - In the implementation block
@property (assign,nonatomic) char hasTotalBacklightPower; 
@property (assign,nonatomic) unsigned totalBacklightPower;                       //@synthesize totalBacklightPower=_totalBacklightPower - In the implementation block
@property (assign,nonatomic) char hasFrameRateResidencyPercentage; 
@property (assign,nonatomic) unsigned frameRateResidencyPercentage;              //@synthesize frameRateResidencyPercentage=_frameRateResidencyPercentage - In the implementation block
@property (assign,nonatomic) char hasResidencyPercentage60Hz; 
@property (assign,nonatomic) unsigned residencyPercentage60Hz;                   //@synthesize residencyPercentage60Hz=_residencyPercentage60Hz - In the implementation block
@property (assign,nonatomic) char hasResidencyPercentage30Hz; 
@property (assign,nonatomic) unsigned residencyPercentage30Hz;                   //@synthesize residencyPercentage30Hz=_residencyPercentage30Hz - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(char)hasTimestamp;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setPluggedDisplayOnDuration:(unsigned)arg1 ;
-(void)setUnpluggedDisplayOnDuration:(unsigned)arg1 ;
-(void)setDispOnCount:(unsigned)arg1 ;
-(void)setMieCount:(unsigned)arg1 ;
-(void)setMieDuration:(unsigned)arg1 ;
-(void)setTotalDisplayPower:(unsigned)arg1 ;
-(void)setTotalBacklightPower:(unsigned)arg1 ;
-(void)setAlsAutoBrightnessChangeCount:(unsigned)arg1 ;
-(void)setAlsAutoBrightnessLux:(unsigned)arg1 ;
-(void)setAlsAutoBrightnessSlider:(unsigned)arg1 ;
-(void)setAlsBrightnessEnableCnt:(unsigned)arg1 ;
-(void)setDisplayIdlePercentage:(unsigned)arg1 ;
-(void)setAlsAutoBrightnessCurveE0A:(int)arg1 ;
-(void)setAlsAutoBrightnessCurveE0B:(int)arg1 ;
-(void)setAlsAutoBrightnessCurveE1:(int)arg1 ;
-(void)setAlsAutoBrightnessCurveE2:(int)arg1 ;
-(void)setAlsAutoBrightnessCurveL0A:(int)arg1 ;
-(void)setAlsAutoBrightnessCurveL0B:(int)arg1 ;
-(void)setAlsAutoBrightnessCurveL1:(int)arg1 ;
-(void)setAlsAutoBrightnessCurveL2:(int)arg1 ;
-(void)setAlsAutoBrightnessCurveEdynth:(int)arg1 ;
-(void)setBacklightBuckets:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addBacklightBucket:(id)arg1 ;
-(unsigned)backlightBucketsCount;
-(void)clearBacklightBuckets;
-(id)backlightBucketAtIndex:(unsigned)arg1 ;
-(void)setHasDispOnCount:(char)arg1 ;
-(char)hasDispOnCount;
-(void)setHasUnpluggedDisplayOnDuration:(char)arg1 ;
-(char)hasUnpluggedDisplayOnDuration;
-(void)setHasPluggedDisplayOnDuration:(char)arg1 ;
-(char)hasPluggedDisplayOnDuration;
-(void)setHasMieDuration:(char)arg1 ;
-(char)hasMieDuration;
-(void)setHasMieCount:(char)arg1 ;
-(char)hasMieCount;
-(void)setHasDisplayIdlePercentage:(char)arg1 ;
-(char)hasDisplayIdlePercentage;
-(void)setHasAlsAutoBrightnessCurveE1:(char)arg1 ;
-(char)hasAlsAutoBrightnessCurveE1;
-(void)setHasAlsAutoBrightnessCurveL1:(char)arg1 ;
-(char)hasAlsAutoBrightnessCurveL1;
-(void)setHasAlsAutoBrightnessCurveE2:(char)arg1 ;
-(char)hasAlsAutoBrightnessCurveE2;
-(void)setHasAlsAutoBrightnessCurveL2:(char)arg1 ;
-(char)hasAlsAutoBrightnessCurveL2;
-(void)setHasAlsAutoBrightnessCurveE0A:(char)arg1 ;
-(char)hasAlsAutoBrightnessCurveE0A;
-(void)setHasAlsAutoBrightnessCurveL0A:(char)arg1 ;
-(char)hasAlsAutoBrightnessCurveL0A;
-(void)setHasAlsAutoBrightnessCurveE0B:(char)arg1 ;
-(char)hasAlsAutoBrightnessCurveE0B;
-(void)setHasAlsAutoBrightnessCurveL0B:(char)arg1 ;
-(char)hasAlsAutoBrightnessCurveL0B;
-(void)setHasAlsAutoBrightnessCurveEdynth:(char)arg1 ;
-(char)hasAlsAutoBrightnessCurveEdynth;
-(void)setHasAlsAutoBrightnessSlider:(char)arg1 ;
-(char)hasAlsAutoBrightnessSlider;
-(void)setHasAlsAutoBrightnessLux:(char)arg1 ;
-(char)hasAlsAutoBrightnessLux;
-(void)setHasAlsAutoBrightnessChangeCount:(char)arg1 ;
-(char)hasAlsAutoBrightnessChangeCount;
-(void)setHasAlsBrightnessEnableCnt:(char)arg1 ;
-(char)hasAlsBrightnessEnableCnt;
-(void)setHasTotalDisplayPower:(char)arg1 ;
-(char)hasTotalDisplayPower;
-(void)setHasTotalBacklightPower:(char)arg1 ;
-(char)hasTotalBacklightPower;
-(void)setFrameRateResidencyPercentage:(unsigned)arg1 ;
-(void)setHasFrameRateResidencyPercentage:(char)arg1 ;
-(char)hasFrameRateResidencyPercentage;
-(void)setResidencyPercentage60Hz:(unsigned)arg1 ;
-(void)setHasResidencyPercentage60Hz:(char)arg1 ;
-(char)hasResidencyPercentage60Hz;
-(void)setResidencyPercentage30Hz:(unsigned)arg1 ;
-(void)setHasResidencyPercentage30Hz:(char)arg1 ;
-(char)hasResidencyPercentage30Hz;
-(unsigned)dispOnCount;
-(unsigned)unpluggedDisplayOnDuration;
-(unsigned)pluggedDisplayOnDuration;
-(unsigned)mieDuration;
-(unsigned)mieCount;
-(unsigned)displayIdlePercentage;
-(int)alsAutoBrightnessCurveE1;
-(int)alsAutoBrightnessCurveL1;
-(int)alsAutoBrightnessCurveE2;
-(int)alsAutoBrightnessCurveL2;
-(int)alsAutoBrightnessCurveE0A;
-(int)alsAutoBrightnessCurveL0A;
-(int)alsAutoBrightnessCurveE0B;
-(int)alsAutoBrightnessCurveL0B;
-(int)alsAutoBrightnessCurveEdynth;
-(unsigned)alsAutoBrightnessSlider;
-(unsigned)alsAutoBrightnessLux;
-(unsigned)alsAutoBrightnessChangeCount;
-(unsigned)alsBrightnessEnableCnt;
-(NSMutableArray *)backlightBuckets;
-(unsigned)totalDisplayPower;
-(unsigned)totalBacklightPower;
-(unsigned)frameRateResidencyPercentage;
-(unsigned)residencyPercentage60Hz;
-(unsigned)residencyPercentage30Hz;
@end

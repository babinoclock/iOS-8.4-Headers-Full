/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:04 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PhotosFormats/PhotosFormats-Structs.h>
@class AVAsset, PFVideoAdjustments, PFSlowMotionTimeRangeMapper, AVAudioMix, AVVideoComposition;

@interface PFVideoAVObjectBuilder : NSObject {

	AVAsset* _videoAsset;
	PFVideoAdjustments* _videoAdjustments;
	PFSlowMotionTimeRangeMapper* __timeRangeMapperForPlayback;
	PFSlowMotionTimeRangeMapper* __timeRangeMapperForExport;
	AVAsset* __finalAsset;
	AVAudioMix* __finalAudioMix;
	AVVideoComposition* __finalVideoComposition;

}

@property (nonatomic,readonly) AVAsset * videoAsset;                                                   //@synthesize videoAsset=_videoAsset - In the implementation block
@property (nonatomic,readonly) PFVideoAdjustments * videoAdjustments;                                  //@synthesize videoAdjustments=_videoAdjustments - In the implementation block
@property (nonatomic,readonly) PFSlowMotionTimeRangeMapper * _timeRangeMapperForPlayback;              //@synthesize _timeRangeMapperForPlayback=__timeRangeMapperForPlayback - In the implementation block
@property (nonatomic,readonly) PFSlowMotionTimeRangeMapper * _timeRangeMapperForExport;                //@synthesize _timeRangeMapperForExport=__timeRangeMapperForExport - In the implementation block
@property (nonatomic,readonly) AVAsset * _finalAsset;                                                  //@synthesize _finalAsset=__finalAsset - In the implementation block
@property (nonatomic,readonly) AVAudioMix * _finalAudioMix;                                            //@synthesize _finalAudioMix=__finalAudioMix - In the implementation block
@property (nonatomic,readonly) AVVideoComposition * _finalVideoComposition;                            //@synthesize _finalVideoComposition=__finalVideoComposition - In the implementation block
-(id)description;
-(PFVideoAdjustments *)videoAdjustments;
-(AVAsset *)videoAsset;
-(SCD_Struct_PF0)convertToOriginalTimeFromScaledTime:(SCD_Struct_PF0)arg1 forExport:(char)arg2 ;
-(SCD_Struct_PF0)convertToScaledTimeFromOriginalTime:(SCD_Struct_PF0)arg1 forExport:(char)arg2 ;
-(void)requestAVAssetForExport:(char)arg1 withResultHandler:(/*^block*/id)arg2 ;
-(id)initWithVideoAsset:(id)arg1 videoAdjustments:(id)arg2 ;
-(void)requestExportSessionWithExportPreset:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)requestPlayerItemWithResultHandler:(/*^block*/id)arg1 ;
-(void)requestAVAssetWithResultHandler:(/*^block*/id)arg1 ;
-(id)initWithAsset:(id)arg1 audioMix:(id)arg2 videoComposition:(id)arg3 ;
-(PFSlowMotionTimeRangeMapper *)_timeRangeMapperForPlayback;
-(PFSlowMotionTimeRangeMapper *)_timeRangeMapperForExport;
-(AVAsset *)_finalAsset;
-(AVAudioMix *)_finalAudioMix;
-(AVVideoComposition *)_finalVideoComposition;
-(id)_getOrCreateTimeRangeMapperForExport:(char)arg1 ;
-(SCD_Struct_PF1)slowMotionRampInRangeForExport:(char)arg1 ;
-(SCD_Struct_PF1)slowMotionRampOutRangeForExport:(char)arg1 ;
@end


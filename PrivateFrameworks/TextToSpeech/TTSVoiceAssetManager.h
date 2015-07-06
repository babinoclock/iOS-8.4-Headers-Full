/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:03 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface TTSVoiceAssetManager : NSObject
+(id)sharedInstance;
-(id)_voiceAssetQueryForName:(id)arg1 language:(id)arg2 gender:(int)arg3 footprint:(int)arg4 version:(id)arg5 localOnly:(char)arg6 ;
-(void)automaticallyDownloadVoiceAssetsIfNeeded;
-(id)_autoDownloadedAssets;
-(void)_automaticallyDownloadVoiceAssetsIfNeeded;
-(id)resourcePathForLanguage:(id)arg1 gender:(int)arg2 footprint:(int)arg3 name:(id)arg4 ;
-(void)getVoiceAssetsLocalOnly:(char)arg1 reply:(/*^block*/id)arg2 ;
-(void)startDownloadingVoiceAsset:(id)arg1 progress:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setAutoDownloadedVoiceAssets:(id)arg1 ;
-(void)getAutoDownloadedVoiceAssets:(/*^block*/id)arg1 ;
@end


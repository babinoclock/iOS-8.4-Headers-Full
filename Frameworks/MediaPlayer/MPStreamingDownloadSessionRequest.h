/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:37 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MPMediaPlaybackItemMetadata, NSString;

@interface MPStreamingDownloadSessionRequest : NSObject {

	char _shouldStartLeaseSession;
	char _shouldUseAccountLessStreaming;
	MPMediaPlaybackItemMetadata* _playbackItemMetadata;
	unsigned _preferredAssetQuality;
	NSString* _buyParameters;
	int _endpointType;
	long long _storeAdamID;

}

@property (nonatomic,retain) MPMediaPlaybackItemMetadata * playbackItemMetadata;              //@synthesize playbackItemMetadata=_playbackItemMetadata - In the implementation block
@property (assign,nonatomic) unsigned preferredAssetQuality;                                  //@synthesize preferredAssetQuality=_preferredAssetQuality - In the implementation block
@property (assign,nonatomic) char shouldStartLeaseSession;                                    //@synthesize shouldStartLeaseSession=_shouldStartLeaseSession - In the implementation block
@property (assign,nonatomic) char shouldUseAccountLessStreaming;                              //@synthesize shouldUseAccountLessStreaming=_shouldUseAccountLessStreaming - In the implementation block
@property (nonatomic,copy,readonly) NSString * buyParameters;                                 //@synthesize buyParameters=_buyParameters - In the implementation block
@property (nonatomic,readonly) int endpointType;                                              //@synthesize endpointType=_endpointType - In the implementation block
@property (nonatomic,readonly) long long storeAdamID;                                         //@synthesize storeAdamID=_storeAdamID - In the implementation block
@property (nonatomic,readonly) char usesSubscriptionLease; 
-(NSString *)buyParameters;
-(char)usesSubscriptionLease;
-(int)endpointType;
-(long long)storeAdamID;
-(MPMediaPlaybackItemMetadata *)playbackItemMetadata;
-(void)setPlaybackItemMetadata:(MPMediaPlaybackItemMetadata *)arg1 ;
-(void)setPreferredAssetQuality:(unsigned)arg1 ;
-(char)shouldUseAccountLessStreaming;
-(void)setShouldUseAccountLessStreaming:(char)arg1 ;
-(void)setShouldStartLeaseSession:(char)arg1 ;
-(unsigned)preferredAssetQuality;
-(char)shouldStartLeaseSession;
@end

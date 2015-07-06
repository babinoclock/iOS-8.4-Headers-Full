/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:16 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/RadioRequest.h>

@class SSURLConnectionRequest, NSString, NSNumber, NSDictionary, NSData, SSVPlaybackLease, RadioPlayEventCollection, NSArray, RadioPlaybackContext, RadioStationMatchContext;

@interface RadioGetTracksRequest : RadioRequest {

	unsigned long long _globalVersion;
	char _includeCleanTracksOnly;
	unsigned _numberOfTracks;
	SSURLConnectionRequest* _request;
	char _shouldIncludeStationInResponse;
	NSString* _stationHash;
	long long _stationID;
	NSString* _stationStringID;
	char _shouldIncludeAsset;
	char _skipPromptForSeamlessPlayback;
	NSNumber* _accountUniqueIdentifier;
	NSDictionary* _additionalRequestParameters;
	NSData* _heartbeatTokenData;
	SSVPlaybackLease* _playbackLease;
	RadioPlayEventCollection* _playEventCollection;
	NSArray* _playActivityFeedEvents;
	RadioPlaybackContext* _playbackContext;
	int _reasonType;
	RadioStationMatchContext* _stationMatchContext;

}

@property (nonatomic,copy,readonly) NSNumber * accountUniqueIdentifier;                   //@synthesize accountUniqueIdentifier=_accountUniqueIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * additionalRequestParameters;                    //@synthesize additionalRequestParameters=_additionalRequestParameters - In the implementation block
@property (assign,nonatomic) unsigned numberOfTracks;                                     //@synthesize numberOfTracks=_numberOfTracks - In the implementation block
@property (nonatomic,copy) NSData * heartbeatTokenData;                                   //@synthesize heartbeatTokenData=_heartbeatTokenData - In the implementation block
@property (assign,nonatomic) char includeCleanTracksOnly;                                 //@synthesize includeCleanTracksOnly=_includeCleanTracksOnly - In the implementation block
@property (nonatomic,retain) SSVPlaybackLease * playbackLease;                            //@synthesize playbackLease=_playbackLease - In the implementation block
@property (nonatomic,copy) RadioPlayEventCollection * playEventCollection;                //@synthesize playEventCollection=_playEventCollection - In the implementation block
@property (nonatomic,copy) NSArray * playActivityFeedEvents;                              //@synthesize playActivityFeedEvents=_playActivityFeedEvents - In the implementation block
@property (nonatomic,copy) RadioPlaybackContext * playbackContext;                        //@synthesize playbackContext=_playbackContext - In the implementation block
@property (assign,nonatomic) int reasonType;                                              //@synthesize reasonType=_reasonType - In the implementation block
@property (assign,nonatomic) char shouldIncludeAsset;                                     //@synthesize shouldIncludeAsset=_shouldIncludeAsset - In the implementation block
@property (assign,nonatomic) char shouldIncludeStationInResponse;                         //@synthesize shouldIncludeStationInResponse=_shouldIncludeStationInResponse - In the implementation block
@property (assign,nonatomic) char skipPromptForSeamlessPlayback;                          //@synthesize skipPromptForSeamlessPlayback=_skipPromptForSeamlessPlayback - In the implementation block
@property (nonatomic,retain) RadioStationMatchContext * stationMatchContext;              //@synthesize stationMatchContext=_stationMatchContext - In the implementation block
-(SSVPlaybackLease *)playbackLease;
-(void)setIncludeCleanTracksOnly:(char)arg1 ;
-(void)cancel;
-(id)init;
-(void)setStationMatchContext:(RadioStationMatchContext *)arg1 ;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)includeCleanTracksOnly;
-(id)_playbackContextForStation:(id)arg1 ;
-(char)skipPromptForSeamlessPlayback;
-(id)initWithStationStringID:(id)arg1 globalVersion:(unsigned long long)arg2 ;
-(NSDictionary *)additionalRequestParameters;
-(NSData *)heartbeatTokenData;
-(RadioPlayEventCollection *)playEventCollection;
-(NSArray *)playActivityFeedEvents;
-(char)shouldIncludeAsset;
-(void)setNumberOfTracks:(unsigned)arg1 ;
-(RadioStationMatchContext *)stationMatchContext;
-(void)setPlaybackContext:(RadioPlaybackContext *)arg1 ;
-(void)setPlayActivityFeedEvents:(NSArray *)arg1 ;
-(void)setPlayEventCollection:(RadioPlayEventCollection *)arg1 ;
-(id)initWithStation:(id)arg1 globalVersion:(unsigned long long)arg2 ;
-(id)initWithGlobalVersion:(unsigned long long)arg1 ;
-(RadioPlaybackContext *)playbackContext;
-(int)reasonType;
-(void)setReasonType:(int)arg1 ;
-(void)setPlaybackLease:(SSVPlaybackLease *)arg1 ;
-(void)setShouldIncludeAsset:(char)arg1 ;
-(unsigned)numberOfTracks;
-(char)shouldIncludeStationInResponse;
-(void)setShouldIncludeStationInResponse:(char)arg1 ;
-(void)setHeartbeatTokenData:(NSData *)arg1 ;
-(void)setSkipPromptForSeamlessPlayback:(char)arg1 ;
-(void)setAdditionalRequestParameters:(NSDictionary *)arg1 ;
-(NSNumber *)accountUniqueIdentifier;
@end


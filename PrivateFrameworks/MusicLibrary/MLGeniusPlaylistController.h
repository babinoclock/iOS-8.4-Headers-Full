/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:30 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableData;

@interface MLGeniusPlaylistController : NSObject {

	void* _echo;
	void* _echo_library;
	void* _echo_cluster_playlist;
	NSMutableData* _sharedBlobMutableData;

}
+(char)hasGeniusDataAvailable;
+(char)hasGeniusFeatureEnabled;
+(unsigned)defaultMinTrackCount;
+(unsigned)defaultTrackCount;
+(char)useFakeGeniusData;
+(void)ignoreUnusedWarnings;
+(void)populateContainer:(id)arg1 withSeedTrack:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
+(id)playlistControllerWithSeedTracks:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(id)init;
-(char)_onBackgroundQueue_fakePopulateContainer:(id)arg1 withSeedTrack:(id)arg2 error:(id*)arg3 ;
-(char)_onBackgroundQueue_populateContainer:(id)arg1 seedTrack:(id)arg2 error:(id*)arg3 ;
-(char)_createClusterPlaylistWithSeedTracks:(id)arg1 error:(id*)arg2 ;
-(id)_onBackgroundQueue_tracksFromClusterForPlaylistItemMax:(unsigned)arg1 error:(id*)arg2 ;
-(id)_debugGetTracksStartingAtTrackWithPersistentID:(unsigned long long)arg1 maxTracks:(unsigned)arg2 stride:(int)arg3 ;
-(char)_canIncludeTrackInGeniusContainer:(id)arg1 ;
-(id)tracksFromClusterForCount:(unsigned)arg1 error:(id*)arg2 ;
-(id)_sharedBlobMutableData;
@end


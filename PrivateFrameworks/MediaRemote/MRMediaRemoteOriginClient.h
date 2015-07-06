/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:21 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MediaRemote/MediaRemote-Structs.h>
@class NSMutableDictionary, NSDictionary, MRNowPlayingArtwork, NSArray;

@interface MRMediaRemoteOriginClient : NSObject {

	char _canBeNowPlayingApp;
	char _isOverrideApp;
	char _keepAlive;
	/*^block*/id _commandHandlerBlock;
	NSMutableDictionary* _commandHandlerBlocks;
	int _notifyRestoreClientStateForLaunch;
	int _notifyDidLaunchToken;
	NSDictionary* _nowPlayingInfo;
	MRNowPlayingArtwork* _nowPlayingArtwork;
	MROriginRef _origin;
	unsigned _routeDiscoveryMode;

}

@property (nonatomic,readonly) MROriginRef origin;                                 //@synthesize origin=_origin - In the implementation block
@property (assign,nonatomic) char canBeNowPlayingApp;                              //@synthesize canBeNowPlayingApp=_canBeNowPlayingApp - In the implementation block
@property (assign,nonatomic) char isOverrideApp;                                   //@synthesize isOverrideApp=_isOverrideApp - In the implementation block
@property (assign,nonatomic) char keepAlive;                                       //@synthesize keepAlive=_keepAlive - In the implementation block
@property (nonatomic,retain) NSDictionary * nowPlayingInfo;                        //@synthesize nowPlayingInfo=_nowPlayingInfo - In the implementation block
@property (nonatomic,retain) MRNowPlayingArtwork * nowPlayingArtwork;              //@synthesize nowPlayingArtwork=_nowPlayingArtwork - In the implementation block
@property (assign,nonatomic) unsigned routeDiscoveryMode;                          //@synthesize routeDiscoveryMode=_routeDiscoveryMode - In the implementation block
@property (nonatomic,copy,readonly) NSArray * commandHandlerBlocks; 
-(unsigned)routeDiscoveryMode;
-(void)setRouteDiscoveryMode:(unsigned)arg1 ;
-(NSDictionary *)nowPlayingInfo;
-(void)dealloc;
-(MROriginRef)origin;
-(void)setCanBeNowPlayingApp:(char)arg1 ;
-(char)isOverrideApp;
-(void)setIsOverrideApp:(char)arg1 ;
-(void)setKeepAlive:(char)arg1 ;
-(MRNowPlayingArtwork *)nowPlayingArtwork;
-(void)setNowPlayingArtwork:(MRNowPlayingArtwork *)arg1 ;
-(void)removeCommandHandlerBlockForKey:(id)arg1 ;
-(void)addCommandHandlerBlock:(/*^block*/id)arg1 forKey:(id)arg2 ;
-(NSArray *)commandHandlerBlocks;
-(void)_avSystemControllerServerConnectionDiedNotification:(id)arg1 ;
-(char)canBeNowPlayingApp;
-(id)initWithOrigin:(MROriginRef)arg1 ;
-(char)keepAlive;
-(void)setNowPlayingInfo:(NSDictionary *)arg1 ;
@end


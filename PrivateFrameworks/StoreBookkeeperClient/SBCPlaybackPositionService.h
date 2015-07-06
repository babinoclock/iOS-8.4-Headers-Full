/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:39 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/StoreBookkeeperClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreBookkeeperClient/SBCXPCService.h>
#import <StoreBookkeeperClient/SBCPlaybackPositionServiceProtocol.h>

@class SBCPlaybackPositionDomain, NSString;

@interface SBCPlaybackPositionService : SBCXPCService <SBCPlaybackPositionServiceProtocol> {

	char _usingPlaybackPositions;
	SBCPlaybackPositionDomain* _playbackPositionDomain;

}

@property (nonatomic,readonly) SBCPlaybackPositionDomain * playbackPositionDomain;              //@synthesize playbackPositionDomain=_playbackPositionDomain - In the implementation block
@property (readonly) char usingPlaybackPositions;                                               //@synthesize usingPlaybackPositions=_usingPlaybackPositions - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceForSyncDomain:(id)arg1 ;
+(id)_serviceForPlaybackPositionDomain:(id)arg1 ;
+(id)serviceForValueDomain:(id)arg1 ;
+(Class)XPCServiceInterfaceClass;
-(oneway void)savePlaybackPositionEntity:(id)arg1 isCheckpoint:(char)arg2 ;
-(oneway void)beginAccessingPlaybackPositionEntities;
-(oneway void)endAccessingPlaybackPositionEntities;
-(SBCPlaybackPositionDomain *)playbackPositionDomain;
-(oneway void)deletePlaybackPositionEntity:(id)arg1 ;
-(oneway void)updateForeignDatabaseWithValuesFromPlaybackPositionEntity:(id)arg1 ;
-(oneway void)synchronizeImmediatelyWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithPlaybackPositionDomain:(id)arg1 ;
-(void)didConnectToService;
-(oneway void)deletePlaybackPositionEntities;
-(oneway void)pullPlaybackPositionEntity:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(oneway void)pushPlaybackPositionEntity:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(char)usingPlaybackPositions;
@end


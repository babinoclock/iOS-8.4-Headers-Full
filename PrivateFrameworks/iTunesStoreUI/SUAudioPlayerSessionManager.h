/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:32 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSArray;

@interface SUAudioPlayerSessionManager : NSObject {

	NSMutableDictionary* _sessions;

}

@property (nonatomic,readonly) NSArray * allSessionURLs; 
+(id)sessionManager;
-(void)dealloc;
-(id)init;
-(id)audioPlayerForURL:(id)arg1 ;
-(void)_audioPlayerStatusChangeNotification:(id)arg1 ;
-(id)endSessionForURL:(id)arg1 ;
-(id)stopAllAudioPlayerSessions;
-(id)startSessionWithURL:(id)arg1 ;
-(NSArray *)allSessionURLs;
@end


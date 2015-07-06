/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:33 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, BBBulletin, NSMutableSet;

@interface BBObserverGatewayEnumerator : NSObject {

	char _cancelled;
	NSArray* _gateways;
	BBBulletin* _bulletin;
	unsigned _feeds;
	NSMutableSet* _gatewaysPlayedLightsAndSirens;
	double _gatewayTimeout;

}

@property (nonatomic,copy) NSArray * gateways;                                        //@synthesize gateways=_gateways - In the implementation block
@property (nonatomic,retain) BBBulletin * bulletin;                                   //@synthesize bulletin=_bulletin - In the implementation block
@property (assign,nonatomic) unsigned feeds;                                          //@synthesize feeds=_feeds - In the implementation block
@property (assign,nonatomic) double gatewayTimeout;                                   //@synthesize gatewayTimeout=_gatewayTimeout - In the implementation block
@property (nonatomic,copy) NSMutableSet * gatewaysPlayedLightsAndSirens;              //@synthesize gatewaysPlayedLightsAndSirens=_gatewaysPlayedLightsAndSirens - In the implementation block
-(void)cancel;
-(void)dealloc;
-(id)init;
-(unsigned)feeds;
-(void)setFeeds:(unsigned)arg1 ;
-(void)setGateways:(NSArray *)arg1 ;
-(void)setGatewayTimeout:(double)arg1 ;
-(void)enumerateWithCompletion:(/*^block*/id)arg1 ;
-(void)attemptNextGatewayInEnumerator:(id)arg1 playLightsAndSirens:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)sendToDefaultGatewayToPlayLightsAndSirens:(char)arg1 ;
-(id)defaultGateway;
-(NSArray *)gateways;
-(double)gatewayTimeout;
-(NSMutableSet *)gatewaysPlayedLightsAndSirens;
-(void)setGatewaysPlayedLightsAndSirens:(NSMutableSet *)arg1 ;
-(BBBulletin *)bulletin;
-(void)setBulletin:(BBBulletin *)arg1 ;
@end


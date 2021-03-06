/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:33 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BulletinBoard/BBRemoteDataProviderClientProxy.h>

@protocol BBRemoteDataProvider, OS_dispatch_queue, BBRemoteDataProviderServerProxy;
@class NSObject, BBDataProviderIdentity, NSString;

@interface BBDataProviderProxy : NSObject <BBRemoteDataProviderClientProxy> {

	id<BBRemoteDataProvider> _dataProvider;
	NSObject*<OS_dispatch_queue> _clientCalloutQueue;
	BBDataProviderIdentity* _identity;
	char _dataProviderDidLoad;
	NSObject*<OS_dispatch_queue> _proxyQueue;
	id<BBRemoteDataProviderServerProxy> _serverProxy;
	char _connected;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (retain) BBDataProviderIdentity * identity;               //@synthesize identity=_identity - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(void)dataProviderDidLoad;
-(void)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)clearedInfoAndBulletinsForClearingAllBulletinsWithLimit:(id)arg1 lastClearedInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)deliverBulletinActionResponse:(id)arg1 ;
-(void)attachmentPNGDataForRecordID:(id)arg1 sizeConstraints:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)attachmentAspectRatioForRecordID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)primaryAttachmentDataForRecordID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)noteSectionInfoDidChange:(id)arg1 ;
-(void)deliverMessageWithName:(id)arg1 userInfo:(id)arg2 ;
-(void)invalidateBulletins;
-(void)addBulletin:(id)arg1 forDestinations:(unsigned)arg2 ;
-(void)modifyBulletin:(id)arg1 ;
-(void)withdrawBulletinsWithRecordID:(id)arg1 ;
-(void)withdrawBulletinWithPublisherBulletinID:(id)arg1 ;
-(void)setServerProxy:(id)arg1 ;
-(id)initWithDataProvider:(id)arg1 clientReplyQueue:(id)arg2 ;
-(void)_makeClientRequest:(/*^block*/id)arg1 ;
-(void)_makeServerRequest:(/*^block*/id)arg1 ;
-(void)updateSectionInfoInCategory:(int)arg1 withHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateSectionInfoWithHandler:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addBulletin:(id)arg1 interrupt:(char)arg2 ;
-(void)reloadSectionParameters;
-(void)reloadDefaultSectionInfo;
-(void)updateClearedInfoWithHandler:(/*^block*/id)arg1 ;
-(void)updateSectionInfoWithHandler:(/*^block*/id)arg1 ;
-(void)setIdentity:(BBDataProviderIdentity *)arg1 ;
-(BBDataProviderIdentity *)identity;
-(void)updateIdentity:(/*^block*/id)arg1 ;
@end


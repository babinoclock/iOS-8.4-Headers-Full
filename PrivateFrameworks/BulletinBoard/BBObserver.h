/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:32 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, BBObserverDelegate;
#import <BulletinBoard/BulletinBoard-Structs.h>
@class NSObject, NSMutableDictionary, NSMutableSet, BBObserverServerProxy, NSString;

@interface BBObserver : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	struct {
		unsigned addBulletinPlayLightsAndSirens : 1;
		unsigned addBulletin : 1;
		unsigned modifyBulletin : 1;
		unsigned modifyBulletinDEPRECATED : 1;
		unsigned removeBulletin : 1;
		unsigned removeBulletinFinal : 1;
		unsigned sectionOrderRule : 1;
		unsigned sectionOrder : 1;
		unsigned sectionOrderDefault : 1;
		unsigned sectionInfo : 1;
		unsigned sectionInfoDefault : 1;
		unsigned sectionParameters : 1;
		unsigned fetchImage : 1;
		unsigned fetchSize : 1;
		unsigned sizeConstraints : 1;
		unsigned multiSizeConstraints : 1;
		unsigned imageForThumbData : 1;
		unsigned sizeForThumbSize : 1;
		unsigned purgeReferences : 1;
		unsigned alertBehaviorOverrides : 1;
		unsigned alertBehaviorOverrideState : 1;
		unsigned invalidatedBulletinIDs : 1;
		unsigned serverConnectionChanged : 1;
		unsigned serverReceivedResponse : 1;
	}  _delegateFlags;
	NSMutableDictionary* _bulletinLifeAssertions;
	NSMutableDictionary* _sectionParameters;
	NSMutableDictionary* _attachmentInfoByBulletinID;
	NSMutableDictionary* _remainingFeedsByBulletinID;
	unsigned _numberOfBulletinFetchesUnderway;
	NSMutableSet* _sectionIDsWithUpdatesUnderway;
	NSMutableDictionary* _bulletinUpdateQueuesBySectionID;
	BBObserverServerProxy* _serverProxy;
	char _isGateway;
	id<BBObserverDelegate> _delegate;
	unsigned _observerFeed;
	NSString* _gatewayName;
	unsigned _gatewayPriority;

}

@property (assign,nonatomic) id<BBObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned observerFeed;                        //@synthesize observerFeed=_observerFeed - In the implementation block
@property (nonatomic,copy,readonly) NSString * gatewayName;                //@synthesize gatewayName=_gatewayName - In the implementation block
@property (nonatomic,readonly) unsigned gatewayPriority;                   //@synthesize gatewayPriority=_gatewayPriority - In the implementation block
+(void)initialize;
-(void)_commonInit:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<BBObserverDelegate>)arg1 ;
-(id)init;
-(id)description;
-(id<BBObserverDelegate>)delegate;
-(void)invalidate;
-(void)sendResponse:(id)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(char)isValid;
-(void)_invalidate;
-(id)initWithQueue:(id)arg1 forGateway:(id)arg2 ;
-(void)getSectionInfoForCategory:(int)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)requestNoticesBulletinsForSectionID:(id)arg1 ;
-(void)requestTodayBulletinsForSectionID:(id)arg1 ;
-(void)requestFutureBulletinsForSectionID:(id)arg1 ;
-(void)_getAttachmentImagesIfPossibleForBulletin:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)clearSection:(id)arg1 ;
-(void)removeBulletins:(id)arg1 inSection:(id)arg2 fromFeed:(unsigned)arg3 ;
-(void)_getParametersIfNecessaryForSectionID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)parametersForSectionID:(id)arg1 ;
-(id)_attachmentInfoForBulletinID:(id)arg1 create:(char)arg2 ;
-(void)_setAttachmentImage:(id)arg1 forKey:(id)arg2 forBulletinID:(id)arg3 ;
-(char)_attachmentImagesFetchedForBulletin:(id)arg1 ;
-(id)_reasonableConstraintsForAttachmentType:(int)arg1 ;
-(void)_fetchAndProcessImageForBulletinID:(id)arg1 withKey:(id)arg2 constraints:(id)arg3 attachmentType:(int)arg4 completion:(/*^block*/id)arg5 ;
-(void)_noteAttachmentImagesFetchedForBulletin:(id)arg1 ;
-(char)_attachmentSizesFetchedForBulletin:(id)arg1 ;
-(void)_setAttachmentSize:(CGSize)arg1 forKey:(id)arg2 forBulletinID:(id)arg3 ;
-(void)_noteAttachmentSizesFetchedForBulletin:(id)arg1 ;
-(void)_getAttachmentSizesIfPossibleForBulletin:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_getAttachmentImagesIfPossibleForBulletins:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_getAttachmentSizesIfPossibleForBulletins:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)_lifeAssertionForBulletinID:(id)arg1 ;
-(void)setObserverFeed:(unsigned)arg1 ;
-(void)_dequeueBulletinUpdateIfPossibleForSection:(id)arg1 ;
-(void)_registerBulletin:(id)arg1 withTransactionID:(unsigned)arg2 ;
-(void)_noteCompletedBulletinUpdateForSection:(id)arg1 ;
-(void)_preFetchAttachmentInfoIfNecessaryForBulletin:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_performOrEnqueueBulletinUpdate:(/*^block*/id)arg1 forSection:(id)arg2 ;
-(id)initWithQueue:(id)arg1 asGateway:(id)arg2 priority:(unsigned)arg3 ;
-(void)getSectionOrderRuleWithCompletion:(/*^block*/id)arg1 ;
-(void)requestListBulletinsForSectionID:(id)arg1 ;
-(void)getSortDescriptorsForSectionID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)getAlertBehaviorOverridesWithCompletion:(/*^block*/id)arg1 ;
-(void)getPrivilegedSenderTypesWithCompletion:(/*^block*/id)arg1 ;
-(void)getPrivilegedAddressBookGroupRecordIDAndNameWithCompletion:(/*^block*/id)arg1 ;
-(void)getUniversalSectionIDForSectionID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)getAttachmentImageForBulletin:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)getPrimaryAttachmentDataForBulletin:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)getBulletinsForPublisherMatchIDs:(id)arg1 sectionID:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)clearBulletins:(id)arg1 inSection:(id)arg2 ;
-(void)removeBulletins:(id)arg1 inSection:(id)arg2 ;
-(void)_getParametersIfNecessaryForSectionIDs:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)getParametersForSectionID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)attachmentImageForKey:(id)arg1 forBulletinID:(id)arg2 ;
-(CGSize)attachmentSizeForKey:(id)arg1 forBulletinID:(id)arg2 ;
-(void)_preFetchAttachmentInfoIfNecessaryForBulletins:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)assertionExpired:(id)arg1 transactionID:(unsigned)arg2 ;
-(void)serverProxy:(id)arg1 connectionStateDidChange:(char)arg2 ;
-(void)_performBulletinFetch:(/*^block*/id)arg1 ;
-(void)_noteCompletedBulletinFetch;
-(void)updateBulletin:(id)arg1 forFeeds:(unsigned)arg2 withReply:(/*^block*/id)arg3 ;
-(void)updateSectionOrderRule:(id)arg1 ;
-(void)updateSectionOrder:(id)arg1 forCategory:(int)arg2 ;
-(void)updateSectionInfo:(id)arg1 inCategory:(int)arg2 ;
-(void)updateSectionParameters:(id)arg1 forSectionID:(id)arg2 ;
-(void)noteAlertBehaviorOverridesChanged:(id)arg1 ;
-(void)noteAlertBehaviorOverrideStateChanged:(id)arg1 ;
-(void)noteServerReceivedResponseForBulletin:(id)arg1 ;
-(unsigned)observerFeed;
-(NSString *)gatewayName;
-(unsigned)gatewayPriority;
-(void)getSectionInfoWithCompletion:(/*^block*/id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:13 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString;


@protocol MSASModel <NSObject>
@property (nonatomic,retain,readonly) NSString * personID; 
@property (assign,nonatomic) int maxGroupedCallbackEventBatchCount; 
@property (assign,nonatomic) double maxGroupedCallbackEventIdleInterval; 
@property (assign,nonatomic) double maxGroupedCallbackEventStaleness; 
@required
-(void)cancel;
-(void)removeObserver:(id)arg1;
-(void)start;
-(void)addObserver:(id)arg1;
-(void)setFocusAlbumGUID:(id)arg1;
-(void)setFocusAssetCollectionGUID:(id)arg1;
-(char)hasCommandsInGroupedCommandQueue;
-(int)assetsInDownloadQueueCount;
-(void)shutDown;
-(void)shutDownForDestruction:(char)arg1 completionBlock:(/*^block*/id)arg2;
-(char)hasEnqueuedActivities;
-(id)albumGUIDs;
-(id)albumWithGUID:(id)arg1;
-(id)accessControlsForAlbumWithGUID:(id)arg1;
-(id)accessControlGUIDsForAlbumWithGUID:(id)arg1;
-(id)accessControlWithGUID:(id)arg1;
-(id)invitations;
-(id)invitationGUIDs;
-(id)invitationForAlbumWithGUID:(id)arg1;
-(id)invitationWithGUID:(id)arg1;
-(id)isPublicAccessEnabledForAlbumWithGUID:(id)arg1;
-(id)assetCollectionsInAlbumWithGUID:(id)arg1;
-(id)assetCollectionGUIDsInAlbumWithGUID:(id)arg1;
-(id)assetCollectionWithGUID:(id)arg1;
-(void)videoURLForAssetCollectionWithGUID:(id)arg1 completionBlock:(/*^block*/id)arg2;
-(void)videoURLsForAssetCollectionWithGUID:(id)arg1 forMediaAssetType:(unsigned)arg2 completionBlock:(/*^block*/id)arg3;
-(id)commentsForAssetCollectionWithGUID:(id)arg1;
-(id)commentWithGUID:(id)arg1;
-(id)captionForAssetCollectionWithGUID:(id)arg1;
-(char)isAlbumWithGUIDMarkedAsUnviewed:(id)arg1;
-(int)unviewedAlbumCount;
-(char)isAssetCollectionWithGUIDMarkedAsUnviewed:(id)arg1;
-(int)unviewedAssetCollectionCountForAlbumWithGUID:(id)arg1;
-(id)earliestUnviewedAssetCollectionGUIDInAlbumWithGUID:(id)arg1;
-(id)lastViewedCommentDateForAssetCollectionWithGUID:(id)arg1;
-(void)setUserInfo:(id)arg1 forAlbumWithGUID:(id)arg2;
-(id)userInfoForAlbumWithGUID:(id)arg1;
-(void)setUserInfo:(id)arg1 forAssetCollectionWithGUID:(id)arg2;
-(id)userInfoForAssetCollectionWithGUID:(id)arg1;
-(void)setUserInfo:(id)arg1 forAccessControlWithGUID:(id)arg2;
-(id)userInfoForAccessControlWithGUID:(id)arg1;
-(void)setUserInfo:(id)arg1 forInvitationWithGUID:(id)arg2;
-(id)userInfoForInvitationWithGUID:(id)arg1;
-(void)setUserInfo:(id)arg1 forCommentWithGUID:(id)arg2;
-(id)userInfoForCommentWithGUID:(id)arg1;
-(id)serverCommunicationBackoffDate;
-(void)refreshResetSync:(char)arg1 info:(id)arg2;
-(void)refreshContentOfAlbumWithGUID:(id)arg1 resetSync:(char)arg2 info:(id)arg3;
-(void)refreshCommentsForAssetCollectionWithGUID:(id)arg1 resetSync:(char)arg2 info:(id)arg3;
-(void)refreshAccessControlListForAlbumWithGUID:(id)arg1 info:(id)arg2;
-(void)addAlbum:(id)arg1 info:(id)arg2;
-(void)modifyAlbumMetadata:(id)arg1 info:(id)arg2;
-(void)deleteAlbumWithGUID:(id)arg1 info:(id)arg2;
-(void)markAlbumGUIDAsViewed:(id)arg1 info:(id)arg2;
-(void)markAlbumGUIDAsViewed:(id)arg1 moveLastViewedAssetCollectionMarker:(char)arg2 info:(id)arg3;
-(void)subscribeToAlbumWithGUID:(id)arg1 info:(id)arg2;
-(void)unsubscribeFromAlbumWithGUID:(id)arg1 info:(id)arg2;
-(void)acceptInvitationWithToken:(id)arg1 info:(id)arg2 completionBlock:(/*^block*/id)arg3;
-(void)acceptInvitationWithGUID:(id)arg1 info:(id)arg2;
-(void)rejectInvitationWithGUID:(id)arg1 info:(id)arg2;
-(void)addAccessControlEntries:(id)arg1 toAlbumWithGUID:(id)arg2 info:(id)arg3;
-(void)removeAccessControlEntryWithGUID:(id)arg1 info:(id)arg2;
-(void)setPublicAccessEnabled:(char)arg1 forAlbumWithGUID:(id)arg2 info:(id)arg3 completionBlock:(/*^block*/id)arg4;
-(void)setMultipleContributorsEnabled:(char)arg1 forAlbumWithGUID:(id)arg2 info:(id)arg3 completionBlock:(/*^block*/id)arg4;
-(void)addAssetCollections:(id)arg1 toAlbumWithGUID:(id)arg2 info:(id)arg3;
-(void)deleteAssetCollectionWithGUID:(id)arg1 info:(id)arg2;
-(void)markCommentsForAssetCollectionWithGUID:(id)arg1 asViewedWithLastViewedDate:(id)arg2 info:(id)arg3;
-(void)addComments:(id)arg1 toAssetCollectionWithGUID:(id)arg2 info:(id)arg3;
-(void)deleteCommentWithGUID:(id)arg1 info:(id)arg2;
-(void)forgetEverythingInfo:(id)arg1;
-(void)forgetEverythingInfo:(id)arg1 completionBlock:(/*^block*/id)arg2;
-(void)refreshResetSync:(char)arg1;
-(void)refreshContentOfAlbumWithGUID:(id)arg1 resetSync:(char)arg2;
-(void)refreshCommentsForAssetCollectionWithGUID:(id)arg1 resetSync:(char)arg2;
-(void)refreshAccessControlListForAlbumWithGUID:(id)arg1;
-(void)addAlbum:(id)arg1;
-(void)modifyAlbumMetadata:(id)arg1;
-(void)deleteAlbumWithGUID:(id)arg1;
-(void)markAlbumGUIDAsViewed:(id)arg1;
-(void)subscribeToAlbumWithGUID:(id)arg1;
-(void)unsubscribeFromAlbumWithGUID:(id)arg1;
-(void)acceptInvitationWithToken:(id)arg1 completionBlock:(/*^block*/id)arg2;
-(void)acceptInvitationWithGUID:(id)arg1;
-(void)rejectInvitationWithGUID:(id)arg1;
-(void)addAccessControlEntries:(id)arg1 toAlbumWithGUID:(id)arg2;
-(void)removeAccessControlEntryWithGUID:(id)arg1;
-(void)setPublicAccessEnabled:(char)arg1 forAlbumWithGUID:(id)arg2 completionBlock:(/*^block*/id)arg3;
-(void)setMultipleContributorsEnabled:(char)arg1 forAlbumWithGUID:(id)arg2 completionBlock:(/*^block*/id)arg3;
-(void)addAssetCollections:(id)arg1 toAlbumWithGUID:(id)arg2;
-(void)deleteAssetCollectionWithGUID:(id)arg1;
-(void)deleteAssetCollectionsWithGUIDs:(id)arg1;
-(void)addComments:(id)arg1 toAssetCollectionWithGUID:(id)arg2;
-(void)deleteCommentWithGUID:(id)arg1;
-(void)forgetEverything;
-(void)retrieveAssets:(id)arg1 inAlbumWithGUID:(id)arg2;
-(void)retrieveAssetsFromAssetCollectionsWithGUIDs:(id)arg1 assetTypeFlags:(int)arg2;
-(id)serverSideConfiguration;
-(id)focusAssetCollectionGUID;
-(char)errorIsCancellation:(id)arg1;
-(int)maxGroupedCallbackEventBatchCount;
-(void)setMaxGroupedCallbackEventBatchCount:(int)arg1;
-(double)maxGroupedCallbackEventIdleInterval;
-(void)setMaxGroupedCallbackEventIdleInterval:(double)arg1;
-(double)maxGroupedCallbackEventStaleness;
-(void)setMaxGroupedCallbackEventStaleness:(double)arg1;
-(id)albums;
-(NSString *)personID;
-(void)markCommentsForAssetCollectionWithGUID:(id)arg1 asViewedWithLastViewedDate:(id)arg2;

@end


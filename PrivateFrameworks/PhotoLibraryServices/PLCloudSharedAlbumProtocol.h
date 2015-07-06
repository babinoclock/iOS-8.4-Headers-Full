/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:00 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, NSDictionary, NSDate, NSOrderedSet, NSNumber;


@protocol PLCloudSharedAlbumProtocol <PLAlbumProtocol>
@property (nonatomic,retain) NSString * cloudGUID; 
@property (nonatomic,retain) NSDictionary * cloudMetadata; 
@property (nonatomic,retain) NSString * cloudOwnerFirstName; 
@property (nonatomic,retain) NSString * cloudOwnerLastName; 
@property (nonatomic,retain) NSString * cloudOwnerFullName; 
@property (nonatomic,retain) NSString * cloudOwnerEmail; 
@property (nonatomic,retain) NSString * cloudOwnerHashedPersonID; 
@property (nonatomic,retain) NSDate * cloudSubscriptionDate; 
@property (nonatomic,retain) NSString * publicURL; 
@property (nonatomic,retain) NSOrderedSet * invitationRecords; 
@property (nonatomic,retain) NSNumber * unseenAssetsCount; 
@property (assign) unsigned unseenAssetsCountIntegerValue; 
@property (nonatomic,retain) NSNumber * cloudPublicURLEnabled; 
@property (nonatomic,retain) NSNumber * cloudPublicURLEnabledLocal; 
@property (nonatomic,retain) NSNumber * cloudMultipleContributorsEnabled; 
@property (nonatomic,retain) NSNumber * cloudMultipleContributorsEnabledLocal; 
@property (nonatomic,retain) NSDate * cloudLastInterestingChangeDate; 
@property (nonatomic,retain) NSDate * cloudCreationDate; 
@property (nonatomic,retain) NSDate * cloudLastContributionDate; 
@property (nonatomic,retain) NSString * cloudPersonID; 
@property (readonly) int cloudRelationshipStateValue; 
@property (readonly) int cloudRelationshipStateLocalValue; 
@property (nonatomic,retain,readonly) NSString * localizedSharedWithLabel; 
@property (nonatomic,retain,readonly) NSOrderedSet * cloudAlbumSubscriberRecords; 
@property (nonatomic,retain,readonly) NSDate * cloudFirstRecentBatchDate; 
@property (assign,nonatomic) char cloudNotificationsEnabled; 
@required
-(id)localizedSharedByLabelAllowsEmail:(char)arg1;
-(id)cloudOwnerDisplayNameIncludingEmail:(char)arg1 allowsEmail:(char)arg2;
-(void)updateCloudLastInterestingChangeDateWithDate:(id)arg1;
-(void)updateCloudLastContributionDateWithDate:(id)arg1;
-(void)getUnseenStartMarkerIndex:(unsigned*)arg1 count:(unsigned*)arg2 showsProgress:(char*)arg3;
-(void)userDeleteSubscriberRecord:(id)arg1;
-(NSString *)cloudGUID;
-(void)setCloudGUID:(id)arg1;
-(NSDictionary *)cloudMetadata;
-(void)setCloudMetadata:(id)arg1;
-(NSString *)cloudOwnerFirstName;
-(void)setCloudOwnerFirstName:(id)arg1;
-(NSString *)cloudOwnerLastName;
-(void)setCloudOwnerLastName:(id)arg1;
-(NSString *)cloudOwnerFullName;
-(void)setCloudOwnerFullName:(id)arg1;
-(NSString *)cloudOwnerEmail;
-(void)setCloudOwnerEmail:(id)arg1;
-(NSString *)cloudOwnerHashedPersonID;
-(void)setCloudOwnerHashedPersonID:(id)arg1;
-(NSDate *)cloudSubscriptionDate;
-(void)setCloudSubscriptionDate:(id)arg1;
-(NSString *)publicURL;
-(void)setPublicURL:(id)arg1;
-(NSOrderedSet *)invitationRecords;
-(void)setInvitationRecords:(id)arg1;
-(NSNumber *)unseenAssetsCount;
-(void)setUnseenAssetsCount:(id)arg1;
-(unsigned)unseenAssetsCountIntegerValue;
-(void)setUnseenAssetsCountIntegerValue:(unsigned)arg1;
-(NSNumber *)cloudPublicURLEnabled;
-(void)setCloudPublicURLEnabled:(id)arg1;
-(NSNumber *)cloudPublicURLEnabledLocal;
-(void)setCloudPublicURLEnabledLocal:(id)arg1;
-(NSNumber *)cloudMultipleContributorsEnabled;
-(void)setCloudMultipleContributorsEnabled:(id)arg1;
-(NSNumber *)cloudMultipleContributorsEnabledLocal;
-(void)setCloudMultipleContributorsEnabledLocal:(id)arg1;
-(NSDate *)cloudLastInterestingChangeDate;
-(void)setCloudLastInterestingChangeDate:(id)arg1;
-(NSDate *)cloudCreationDate;
-(void)setCloudCreationDate:(id)arg1;
-(NSDate *)cloudLastContributionDate;
-(void)setCloudLastContributionDate:(id)arg1;
-(NSString *)cloudPersonID;
-(void)setCloudPersonID:(id)arg1;
-(int)cloudRelationshipStateValue;
-(int)cloudRelationshipStateLocalValue;
-(NSString *)localizedSharedWithLabel;
-(NSOrderedSet *)cloudAlbumSubscriberRecords;
-(NSDate *)cloudFirstRecentBatchDate;
-(char)cloudNotificationsEnabled;
-(void)setCloudNotificationsEnabled:(char)arg1;

@end

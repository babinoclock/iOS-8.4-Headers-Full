/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:02 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSString, NSNumber, NSDate, PLCloudSharedAlbum, NSArray;

@interface PLCloudSharedAlbumInvitationRecord : PLManagedObject

@property (nonatomic,retain) NSString * albumGUID; 
@property (nonatomic,retain) NSString * cloudGUID; 
@property (nonatomic,retain) NSNumber * invitationState; 
@property (nonatomic,retain) NSNumber * invitationStateLocal; 
@property (assign,nonatomic) NSNumber * inviteeEmailKey; 
@property (assign,nonatomic) NSString * inviteeHashedPersonID; 
@property (nonatomic,retain) NSString * inviteeFirstName; 
@property (nonatomic,retain) NSString * inviteeLastName; 
@property (nonatomic,retain) NSString * inviteeFullName; 
@property (assign,nonatomic) char isMine; 
@property (nonatomic,retain) NSDate * inviteeSubscriptionDate; 
@property (nonatomic,retain) PLCloudSharedAlbum * album; 
@property (nonatomic,readonly) NSArray * inviteeEmails; 
@property (nonatomic,readonly) NSArray * inviteePhones; 
+(id)entityName;
+(id)entityInManagedObjectContext:(id)arg1 ;
+(id)insertNewInvitationRecordIntoAlbum:(id)arg1 withFirstName:(id)arg2 lastName:(id)arg3 fullName:(id)arg4 emails:(id)arg5 phones:(id)arg6 inLibrary:(id)arg7 ;
+(id)cloudSharedAlbumInvitationRecordWithGUID:(id)arg1 inLibrary:(id)arg2 ;
+(id)cloudSharedAlbumInvitationRecordsWithAlbumGUID:(id)arg1 inLibrary:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)delete;
-(void)awakeFromInsert;
-(void)prepareForDeletion;
-(void)willSave;
-(id)inviteeDisplayNameIncludingEmail:(char)arg1 ;
-(NSArray *)inviteeEmails;
-(NSArray *)inviteePhones;
-(void)setInviteeEmails:(id)arg1 phones:(id)arg2 ;
-(id)invitationStateDescription;
@end


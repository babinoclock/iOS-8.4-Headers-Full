/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:22 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebUI/WebUI-Structs.h>
@class UIImage, NSString, NSDate, WBSAutomaticReadingListSocialSource, NSURL;

@interface WBSAutomaticReadingListItem : NSObject {

	UIImage* _fallbackProfileImage;
	char _repostedByAuthenticatedUser;
	char _fetchingProfileImage;
	NSString* _uniqueIdentifier;
	id _sourceRecordID;
	NSDate* _sourceRecordCreationDate;
	NSString* _sourceRecordText;
	id _originatorID;
	NSString* _originatorDisplayName;
	NSString* _urlString;
	NSString* _reposterDisplayName;
	NSString* _reposterScreenName;
	UIImage* _originatorProfileImage;
	NSString* _socialSourceAccountIdentifier;

}

@property (nonatomic,readonly) WBSAutomaticReadingListSocialSource * socialSource; 
@property (nonatomic,copy) NSString * uniqueIdentifier;                                                          //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,copy,readonly) id sourceRecordID;                                                           //@synthesize sourceRecordID=_sourceRecordID - In the implementation block
@property (nonatomic,copy,readonly) NSDate * sourceRecordCreationDate;                                           //@synthesize sourceRecordCreationDate=_sourceRecordCreationDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * sourceRecordText;                                                 //@synthesize sourceRecordText=_sourceRecordText - In the implementation block
@property (nonatomic,copy,readonly) id originatorID;                                                             //@synthesize originatorID=_originatorID - In the implementation block
@property (nonatomic,copy,readonly) NSString * originatorDisplayName;                                            //@synthesize originatorDisplayName=_originatorDisplayName - In the implementation block
@property (nonatomic,copy,readonly) NSString * urlString;                                                        //@synthesize urlString=_urlString - In the implementation block
@property (nonatomic,readonly) NSString * reposterDisplayName;                                                   //@synthesize reposterDisplayName=_reposterDisplayName - In the implementation block
@property (nonatomic,readonly) NSString * reposterScreenName;                                                    //@synthesize reposterScreenName=_reposterScreenName - In the implementation block
@property (nonatomic,readonly) NSString * displayString; 
@property (nonatomic,readonly) NSRange displayURLRange; 
@property (nonatomic,readonly) NSRange emphasizedTextRange; 
@property (nonatomic,readonly) NSURL * originatorProfileURL; 
@property (nonatomic,readonly) NSURL * sourceRecordURL; 
@property (nonatomic,readonly) NSString * domainString; 
@property (nonatomic,readonly) NSString * continuousBannerDisplayString; 
@property (nonatomic,readonly) NSString * continuousBannerTitle; 
@property (nonatomic,retain) UIImage * originatorProfileImage;                                                   //@synthesize originatorProfileImage=_originatorProfileImage - In the implementation block
@property (assign,getter=isRepostedByAuthenticatedUser,nonatomic) char repostedByAuthenticatedUser;              //@synthesize repostedByAuthenticatedUser=_repostedByAuthenticatedUser - In the implementation block
@property (nonatomic,copy,readonly) NSString * socialSourceAccountIdentifier;                                    //@synthesize socialSourceAccountIdentifier=_socialSourceAccountIdentifier - In the implementation block
@property (nonatomic,readonly) NSURL * originatorProfileImageURL; 
@property (nonatomic,readonly) NSURL * biggerOriginatorProfileImageURL; 
@property (assign,nonatomic) char fetchingProfileImage;                                                          //@synthesize fetchingProfileImage=_fetchingProfileImage - In the implementation block
+(id)keyPathsForValuesAffectingDomainString;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSString *)displayString;
-(NSString *)uniqueIdentifier;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(NSString *)urlString;
-(id)sourceRecordID;
-(WBSAutomaticReadingListSocialSource *)socialSource;
-(NSString *)sourceRecordText;
-(NSString *)originatorDisplayName;
-(char)fetchingProfileImage;
-(void)setFetchingProfileImage:(char)arg1 ;
-(void)_fetchOriginatorProfileImageForSize:(CGSize)arg1 ;
-(char)isAcceptableOriginatorProfileImage:(id)arg1 ;
-(void)_getFallbackImage;
-(id)bestOriginatorProfileImageForSize:(CGSize)arg1 ;
-(NSURL *)originatorProfileImageURL;
-(NSURL *)biggerOriginatorProfileImageURL;
-(void)setOriginatorProfileImage:(UIImage *)arg1 ;
-(id)initWithDictionary:(id)arg1 socialSourceAccountIdentifier:(id)arg2 ;
-(NSString *)domainString;
-(NSURL *)sourceRecordURL;
-(NSURL *)originatorProfileURL;
-(NSString *)continuousBannerDisplayString;
-(NSString *)continuousBannerTitle;
-(NSRange)displayURLRange;
-(NSRange)emphasizedTextRange;
-(UIImage *)originatorProfileImage;
-(void)updateFallbackImageIfNecessary;
-(NSDate *)sourceRecordCreationDate;
-(id)originatorID;
-(NSString *)reposterDisplayName;
-(NSString *)reposterScreenName;
-(char)isRepostedByAuthenticatedUser;
-(void)setRepostedByAuthenticatedUser:(char)arg1 ;
-(NSString *)socialSourceAccountIdentifier;
@end


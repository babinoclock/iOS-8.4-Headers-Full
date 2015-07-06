/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:22 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebUI/WebUI-Structs.h>
#import <WebUI/WBSAutomaticReadingListItem.h>

@class NSString, NSDate;

@interface WBSAutomaticReadingListTwitterItem : WBSAutomaticReadingListItem {

	NSString* _originatorScreenName;
	NSString* _displayURLString;
	NSString* _expandedURLString;
	NSString* _originatorProfileImageURLString;
	NSDate* _retweetCreationDate;

}

@property (nonatomic,copy) NSString * originatorScreenName;                         //@synthesize originatorScreenName=_originatorScreenName - In the implementation block
@property (nonatomic,copy) NSString * displayURLString;                             //@synthesize displayURLString=_displayURLString - In the implementation block
@property (nonatomic,copy) NSString * expandedURLString;                            //@synthesize expandedURLString=_expandedURLString - In the implementation block
@property (nonatomic,copy) NSString * originatorProfileImageURLString;              //@synthesize originatorProfileImageURLString=_originatorProfileImageURLString - In the implementation block
@property (nonatomic,copy) NSDate * retweetCreationDate;                            //@synthesize retweetCreationDate=_retweetCreationDate - In the implementation block
-(id)description;
-(id)displayString;
-(id)socialSource;
-(id)originatorProfileImageURL;
-(id)biggerOriginatorProfileImageURL;
-(id)initWithDictionary:(id)arg1 socialSourceAccountIdentifier:(id)arg2 ;
-(id)domainString;
-(id)sourceRecordURL;
-(id)originatorProfileURL;
-(NSRange)displayURLRange;
-(id)sourceRecordCreationDate;
-(NSString *)originatorProfileImageURLString;
-(void)setOriginatorProfileImageURLString:(NSString *)arg1 ;
-(NSString *)expandedURLString;
-(NSString *)originatorScreenName;
-(id)_profileImageURLStringWithSuffix:(id)arg1 ;
-(NSString *)displayURLString;
-(NSDate *)retweetCreationDate;
-(id)retweeterProfileURL;
-(void)setOriginatorScreenName:(NSString *)arg1 ;
-(void)setDisplayURLString:(NSString *)arg1 ;
-(void)setExpandedURLString:(NSString *)arg1 ;
-(void)setRetweetCreationDate:(NSDate *)arg1 ;
@end

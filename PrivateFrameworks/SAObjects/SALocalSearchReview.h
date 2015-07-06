/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:22 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, SACalendar, SAUIAppPunchOut, SALocalSearchRating;

@interface SALocalSearchReview : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * author; 
@property (nonatomic,copy) NSString * comment; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,retain) SACalendar * lastUpdated; 
@property (nonatomic,copy) NSString * publication; 
@property (nonatomic,retain) SAUIAppPunchOut * reviewPunchOut; 
@property (nonatomic,retain) SALocalSearchRating * reviewRating; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)review;
+(id)reviewWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setLastUpdated:(SACalendar *)arg1 ;
-(void)setComment:(NSString *)arg1 ;
-(void)setAuthor:(NSString *)arg1 ;
-(NSString *)author;
-(NSString *)comment;
-(id)encodedClassName;
-(NSString *)publication;
-(void)setPublication:(NSString *)arg1 ;
-(SAUIAppPunchOut *)reviewPunchOut;
-(void)setReviewPunchOut:(SAUIAppPunchOut *)arg1 ;
-(SALocalSearchRating *)reviewRating;
-(void)setReviewRating:(SALocalSearchRating *)arg1 ;
-(SACalendar *)lastUpdated;
@end


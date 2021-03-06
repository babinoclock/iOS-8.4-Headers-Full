/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:24 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSString;

@interface SAMPSearchPodcastStations : SADomainCommand

@property (assign,nonatomic) int maxResults; 
@property (nonatomic,copy) NSString * stationName; 
+(id)searchPodcastStations;
+(id)searchPodcastStationsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setStationName:(NSString *)arg1 ;
-(int)maxResults;
-(void)setMaxResults:(int)arg1 ;
-(id)encodedClassName;
-(char)requiresResponse;
-(NSString *)stationName;
@end


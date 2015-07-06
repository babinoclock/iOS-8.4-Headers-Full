/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:23 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSNumber, NSDate, NSString;

@interface SAReminderSearch : SADomainCommand

@property (nonatomic,copy) NSNumber * completionStatus; 
@property (nonatomic,copy) NSDate * dueAfter; 
@property (nonatomic,copy) NSDate * dueBefore; 
@property (nonatomic,copy) NSString * listName; 
@property (nonatomic,copy) NSString * subject; 
@property (nonatomic,copy) NSString * timeZoneId; 
+(id)searchWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)search;
-(void)setDueAfter:(NSDate *)arg1 ;
-(void)setDueBefore:(NSDate *)arg1 ;
-(NSDate *)dueAfter;
-(NSDate *)dueBefore;
-(id)groupIdentifier;
-(void)setSubject:(NSString *)arg1 ;
-(NSString *)subject;
-(id)encodedClassName;
-(char)requiresResponse;
-(NSString *)timeZoneId;
-(void)setTimeZoneId:(NSString *)arg1 ;
-(NSNumber *)completionStatus;
-(void)setCompletionStatus:(NSNumber *)arg1 ;
-(NSString *)listName;
-(void)setListName:(NSString *)arg1 ;
@end


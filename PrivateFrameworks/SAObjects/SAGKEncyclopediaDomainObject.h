/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:29 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAGKDomainObject.h>

@class NSArray, NSString;

@interface SAGKEncyclopediaDomainObject : SAGKDomainObject

@property (nonatomic,copy) NSArray * linkedAnswerGroups; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * nameAnnotation; 
@property (nonatomic,copy) NSArray * structuredAnswers; 
+(id)encyclopediaDomainObject;
+(id)encyclopediaDomainObjectWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(NSArray *)linkedAnswerGroups;
-(void)setLinkedAnswerGroups:(NSArray *)arg1 ;
-(NSArray *)structuredAnswers;
-(void)setStructuredAnswers:(NSArray *)arg1 ;
-(NSString *)nameAnnotation;
-(void)setNameAnnotation:(NSString *)arg1 ;
@end

/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:23 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSNumber, NSArray, NSURL, NSString;

@interface SAFmfSearchCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSNumber * atRequestedLocation; 
@property (nonatomic,copy) NSArray * fmfLocations; 
@property (nonatomic,copy) NSURL * searchContext; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)searchCompleted;
+(id)searchCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setSearchContext:(NSURL *)arg1 ;
-(NSURL *)searchContext;
-(id)encodedClassName;
-(NSNumber *)atRequestedLocation;
-(void)setAtRequestedLocation:(NSNumber *)arg1 ;
-(NSArray *)fmfLocations;
-(void)setFmfLocations:(NSArray *)arg1 ;
@end

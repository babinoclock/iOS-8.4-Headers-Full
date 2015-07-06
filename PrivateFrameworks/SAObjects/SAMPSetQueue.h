/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:22 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSArray, SAMPCollection;

@interface SAMPSetQueue : SADomainCommand

@property (nonatomic,copy) NSArray * filters; 
@property (nonatomic,retain) SAMPCollection * mediaItems; 
@property (assign,nonatomic) char shouldOverrideManuallyCuratedUpNext; 
@property (assign,nonatomic) char shouldShuffle; 
@property (nonatomic,copy) NSArray * sort; 
+(id)setQueue;
+(id)setQueueWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setFilters:(NSArray *)arg1 ;
-(NSArray *)filters;
-(NSArray *)sort;
-(char)shouldShuffle;
-(id)encodedClassName;
-(char)requiresResponse;
-(SAMPCollection *)mediaItems;
-(void)setMediaItems:(SAMPCollection *)arg1 ;
-(char)shouldOverrideManuallyCuratedUpNext;
-(void)setShouldOverrideManuallyCuratedUpNext:(char)arg1 ;
-(void)setShouldShuffle:(char)arg1 ;
-(void)setSort:(NSArray *)arg1 ;
@end


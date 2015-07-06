/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:26 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SAMovieV2MovieContextObject : SADomainObject

@property (nonatomic,copy) NSString * movieName; 
+(id)movieContextObject;
+(id)movieContextObjectWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(NSString *)movieName;
-(void)setMovieName:(NSString *)arg1 ;
@end


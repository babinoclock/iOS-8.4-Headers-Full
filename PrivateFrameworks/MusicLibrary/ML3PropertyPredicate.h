/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:29 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicLibrary/ML3Predicate.h>

@class NSString;

@interface ML3PropertyPredicate : ML3Predicate {

	NSString* _property;

}

@property (nonatomic,copy) NSString * property;              //@synthesize property=_property - In the implementation block
+(id)predicateWithProperty:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSString *)property;
-(id)SQLJoinClausesForClass:(Class)arg1 ;
-(void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2 ;
-(char)isDynamicForEntityClass:(Class)arg1 ;
-(id)initWithProperty:(id)arg1 ;
-(void)setProperty:(NSString *)arg1 ;
@end


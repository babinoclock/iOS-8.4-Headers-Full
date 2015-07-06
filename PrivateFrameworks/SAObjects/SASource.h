/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:28 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString, NSNumber;

@interface SASource : SADomainObject

@property (nonatomic,copy) NSString * accountIdentifier; 
@property (nonatomic,copy) NSString * accountName; 
@property (nonatomic,copy) NSString * domainIdentifier; 
@property (nonatomic,copy) NSNumber * remote; 
+(id)source;
+(id)sourceWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setDomainIdentifier:(NSString *)arg1 ;
-(NSString *)domainIdentifier;
-(id)groupIdentifier;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(NSString *)accountIdentifier;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(NSNumber *)remote;
-(void)setRemote:(NSNumber *)arg1 ;
-(NSString *)accountName;
-(void)setAccountName:(NSString *)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:55 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/NSCopying.h>

@class NSString, NSNumber, NSDictionary;

@interface SSVGratisApplication : NSObject <NSCopying> {

	NSString* _bundleIdentifier;
	NSString* _bundleVersion;
	NSNumber* _externalVersionIdentifier;
	NSString* _itemIdentifier;

}

@property (nonatomic,copy) NSString * bundleIdentifier;                              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bundleVersion;                                 //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (nonatomic,copy) NSNumber * externalVersionIdentifier;                     //@synthesize externalVersionIdentifier=_externalVersionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * itemIdentifier;                                //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
-(void)setItemIdentifier:(NSString *)arg1 ;
-(NSString *)bundleIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSString *)bundleVersion;
-(void)setBundleVersion:(NSString *)arg1 ;
-(NSString *)itemIdentifier;
-(void)setExternalVersionIdentifier:(NSNumber *)arg1 ;
-(NSNumber *)externalVersionIdentifier;
@end


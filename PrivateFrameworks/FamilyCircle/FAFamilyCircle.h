/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:30 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FamilyCircle/NSSecureCoding.h>

@class NSArray, FAFamilyCloudKitProperties, NSDictionary;

@interface FAFamilyCircle : NSObject <NSSecureCoding> {

	NSArray* _members;
	FAFamilyCloudKitProperties* _cloudKitProperties;
	NSDictionary* __serverResponse;

}

@property (readonly) NSArray * members;                                            //@synthesize members=_members - In the implementation block
@property (readonly) FAFamilyCloudKitProperties * cloudKitProperties;              //@synthesize cloudKitProperties=_cloudKitProperties - In the implementation block
@property (readonly) NSDictionary * _serverResponse;                               //@synthesize _serverResponse=__serverResponse - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithServerResponse:(id)arg1 ;
-(FAFamilyCloudKitProperties *)cloudKitProperties;
-(NSDictionary *)_serverResponse;
-(NSArray *)members;
@end


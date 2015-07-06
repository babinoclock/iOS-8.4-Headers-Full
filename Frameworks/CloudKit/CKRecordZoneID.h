/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:29 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <CloudKit/NSSecureCoding.h>
#import <CloudKit/NSCopying.h>

@class NSString;

@interface CKRecordZoneID : NSObject <NSSecureCoding, NSCopying> {

	NSString* _zoneName;
	NSString* _ownerName;

}

@property (nonatomic,retain) NSString * zoneName;               //@synthesize zoneName=_zoneName - In the implementation block
@property (nonatomic,retain) NSString * ownerName;              //@synthesize ownerName=_ownerName - In the implementation block
+(char)supportsSecureCoding;
-(id)sqliteRepresentation;
-(void)setZoneName:(NSString *)arg1 ;
-(void)setOwnerName:(NSString *)arg1 ;
-(id)initWithSqliteRepresentation:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)ownerName;
-(NSString *)zoneName;
-(id)initWithZoneName:(id)arg1 ownerName:(id)arg2 ;
-(id)CKPropertiesDescription;
-(id)ckShortDescription;
@end

/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:31 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <CloudKit/NSSecureCoding.h>

@interface CKModifyBadgeOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	unsigned _badgeValue;

}

@property (assign,nonatomic) unsigned badgeValue;              //@synthesize badgeValue=_badgeValue - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setBadgeValue:(unsigned)arg1 ;
-(unsigned)badgeValue;
@end


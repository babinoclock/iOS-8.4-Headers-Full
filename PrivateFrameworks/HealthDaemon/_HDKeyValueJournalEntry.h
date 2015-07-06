/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:58 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HDJournalEntry.h>

@protocol NSSecureCoding;
@class NSString, NSDate;

@interface _HDKeyValueJournalEntry : HDJournalEntry {

	id<NSSecureCoding> _value;
	NSString* _key;
	NSString* _domain;
	int _category;
	int _provenance;
	NSDate* _modificationDate;

}

@property (nonatomic,readonly) id<NSSecureCoding> value;               //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSString * key;                         //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) NSString * domain;                      //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) int category;                           //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) int provenance;                         //@synthesize provenance=_provenance - In the implementation block
@property (nonatomic,readonly) NSDate * modificationDate;              //@synthesize modificationDate=_modificationDate - In the implementation block
+(char)supportsSecureCoding;
+(int)behavior;
+(void)applyEntries:(id)arg1 withDaemon:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)key;
-(int)category;
-(NSString *)domain;
-(id<NSSecureCoding>)value;
-(NSDate *)modificationDate;
-(int)provenance;
-(id)initWithValue:(id)arg1 key:(id)arg2 domain:(id)arg3 category:(int)arg4 provenance:(int)arg5 modificationDate:(id)arg6 ;
@end

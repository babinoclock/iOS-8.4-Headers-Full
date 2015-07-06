/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:09 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreHAP/CoreHAP-Structs.h>
@class NSString, NSNumber, NSData;

@interface HAPKeychainItem : NSObject {

	char _syncable;
	NSString* _accessGroup;
	NSNumber* _type;
	NSString* _label;
	NSString* _itemDescription;
	NSString* _account;
	NSData* _valueData;
	void* _platformReference;
	NSData* _genericData;

}

@property (nonatomic,retain) NSString * accessGroup;                       //@synthesize accessGroup=_accessGroup - In the implementation block
@property (nonatomic,retain) NSNumber * type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * label;                             //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSString * itemDescription;                   //@synthesize itemDescription=_itemDescription - In the implementation block
@property (nonatomic,retain) NSString * account;                           //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSData * valueData;                           //@synthesize valueData=_valueData - In the implementation block
@property (assign,getter=isSyncable,nonatomic) char syncable;              //@synthesize syncable=_syncable - In the implementation block
@property (assign,nonatomic) void* platformReference;                      //@synthesize platformReference=_platformReference - In the implementation block
@property (nonatomic,retain) NSData * genericData;                         //@synthesize genericData=_genericData - In the implementation block
-(void)dealloc;
-(void)setType:(NSNumber *)arg1 ;
-(NSNumber *)type;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)account;
-(void)setAccount:(NSString *)arg1 ;
-(id)initWithQueryResult:(CFDictionaryRef)arg1 shouldIncludeData:(char)arg2 ;
-(NSString *)accessGroup;
-(void)setAccessGroup:(NSString *)arg1 ;
-(NSString *)itemDescription;
-(void)setItemDescription:(NSString *)arg1 ;
-(NSData *)valueData;
-(void)setValueData:(NSData *)arg1 ;
-(char)isSyncable;
-(void)setSyncable:(char)arg1 ;
-(void*)platformReference;
-(void)setPlatformReference:(void*)arg1 ;
-(NSData *)genericData;
-(void)setGenericData:(NSData *)arg1 ;
@end


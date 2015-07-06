/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:39 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreBookkeeper/SBKResponse.h>

@class NSString, NSData;

@interface SBKPullValueResponse : SBKResponse {

	NSString* _itemKey;
	NSString* _itemVersion;
	NSData* _itemValuePayload;
	NSString* _domainVersion;

}

@property (readonly) NSString * itemKey;                     //@synthesize itemKey=_itemKey - In the implementation block
@property (readonly) NSString * itemVersion;                 //@synthesize itemVersion=_itemVersion - In the implementation block
@property (readonly) NSData * itemValuePayload;              //@synthesize itemValuePayload=_itemValuePayload - In the implementation block
@property (readonly) NSString * domainVersion;               //@synthesize domainVersion=_domainVersion - In the implementation block
+(id)responseWithResponse:(id)arg1 transaction:(id)arg2 ;
-(NSString *)domainVersion;
-(NSData *)itemValuePayload;
-(NSString *)itemKey;
-(NSString *)itemVersion;
-(void)deserializeResponseBodyWithTransaction:(id)arg1 ;
@end


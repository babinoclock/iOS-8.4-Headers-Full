/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:29 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FTServices/FTServices-Structs.h>
#import <FTServices/FTIDSMessage.h>
#import <FTServices/NSCopying.h>

@class NSData;

@interface IDSFaceTimeMessage : FTIDSMessage <NSCopying> {

	NSData* _sessionToken;

}

@property (copy) NSData * sessionToken;              //@synthesize sessionToken=_sessionToken - In the implementation block
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isValidMessage;
-(char)hasRequiredKeys:(id*)arg1 ;
-(id)messageBody;
-(id)requiredKeys;
-(NSData *)sessionToken;
-(void)setSessionToken:(NSData *)arg1 ;
@end


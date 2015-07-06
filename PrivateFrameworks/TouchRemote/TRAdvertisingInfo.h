/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:06 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TouchRemote/TouchRemote-Structs.h>
#import <TouchRemote/NSCopying.h>
#import <TouchRemote/NSMutableCopying.h>
#import <TouchRemote/NSSecureCoding.h>

@class NSData;

@interface TRAdvertisingInfo : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSData* _pairingPublicKey;
	NSData* _wirelessProximityIdentifier;

}

@property (nonatomic,copy,readonly) NSData * pairingPublicKey;                         //@synthesize pairingPublicKey=_pairingPublicKey - In the implementation block
@property (nonatomic,copy,readonly) NSData * wirelessProximityIdentifier;              //@synthesize wirelessProximityIdentifier=_wirelessProximityIdentifier - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)_initWithTXTRecordRepresentation:(id)arg1 ;
-(NSData *)pairingPublicKey;
-(id)_TXTRecordRepresentation;
-(NSData *)wirelessProximityIdentifier;
@end


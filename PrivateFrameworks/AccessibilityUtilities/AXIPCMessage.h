/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:19 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <AccessibilityUtilities/NSSecureCoding.h>

@class NSDictionary, NSString;

@interface AXIPCMessage : NSObject <NSSecureCoding> {

	int _key;
	NSDictionary* _payload;
	unsigned _clientPort;
	SCD_Struct_AX0 _auditToken;

}

@property (assign,nonatomic) int key;                                  //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) NSDictionary * payload;                   //@synthesize payload=_payload - In the implementation block
@property (assign,nonatomic) unsigned clientPort;                      //@synthesize clientPort=_clientPort - In the implementation block
@property (assign,nonatomic) SCD_Struct_AX0 auditToken;                //@synthesize auditToken=_auditToken - In the implementation block
@property (nonatomic,readonly) NSString * senderBundleId; 
+(char)supportsSecureCoding;
+(id)archivedMessageFromData:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(int)key;
-(NSDictionary *)payload;
-(void)setClientPort:(unsigned)arg1 ;
-(void)setKey:(int)arg1 ;
-(SCD_Struct_AX0)auditToken;
-(void)setPayload:(NSDictionary *)arg1 ;
-(id)initWithKey:(int)arg1 payload:(id)arg2 ;
-(unsigned)clientPort;
-(id)initWithKey:(int)arg1 payload:(id)arg2 keyDebugInfo:(id)arg3 ;
-(NSString *)senderBundleId;
-(void)setAuditToken:(SCD_Struct_AX0)arg1 ;
-(id)initWithKey:(int)arg1 ;
@end


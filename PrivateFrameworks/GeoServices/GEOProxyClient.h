/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:48 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSData;

@interface GEOProxyClient : NSObject {

	NSString* _bundleIdentifier;
	NSString* _bundleVersion;
	NSData* _auditToken;
	char _isApplication;

}

@property (nonatomic,retain) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * bundleVersion;                 //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (nonatomic,retain) NSData * auditToken;                      //@synthesize auditToken=_auditToken - In the implementation block
@property (assign,nonatomic) char isApplication;                       //@synthesize isApplication=_isApplication - In the implementation block
+(id)currentClient;
+(id)compositeClientForClients:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSString *)bundleIdentifier;
-(NSData *)auditToken;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(char)isApplication;
-(void)setIsApplication:(char)arg1 ;
-(void)setAuditToken:(NSData *)arg1 ;
-(NSString *)bundleVersion;
-(void)setBundleVersion:(NSString *)arg1 ;
-(id)URLConnectionProperties;
@end


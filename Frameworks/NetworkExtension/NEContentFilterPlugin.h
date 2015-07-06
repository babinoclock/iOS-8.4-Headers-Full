/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:46 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEConfigurationValidating.h>
#import <NetworkExtension/NEPrettyDescription.h>
#import <NetworkExtension/NSSecureCoding.h>
#import <NetworkExtension/NSCopying.h>

@class NSString, NSDictionary, NSData;

@interface NEContentFilterPlugin : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying> {

	char _filterBrowsers;
	char _filterSockets;
	NSString* _pluginType;
	NSDictionary* _vendorConfiguration;
	NSString* _serverAddress;
	NSString* _username;
	NSString* _organization;
	NSData* _passwordReference;
	NSData* _identityReference;

}

@property (readonly) NSString * pluginType;                       //@synthesize pluginType=_pluginType - In the implementation block
@property (assign) char filterBrowsers;                           //@synthesize filterBrowsers=_filterBrowsers - In the implementation block
@property (assign) char filterSockets;                            //@synthesize filterSockets=_filterSockets - In the implementation block
@property (copy) NSDictionary * vendorConfiguration;              //@synthesize vendorConfiguration=_vendorConfiguration - In the implementation block
@property (copy) NSString * serverAddress;                        //@synthesize serverAddress=_serverAddress - In the implementation block
@property (copy) NSString * username;                             //@synthesize username=_username - In the implementation block
@property (copy) NSString * organization;                         //@synthesize organization=_organization - In the implementation block
@property (copy) NSData * passwordReference;                      //@synthesize passwordReference=_passwordReference - In the implementation block
@property (copy) NSData * identityReference;                      //@synthesize identityReference=_identityReference - In the implementation block
+(char)supportsSecureCoding;
-(NSString *)serverAddress;
-(char)checkValidityAndCollectErrors:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 ;
-(NSString *)pluginType;
-(id)initWithPluginType:(id)arg1 ;
-(NSData *)passwordReference;
-(void)setServerAddress:(NSString *)arg1 ;
-(void)setPasswordReference:(NSData *)arg1 ;
-(void)setIdentityReference:(NSData *)arg1 ;
-(NSData *)identityReference;
-(void)setPluginType:(NSString *)arg1 ;
-(NSDictionary *)vendorConfiguration;
-(void)setVendorConfiguration:(NSDictionary *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)organization;
-(void)setOrganization:(NSString *)arg1 ;
-(char)filterBrowsers;
-(void)setFilterBrowsers:(char)arg1 ;
-(char)filterSockets;
-(void)setFilterSockets:(char)arg1 ;
-(NSString *)username;
@end


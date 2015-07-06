/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:28 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/NSSecureCoding.h>
#import <CFNetwork/NSCopying.h>
#import <CFNetwork/NSMutableCopying.h>

@class NSURLRequestInternal, NSString, NSDictionary, NSData, NSInputStream, NSURL;

@interface NSURLRequest : NSObject <NSSecureCoding, NSCopying, NSMutableCopying> {

	NSURLRequestInternal* _internal;

}

@property (copy,readonly) NSString * HTTPMethod; 
@property (copy,readonly) NSDictionary * allHTTPHeaderFields; 
@property (copy,readonly) NSData * HTTPBody; 
@property (retain,readonly) NSInputStream * HTTPBodyStream; 
@property (readonly) char HTTPShouldHandleCookies; 
@property (readonly) char HTTPShouldUsePipelining; 
@property (copy,readonly) NSURL * URL; 
@property (readonly) unsigned cachePolicy; 
@property (readonly) double timeoutInterval; 
@property (copy,readonly) NSURL * mainDocumentURL; 
@property (readonly) unsigned networkServiceType; 
@property (readonly) char allowsCellularAccess; 
+(id)getObjectKeyWithIndex:(long)arg1 ;
+(void)setDefaultTimeoutInterval:(double)arg1 ;
+(double)defaultTimeoutInterval;
+(void)setAllowsAnyHTTPSCertificate:(char)arg1 forHost:(id)arg2 ;
+(void)setAllowsSpecificHTTPSCertificate:(id)arg1 forHost:(id)arg2 ;
+(id)requestWithURL:(id)arg1 ;
+(char)supportsSecureCoding;
+(id)requestWithURL:(id)arg1 cachePolicy:(unsigned)arg2 timeoutInterval:(double)arg3 ;
+(id)allowsSpecificHTTPSCertificateForHost:(id)arg1 ;
+(char)allowsAnyHTTPSCertificateForHost:(id)arg1 ;
-(id)DARequestByApplyingStorageSession:(CFURLStorageSessionRef)arg1 ;
-(id)_web_HTTPReferrer;
-(id)_web_HTTPContentType;
-(char)_web_isConditionalRequest;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(NSInputStream *)HTTPBodyStream;
-(NSData *)HTTPBody;
-(id)valueForHTTPHeaderField:(id)arg1 ;
-(NSURL *)mainDocumentURL;
-(char)_URLHasScheme:(id)arg1 ;
-(char)_isSafeRequestForBackgroundDownload;
-(void)_removePropertyForKey:(id)arg1 ;
-(char)HTTPShouldHandleCookies;
-(double)_timeWindowDelay;
-(double)_timeWindowDuration;
-(id)_copyReplacingURLWithURL:(id)arg1 ;
-(unsigned)networkServiceType;
-(id)boundInterfaceIdentifier;
-(id)HTTPContentType;
-(id)HTTPExtraCookies;
-(id)HTTPReferrer;
-(id)HTTPUserAgent;
-(char)HTTPShouldUsePipelining;
-(id)contentDispositionEncodingFallbackArray;
-(unsigned long long)expectedWorkload;
-(id)_propertyForKey:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)URL;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(char)allowsCellularAccess;
-(NSDictionary *)allHTTPHeaderFields;
-(double)timeoutInterval;
-(unsigned)cachePolicy;
-(void)_setProperty:(id)arg1 forKey:(id)arg2 ;
-(NSString *)HTTPMethod;
-(id)initWithURL:(id)arg1 cachePolicy:(unsigned)arg2 timeoutInterval:(double)arg3 ;
-(CFURLRequestRef)_CFURLRequest;
-(id)_initWithCFURLRequest:(CFURLRequestRef)arg1 ;
@end


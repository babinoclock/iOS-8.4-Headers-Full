/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:18 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface MCManagedDomainsCacheEntry : NSObject {

	char _subdomainsMatch;
	NSString* _domain;
	NSString* _path;
	NSNumber* _port;

}

@property (assign,nonatomic) char subdomainsMatch;              //@synthesize subdomainsMatch=_subdomainsMatch - In the implementation block
@property (nonatomic,retain) NSString * domain;                 //@synthesize domain=_domain - In the implementation block
@property (nonatomic,retain) NSString * path;                   //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) NSNumber * port;                   //@synthesize port=_port - In the implementation block
+(id)normalizedPatternString:(id)arg1 ;
-(id)description;
-(NSString *)domain;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(NSNumber *)port;
-(void)setPort:(NSNumber *)arg1 ;
-(id)initWithPattern:(id)arg1 ;
-(char)subdomainsMatch;
-(void)setSubdomainsMatch:(char)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(char)matchesURL:(id)arg1 ;
@end


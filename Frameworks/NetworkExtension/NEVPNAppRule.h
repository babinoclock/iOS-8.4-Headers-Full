/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:47 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEConfigurationValidating.h>
#import <NetworkExtension/NEPrettyDescription.h>
#import <NetworkExtension/NEConfigurationLegacySupport.h>
#import <NetworkExtension/NSSecureCoding.h>
#import <NetworkExtension/NSCopying.h>

@class NSString, NSArray;

@interface NEVPNAppRule : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying> {

	NSString* _identifier;
	NSArray* _matchExecutables;
	NSArray* _matchDomains;
	NSArray* _matchAccountIdentifiers;

}

@property (readonly) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (copy) NSArray * matchExecutables;                     //@synthesize matchExecutables=_matchExecutables - In the implementation block
@property (copy) NSArray * matchDomains;                         //@synthesize matchDomains=_matchDomains - In the implementation block
@property (copy) NSArray * matchAccountIdentifiers;              //@synthesize matchAccountIdentifiers=_matchAccountIdentifiers - In the implementation block
+(char)supportsSecureCoding;
-(char)checkValidityAndCollectErrors:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 ;
-(id)copyLegacyDictionary;
-(id)initFromLegacyDictionary:(id)arg1 ;
-(NSArray *)matchDomains;
-(char)overlapsWithRule:(id)arg1 ;
-(NSArray *)matchExecutables;
-(void)setMatchExecutables:(NSArray *)arg1 ;
-(void)setMatchAccountIdentifiers:(NSArray *)arg1 ;
-(void)setMatchDomains:(NSArray *)arg1 ;
-(NSArray *)matchAccountIdentifiers;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
@end


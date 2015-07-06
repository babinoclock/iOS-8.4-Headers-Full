/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:17 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <CoreSuggestions/NSCopying.h>
#import <CoreSuggestions/NSSecureCoding.h>

@class NSString;

@interface SGMailMessageKey : NSObject <NSCopying, NSSecureCoding> {

	long long _messageIdHash;
	NSString* _source;
	NSString* _messageId;

}

@property (nonatomic,readonly) NSString * source;                    //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) NSString * messageId;                 //@synthesize messageId=_messageId - In the implementation block
@property (nonatomic,readonly) long long messageIdHash;              //@synthesize messageIdHash=_messageIdHash - In the implementation block
+(char)supportsSecureCoding;
-(NSString *)messageId;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)source;
-(id)initWithSource:(id)arg1 messageIdHash:(long long)arg2 ;
-(char)isEqualToMailMessageKey:(id)arg1 ;
-(long long)messageIdHash;
-(id)initWithSource:(id)arg1 messageId:(id)arg2 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:16 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <CoreSuggestions/NSSecureCoding.h>
#import <CoreSuggestions/NSCopying.h>

@class NSString;

@interface SGSimpleMailHeaderKeyValue : NSObject <NSSecureCoding, NSCopying> {

	NSString* _key;
	NSString* _value;

}

@property (nonatomic,readonly) NSString * key;                //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) NSString * value;              //@synthesize value=_value - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithKey:(id)arg1 value:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSString *)key;
-(NSString *)value;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqualToSimpleMailHeaderKeyValue:(id)arg1 ;
@end

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

@class NSString, NSDate, NSURL;

@interface SGOrigin : NSObject <NSCopying, NSSecureCoding> {

	unsigned _type;
	NSString* _sourceKey;
	NSString* _externalKey;
	NSString* _contextSnippet;
	NSRange _contextSnippetRange;
	NSDate* _date;
	NSString* _title;
	char _fromForwardedMessage;

}

@property (nonatomic,readonly) unsigned type;                                              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * sourceKey;                                       //@synthesize sourceKey=_sourceKey - In the implementation block
@property (nonatomic,readonly) NSString * externalKey;                                     //@synthesize externalKey=_externalKey - In the implementation block
@property (nonatomic,readonly) NSDate * date;                                              //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSString * title;                                           //@synthesize title=_title - In the implementation block
@property (getter=isFromForwardedMessage,readonly) char fromForwardedMessage;              //@synthesize fromForwardedMessage=_fromForwardedMessage - In the implementation block
@property (nonatomic,readonly) NSURL * url; 
+(char)supportsSecureCoding;
+(id)originWithType:(unsigned)arg1 sourceKey:(id)arg2 externalKey:(id)arg3 fromForwardedMessage:(char)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSURL *)url;
-(unsigned)type;
-(NSString *)title;
-(NSDate *)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithType:(unsigned)arg1 sourceKey:(id)arg2 externalKey:(id)arg3 fromForwardedMessage:(char)arg4 ;
-(char)isEqualToOrigin:(id)arg1 ;
-(NSString *)sourceKey;
-(char)isFromForwardedMessage;
-(NSString *)externalKey;
@end


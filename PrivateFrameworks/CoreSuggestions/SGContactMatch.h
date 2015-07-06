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

@class SGContact;

@interface SGContactMatch : NSObject <NSCopying, NSSecureCoding> {

	long long _matchingFieldType;
	SGContact* _contact;

}

@property (nonatomic,readonly) SGContact * contact;                     //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) id<SGObject> matchingField; 
+(char)supportsSecureCoding;
-(id)initWithContact:(id)arg1 ;
-(SGContact *)contact;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqualToContactMatch:(id)arg1 ;
-(id<SGObject>)matchingField;
@end


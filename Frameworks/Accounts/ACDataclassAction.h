/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:16 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Accounts/NSSecureCoding.h>

@interface ACDataclassAction : NSObject <NSSecureCoding> {

	char _isDestructive;
	int _type;

}

@property (nonatomic,readonly) int type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) char isDestructive;              //@synthesize isDestructive=_isDestructive - In the implementation block
+(id)destructiveActionWithType:(int)arg1 ;
+(char)supportsSecureCoding;
+(id)actionWithType:(int)arg1 ;
-(id)initWithType:(int)arg1 destructivity:(char)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(int)type;
-(char)isDestructive;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:46 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <CoreTelephony/NSCopying.h>
#import <CoreTelephony/CTMessageAddress.h>

@class NSString;

@interface CTEmailAddress : NSObject <NSCopying, CTMessageAddress> {

	NSString* _address;

}

@property (readonly) NSString * address;              //@synthesize address=_address - In the implementation block
+(id)emailAddress:(id)arg1 ;
-(id)initWithAddress:(id)arg1 ;
-(id)encodedString;
-(NSString *)address;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)canonicalFormat;
@end


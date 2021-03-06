/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:26 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/NSCopying.h>
#import <HealthKit/NSSecureCoding.h>

@interface _HKAuthorizationRecord : NSObject <NSCopying, NSSecureCoding> {

	int _status;
	int _request;

}

@property (readonly) int status; 
@property (readonly) int request; 
+(char)supportsSecureCoding;
-(char)requestedSharing;
-(char)requestedReading;
-(id)initWithAuthorizationStatus:(int)arg1 authorizationRequest:(int)arg2 ;
-(char)isCompatibleStatus:(int)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(int)request;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)status;
@end


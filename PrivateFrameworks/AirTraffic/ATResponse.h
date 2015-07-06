/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:24 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirTraffic/ATMessage.h>
#import <AirTraffic/NSSecureCoding.h>

@class NSError;

@interface ATResponse : ATMessage <NSSecureCoding> {

	char _partial;
	NSError* _error;

}

@property (assign,getter=isPartial,nonatomic) char partial;              //@synthesize partial=_partial - In the implementation block
@property (nonatomic,retain) NSError * error;                            //@synthesize error=_error - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithATPMessage:(id)arg1 ;
-(id)ATPMessage;
-(id)ATPMessageWithPayloadData:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)additionalDescription;
-(NSError *)error;
-(char)isPartial;
-(void)setPartial:(char)arg1 ;
-(void)setError:(NSError *)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:36 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SpringBoardServices/SpringBoardServices-Structs.h>
@class NSString;

@interface SBSAssertion : NSObject {

	NSString* _assertionName;
	NSString* _reason;
	unsigned _port;
	opaque_pthread_mutex_t _lock;

}

@property (nonatomic,readonly) NSString * assertionName;              //@synthesize assertionName=_assertionName - In the implementation block
@property (nonatomic,readonly) NSString * reason;                     //@synthesize reason=_reason - In the implementation block
-(void)dealloc;
-(void)invalidate;
-(NSString *)reason;
-(NSString *)assertionName;
-(id)initWithAssertionName:(id)arg1 reason:(id)arg2 port:(unsigned)arg3 ;
@end

/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:31 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Search/SPFeedback.h>

@interface SPFeedbackAbandonment : SPFeedback {

	unsigned _reason;

}

@property (assign,nonatomic) unsigned reason;              //@synthesize reason=_reason - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)reason;
-(void)setReason:(unsigned)arg1 ;
-(id)parsecFeedbackFromSession:(id)arg1 ;
@end


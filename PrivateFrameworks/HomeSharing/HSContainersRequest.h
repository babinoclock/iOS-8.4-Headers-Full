/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:03 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HomeSharing/HSRequest.h>

@interface HSContainersRequest : HSRequest {

	char _shouldParseResponse;

}

@property (assign,nonatomic) char shouldParseResponse;              //@synthesize shouldParseResponse=_shouldParseResponse - In the implementation block
+(id)requestWithDatabaseID:(unsigned)arg1 ;
-(id)initWithAction:(id)arg1 ;
-(id)canonicalResponseForResponse:(id)arg1 ;
-(id)initWithDatabaseID:(unsigned)arg1 ;
-(char)shouldParseResponse;
-(void)setShouldParseResponse:(char)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:17 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/RadioRequest.h>

@class SSURLConnectionRequest;

@interface RadioGetWishListRequest : RadioRequest {

	SSURLConnectionRequest* _request;
	unsigned _maxNumberOfTracks;

}

@property (assign,nonatomic) unsigned maxNumberOfTracks;              //@synthesize maxNumberOfTracks=_maxNumberOfTracks - In the implementation block
-(void)cancel;
-(id)init;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned)maxNumberOfTracks;
-(void)setMaxNumberOfTracks:(unsigned)arg1 ;
@end


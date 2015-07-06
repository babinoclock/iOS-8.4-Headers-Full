/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:16 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/RadioRequest.h>

@class SSURLConnectionRequest, RadioStation;

@interface RadioGetLikesRequest : RadioRequest {

	unsigned _numberOfBannedTracks;
	unsigned _numberOfLikedTracks;
	SSURLConnectionRequest* _request;
	RadioStation* _station;
	char _shouldProcessItems;

}

@property (assign,nonatomic) unsigned numberOfLikedTracks;               //@synthesize numberOfLikedTracks=_numberOfLikedTracks - In the implementation block
@property (assign,nonatomic) unsigned numberOfBannedTracks;              //@synthesize numberOfBannedTracks=_numberOfBannedTracks - In the implementation block
@property (assign,nonatomic) char shouldProcessItems;                    //@synthesize shouldProcessItems=_shouldProcessItems - In the implementation block
-(id)initWithStation:(id)arg1 ;
-(void)cancel;
-(id)init;
-(unsigned)numberOfBannedTracks;
-(unsigned)numberOfLikedTracks;
-(char)shouldProcessItems;
-(void)setNumberOfBannedTracks:(unsigned)arg1 ;
-(void)setNumberOfLikedTracks:(unsigned)arg1 ;
-(void)setShouldProcessItems:(char)arg1 ;
-(void)startWithLikeBanCompletionHandler:(/*^block*/id)arg1 ;
@end


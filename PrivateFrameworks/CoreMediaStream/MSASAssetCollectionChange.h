/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:12 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface MSASAssetCollectionChange : NSObject {

	char _wasDeleted;
	NSString* _GUID;
	NSString* _ctag;

}

@property (getter=UID,nonatomic,retain) NSString * GUID;              //@synthesize GUID=_GUID - In the implementation block
@property (nonatomic,retain) NSString * ctag;                         //@synthesize ctag=_ctag - In the implementation block
@property (assign,nonatomic) char wasDeleted;                         //@synthesize wasDeleted=_wasDeleted - In the implementation block
-(id)description;
-(NSString *)ctag;
-(char)wasDeleted;
-(void)setCtag:(NSString *)arg1 ;
-(void)setWasDeleted:(char)arg1 ;
-(void)setGUID:(NSString *)arg1 ;
-(NSString *)GUID;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:20 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface DAMailboxFetchSearchResultRequest : NSObject {

	NSString* _longID;
	int _bodyFormat;
	int _maxSize;

}

@property (nonatomic,copy) NSString * longID;              //@synthesize longID=_longID - In the implementation block
@property (assign,nonatomic) int bodyFormat;               //@synthesize bodyFormat=_bodyFormat - In the implementation block
@property (assign,nonatomic) int maxSize;                  //@synthesize maxSize=_maxSize - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(int)maxSize;
-(void)setMaxSize:(int)arg1 ;
-(void)setBodyFormat:(int)arg1 ;
-(void)setLongID:(NSString *)arg1 ;
-(int)bodyFormat;
-(id)initRequestForBodyFormat:(int)arg1 withLongID:(id)arg2 withBodySizeLimit:(int)arg3 ;
-(NSString *)longID;
@end


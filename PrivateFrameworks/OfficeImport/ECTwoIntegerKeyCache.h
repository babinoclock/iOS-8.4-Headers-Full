/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:43 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class OITSUIntegerKeyDictionary;

@interface ECTwoIntegerKeyCache : NSObject {

	OITSUIntegerKeyDictionary* mCache;
	char _assertForCollisions;

}

@property (assign,nonatomic) char assertForCollisions;              //@synthesize assertForCollisions=_assertForCollisions - In the implementation block
-(void)dealloc;
-(id)init;
-(id)objectForKey1:(int)arg1 key2:(int)arg2 ;
-(void)setObject:(id)arg1 forKey1:(int)arg2 key2:(int)arg3 ;
-(char)assertForCollisions;
-(void)setAssertForCollisions:(char)arg1 ;
@end


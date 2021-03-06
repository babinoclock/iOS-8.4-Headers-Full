/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:27 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iTunesStore/iTunesStore-Structs.h>
@class NSDictionary;

@interface ISUserNotification : NSObject {

	int _allowedRetryCount;
	int _currentRetryCount;
	NSDictionary* _dictionary;
	unsigned long _optionFlags;
	NSDictionary* _userInfo;

}

@property (readonly) NSDictionary * dictionary; 
@property (readonly) unsigned long optionFlags; 
@property (assign) int allowedRetryCount;                    //@synthesize allowedRetryCount=_allowedRetryCount - In the implementation block
@property (assign) int currentRetryCount;                    //@synthesize currentRetryCount=_currentRetryCount - In the implementation block
@property (retain) NSDictionary * userInfo;                  //@synthesize userInfo=_userInfo - In the implementation block
-(void)setAllowedRetryCount:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(NSDictionary *)dictionary;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)userInfo;
-(int)allowedRetryCount;
-(CFUserNotificationRef)copyUserNotification;
-(int)currentRetryCount;
-(void)setCurrentRetryCount:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 options:(unsigned long)arg2 ;
-(unsigned long)optionFlags;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:25 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSString;

@interface YTProtectedDefaults : NSObject {

	NSMutableDictionary* _internalDictionary;
	char _shouldSynchronize;
	NSString* _plistPath;

}
+(id)sharedInstance;
-(id)init;
-(void)removeObjectForKey:(id)arg1 ;
-(char)synchronize;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)_protectedDataAvailable;
-(void)_protectedDataUnvailable;
@end


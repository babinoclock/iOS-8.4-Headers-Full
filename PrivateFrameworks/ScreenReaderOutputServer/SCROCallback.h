/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:30 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScreenReaderOutputServer/NSCoding.h>

@interface SCROCallback : NSObject <NSCoding> {

	int _key;
	id _object;
	char _isAtomic;

}
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(int)key;
-(id)object;
-(id)initWithKey:(int)arg1 object:(id)arg2 ;
-(void)setIsAtomic:(char)arg1 ;
-(char)isAtomic;
-(void)postToHandler:(id)arg1 ;
@end


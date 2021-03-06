/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:55 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@interface NSAutoreleasePool : NSObject {

	void* _token;
	void* _reserved3;
	void* _reserved2;
	void* _reserved;

}
+(void)showPools;
+(void)releaseAllPools;
+(unsigned)autoreleasedObjectCount;
+(unsigned)topAutoreleasePoolCount;
+(char)autoreleasePoolExists;
+(void)enableRelease:(char)arg1 ;
+(void)enableFreedObjectCheck:(char)arg1 ;
+(unsigned)poolCountHighWaterMark;
+(void)setPoolCountHighWaterMark:(unsigned)arg1 ;
+(unsigned)poolCountHighWaterResolution;
+(void)setPoolCountHighWaterResolution:(unsigned)arg1 ;
+(unsigned)totalAutoreleasedObjects;
+(void)resetTotalAutoreleasedObjects;
+(void)addObject:(id)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)retain;
-(void)dealloc;
-(id)init;
-(void)addObject:(id)arg1 ;
-(id)autorelease;
-(unsigned)retainCount;
-(id)initWithCapacity:(unsigned)arg1 ;
-(void)drain;
-(oneway void)release;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:35 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class TSMTraceBuffer;

@interface TCTracingManager : NSObject {

	TSMTraceBuffer* mBuffer;
	unsigned mCount;

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)_singletonAlloc;
+(id)sharedManager;
-(id)retain;
-(void)dealloc;
-(id)autorelease;
-(unsigned)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setup;
-(void)teardown;
-(oneway void)release;
@end


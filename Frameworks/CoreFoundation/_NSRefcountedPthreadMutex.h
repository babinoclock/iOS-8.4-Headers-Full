/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:41 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@interface _NSRefcountedPthreadMutex : NSObject {

	opaque_pthread_mutex_t lock;

}
-(void)dealloc;
-(id)init;
-(void)lock;
-(void)unlock;
-(void)finalize;
@end


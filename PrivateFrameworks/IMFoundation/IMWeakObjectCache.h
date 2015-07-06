/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:10 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <IMFoundation/IMFoundation-Structs.h>
@class NSMutableDictionary;

@interface IMWeakObjectCache : NSObject {

	NSMutableDictionary* _weakObjectCache;
	opaque_pthread_mutex_t _tableLock;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(id)copyOrSetObject:(id)arg1 forKey:(id)arg2 ;
-(void)removeObject:(id)arg1 key:(id)arg2 ;
-(id)copyObjectForKey:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
@end


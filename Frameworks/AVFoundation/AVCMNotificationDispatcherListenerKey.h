/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:12 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/NSCopying.h>

@class AVWeakReference, NSString;

@interface AVCMNotificationDispatcherListenerKey : NSObject <NSCopying> {

	AVWeakReference* _weakReferenceToListener;
	/*function pointer*/void* _callback;
	NSString* _name;
	const void* _object;

}
+(id)listenerKeyWithWeakReferenceToListener:(id)arg1 callback:(/*function pointer*/void*)arg2 name:(id)arg3 object:(const void*)arg4 ;
-(id)initWithWeakReferenceToListener:(id)arg1 callback:(/*function pointer*/void*)arg2 name:(id)arg3 object:(const void*)arg4 ;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


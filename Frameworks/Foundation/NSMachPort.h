/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:58 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSPort.h>

@interface NSMachPort : NSPort {

	id _delegate;
	unsigned _flags;
	unsigned _machPort;
	unsigned _reserved;

}

@property (readonly) unsigned machPort; 
+(id)portWithMachPort:(unsigned)arg1 ;
+(char)sendBeforeTime:(double)arg1 streamData:(id)arg2 components:(id)arg3 to:(id)arg4 from:(id)arg5 msgid:(unsigned)arg6 reserved:(unsigned)arg7 ;
+(void)resetAllPorts;
+(id)portWithMachPort:(unsigned)arg1 options:(unsigned)arg2 ;
+(void)_fixNSMachPortLeak;
+(id)port;
-(unsigned)machPort;
-(unsigned long)_cfTypeID;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(id)initWithMachPort:(unsigned)arg1 ;
-(char)sendBeforeDate:(id)arg1 components:(id)arg2 from:(id)arg3 reserved:(unsigned)arg4 ;
-(char)sendBeforeDate:(id)arg1 msgid:(unsigned)arg2 components:(id)arg3 from:(id)arg4 reserved:(unsigned)arg5 ;
-(char)sendBeforeTime:(double)arg1 streamData:(void*)arg2 components:(id)arg3 from:(id)arg4 msgid:(unsigned)arg5 ;
-(id)initWithMachPort:(unsigned)arg1 options:(unsigned)arg2 ;
-(id)retain;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(char)isKindOfClass:(Class)arg1 ;
-(char)isEqual:(id)arg1 ;
-(char)isMemberOfClass:(Class)arg1 ;
-(unsigned)retainCount;
-(unsigned)hash;
-(id)delegate;
-(void)invalidate;
-(char)isValid;
-(char)_tryRetain;
-(char)_isDeallocating;
-(oneway void)release;
-(void)finalize;
@end

